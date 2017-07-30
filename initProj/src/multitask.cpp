//============================================================================
// Name        : multitask.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <unistd.h>
#include "../include/R_Thread.h"
#include "../include/R_Conditional.h"
#include "../include/R_Mutex.h"
#include "../include/R_Log.h"

using namespace std;

R_Mutex m;
R_Conditional c;

bool state;

void * run(void * x){
	while(1){
		m.Lock();
		if (state == false) {
			cout << "run" << "\t\t\t" << *(int*) x << "state = " << state << endl << flush;
			state = true;
			c.Signal();
		}
		else
		{
			c.Wait(m);
		}
		m.Unlock();
		sleep(1);
	}
	return 0;
}

void * run1(void * x){
	while(1){
		m.Lock();
		if (state == true) {
			cout << "run" << "\t\t\t\t\t" << *(int*) x << "state = " << state << endl << flush;
			state = false;
			c.Signal();
		}
		else
		{
			c.Wait(m);
		}
		m.Unlock();
		sleep(1);
	}
	return 0;
}


int main() {
	state = false;
	R_Thread r1,r2;
	int x = 0;
	r1.AttachFunction(run, (void*) &x);
	x++;
	r2.AttachFunction(run1, (void*) &x);
	r1.JoinThread();
	r2.JoinThread();
	LOG("hello")
	return 0;
}
