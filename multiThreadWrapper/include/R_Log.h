/*
 * R_Log.h
 *
 *  Created on: Jul 30, 2017
 *      Author: rafal
 */

#ifndef R_LOG_H_
#define R_LOG_H_

#include <iostream>
#include <stdio.h>

#define LOG( ... ) \
	char str[100]; \
	sprintf(str, __VA_ARGS__); \
	std::cout << str << std::endl << std::flush;



#endif /* R_LOG_H_ */
