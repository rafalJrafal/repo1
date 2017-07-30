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

#define LOG(string) \
	char str[100]; \
	sprintf(str, string); \
	std::cout << str;



#endif /* R_LOG_H_ */
