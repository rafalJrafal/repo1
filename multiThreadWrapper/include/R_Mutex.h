/*
 * R_Mutex.h
 *
 *  Created on: Jul 30, 2017
 *      Author: rafal
 */

#include <pthread.h>
#include "R_Log.h"

#ifndef R_MUTEX_H_
#define R_MUTEX_H_

class R_Mutex{
public:
	friend class R_Conditional;
	R_Mutex();
	void Lock();
	void Unlock();
private:
	pthread_mutex_t m;
};

#endif /* R_MUTEX_H_ */
