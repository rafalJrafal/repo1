/*
 * R_Thread.h
 *
 *  Created on: Jul 30, 2017
 *      Author: rafal
 */

#ifndef R_THREAD_H_
#define R_THREAD_H_

#include <pthread.h>

#include "R_Log.h"

class R_Thread{
public:
	R_Thread();
	bool AttachFunction(void * (* run) (void *), void * param = 0);
	void JoinThread();
private:
	pthread_t p;
};



#endif /* R_THREAD_H_ */
