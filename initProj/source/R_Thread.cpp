/*
 * R_Thread.cpp
 *
 *  Created on: Jul 30, 2017
 *      Author: rafal
 */

#include "../include/R_Thread.h"

R_Thread::R_Thread(){
	LOG("R_Thread::R_Thread")
}

bool R_Thread::AttachFunction(void * (* run) (void *) , void * param){
	pthread_create (&p, 0, run, param);
	LOG("R_Thread::AttachFunction pthread=%d run = %d param = %d", &p, run, param)
	return true;
}

void R_Thread::JoinThread(){
	pthread_join(p, 0);
	LOG("R_Thread::JoinThread")
}
