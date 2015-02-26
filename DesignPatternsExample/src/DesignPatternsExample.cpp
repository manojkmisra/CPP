//============================================================================
// Name        : DesignPatternsExample.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "MySingleton.h"
using namespace std;

int main() {
	cout << "The is a singleton pattern testing" << endl; // prints !!!Hello World!!!

	MySingleton::getSingletonInstance()->displayMemoryLocation();
	MySingleton::getSingletonInstance()->displayMemoryLocation();
	return 0;
}
