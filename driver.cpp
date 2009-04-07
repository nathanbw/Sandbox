/* #include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;
*/

#include "TestClass.h"

int main() {
	TestClass myTestClass;
	myTestClass.printMessage();
	int sum = 0;
	for (int i = 1;  i < 99; (  std::cout << (sum += (i+=2)) << std::endl ) );
	return 0;
}
