/*
 * MySingleton.cpp
 *
 *  Created on: Feb 26, 2015
 *      Author: mkmisra
 */

#include "MySingleton.h"
#include <stddef.h>
#include <iostream>
using namespace std;
MySingleton* MySingleton::mySingletonInstance = NULL;

MySingleton::MySingleton(){
	cout<< "constructure" << endl;
}
MySingleton* MySingleton::getSingletonInstance(){
	if(!mySingletonInstance){
		mySingletonInstance = new MySingleton();
	}
	cout<< "The getSingleton function is called" << endl;
	return mySingletonInstance;

}

void MySingleton::displayMemoryLocation(){
	cout << "The instance memory location is " << mySingletonInstance << endl;
}
