#include "TestClass.h"

TestClass::TestClass() {
	state = 0;
}

void TestClass::printMessage() {
	cout << "State is: " << state << endl;
	state++;
}
