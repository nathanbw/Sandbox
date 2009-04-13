#include "TestClass.h"

TestClass::TestClass() {
	num = 0;
}

void TestClass::printValue() {
	cout << num << endl;
}

void TestClass::setValue(int newValue) {
	num = newValue;
}
