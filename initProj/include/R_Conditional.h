/*
 * R_Conditional.h
 *
 *  Created on: Jul 30, 2017
 *      Author: rafal
 */

#ifndef R_CONDITIONAL_H_
#define R_CONDITIONAL_H_

#include "R_Log.h"
#include "R_Mutex.h"

class R_Conditional {
public:
	R_Conditional();
	void Wait(R_Mutex &m);
	void Signal();
private:
	pthread_cond_t c;
};

#endif /* R_CONDITIONAL_H_ */
