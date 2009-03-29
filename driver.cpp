/* #include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;
*/

#include "TestClass.h"

int main() {
	TestClass myTestClass;
	TestClass* myTCPointer = &myTestClass;
	myTCPointer->printMessage();
	myTCPointer = 0;
	myTestClass.printMessage();
	//cout << "What?" << endl;
	//printf("%s", "Alright baby!\n");
	return 0;
}
