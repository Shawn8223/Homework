#include <iostream>
#include <cstdlib>
#include "Administrator.h"

bool Administrator::Login(string username, string password) {

	//if validate return 1, the person is an administrator, so return true
	if (Security::validate(username, password) == 1)
		return true;
	return false;
}