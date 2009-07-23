#include <iostream>
using std::cout; using std::endl;

#include "Statistics.h"

void printVec(const vector<double>&);

int main () {
	vector<double> myNums;
	myNums.push_back(1.0);
	myNums.push_back(2.0);
	myNums.push_back(3.0);
	myNums.push_back(4.0);
	myNums.push_back(5.0);
	
	printVec(myNums);
	cout << Statistics::average(myNums) << endl;
	cout << Statistics::median(myNums) << endl;
	return 0;
}

void printVec(const vector<double>& nums) {
	for (int i = 0; i < nums.size(); i++)
		cout << nums[i] << "\t";
	cout << endl;
}
