/*
 * R_Conditional.cpp
 *
 *  Created on: Jul 30, 2017
 *      Author: rafal
 */

#include "../include/R_Conditional.h"

R_Conditional::R_Conditional(){
	LOG("R_Conditional::R_Conditional")
}

void R_Conditional::Wait(R_Mutex &m){
	LOG("R_Conditional::Wait")
	pthread_cond_wait(&c, &m.m);
}

void R_Conditional::Signal(){
	LOG("R_Conditional::Signal")
	pthread_cond_signal(&c);
}
