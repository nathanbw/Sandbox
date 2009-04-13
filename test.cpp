#include <iostream>
using std::cout; using std::endl;

#include "TestClass.h"

void testFun(TestClass);

int main(void)
{
	TestClass myTC;
	myTC.setValue(-1);
	myTC.printValue();
	testFun(myTC);
	myTC.printValue();
}

void testFun(TestClass myTC) {
	myTC.printValue();
	myTC.setValue(5);
	myTC.printValue();
}
