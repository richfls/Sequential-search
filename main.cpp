#include<iostream>
using namespace std;

int main() {
	int location;// to keep track of the slot we are looking at
	int amount = 0;// the amount we have found
	bool found = false;// did we find it
	int IDS[] = { 234, 567, 321, 567, 234, 789 }; // a array
	location = sizeof(IDS) / sizeof(IDS[0]);// start in the last slot

	int searchitem;
	cout << "enter ID you are searching for:" << endl;
	cin >> searchitem;

	while (location >= 0 ) {
		if (IDS[location] == searchitem) {
			found = true;
			amount += 1;
			location--;
		}
		else
			location--;
	}

	if (found == true) {
		cout << "ID " << searchitem << " was found in slot " << location << "." << endl;
		cout << amount << endl;
	}
	else
		cout << "ID was not found." << endl;

}
