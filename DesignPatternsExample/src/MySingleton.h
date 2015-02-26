/*
 * MySingleton.h
 *
 *  Created on: Feb 26, 2015
 *      Author: mkmisra
 */

#ifndef SINGLETON_MYSINGLETON_H_
#define SINGLETON_MYSINGLETON_H_
#include <stddef.h>
#include <iostream>
class MySingleton {
private:
	static MySingleton *mySingletonInstance;
	MySingleton();
//	MySingleton(MySingleton const &rsh){};
//	void operator=(MySingleton const &rhs){};
	MySingleton(MySingleton const &rsh)    = delete; // C++11
	void operator=(MySingleton const &rhs) = delete; // C++11

public:
	static MySingleton* getSingletonInstance();
	void displayMemoryLocation();

};

#endif /* SINGLETON_MYSINGLETON_H_ */
