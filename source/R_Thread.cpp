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

bool R_Thread::AttachFunction(void * (* run) (void *) ){
	pthread_create (&p, 0, run, 0);
	return true;
}
