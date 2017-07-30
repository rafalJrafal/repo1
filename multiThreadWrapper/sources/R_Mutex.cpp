/*
 * R_Mutex.cpp
 *
 *  Created on: Jul 30, 2017
 *      Author: rafal
 */

#include "../include/R_Mutex.h"

R_Mutex::R_Mutex(){
	LOG("R_Mutex::R_Mutex");
}

void R_Mutex::Lock(){
	LOG("R_Mutex::Lock")
	pthread_mutex_lock(&m);
}

void R_Mutex::Unlock(){
	LOG("R_Mutex::Unlock");
	pthread_mutex_unlock(&m);
}
