//Array of three bools
//Initialize to false
//pick random(0,2), make that index true
//Pick random(0,2), the guess
//Pick random(0,1), one of the false indices (known.)
//return true if changing the pick resulted in a win.
#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>

bool isChangeGood()
{
	bool doors[3];
	for (int i = 0; i < 3; i++)
	{
		doors[i] = false;
	}
	int winner = rand() % 3;
	doors[winner] = true;
	int pick = rand() % 3;
	int show;
	bool shown = false;
	while(!shown)
	{
		show = rand() % 3;
		if((doors[show] == false) && (show != pick))
		{
			shown = true;
		}
	}
	/*
	cout << "Original Pick: " << pick << endl;
	cout << "Shown: " << show << endl;
	cout << "Actual Winner: " << winner << endl;
	*/
	for (int i = 0; i < 3; i++)
	{
		if((i != pick) && (i != show))
			return doors[i];
	}
	return false;
}

int main()
{
	srand(time(0));
	int changeGood = 0;
	int changeBad = 0;
	for (int i = 0; i < 1000000; i++)
		if(isChangeGood())
			changeGood++;
		else
			changeBad++;
	cout << "Change was good " << changeGood << " times." << endl;
	cout << "Change was bad " << changeBad << " times." << endl;
}
