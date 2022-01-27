#include<iostream>

using namespace std;

void counting(int currNum, int targetNum);

int main() {
	int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int userMonth = 0;
	cout << "Enter a month(by number) " << endl;
	cin >> userMonth;
	cout << "There are " << monthDays[userMonth - 1] << " days in that month" << endl; // kinda cheated by not saying the month but hey it saves if statements

	int currRoom = 1;
	char whereTo = NULL;
	while (whereTo != 'q') {
		switch (currRoom) {
		case 1:
			cout << "You can go (w), (n), or (e), press (q) to quit" << endl;
			cin >> whereTo;
			if (whereTo == 'w')
				currRoom = 3;
			else if (whereTo == 'n')
				currRoom = 2;
			else if (whereTo == 'e')
				currRoom = 4;
			else
				cout << "That input isn't valid" << endl;
			break;
		case 2:
			cout << "You can go (s)" << endl;
			cin >> whereTo;
			if (whereTo == 's')
				currRoom = 1;
			else
				cout << "That input isn't valid" << endl;
			break;
		case 3:
			cout << "You can go (e)" << endl;
			cin >> whereTo;
			if (whereTo == 'e')
				currRoom = 1;
			else
				cout << "That input isn't valid" << endl;
			break;
		case 4:
			cout << "You can go (s) or (w)" << endl;
			cin >> whereTo;
			if (whereTo == 's')
				currRoom = 5;
			else if (whereTo == 'w')
				currRoom = 1;
			else
				cout << "That input isn't valid" << endl;
			break;
		case 5:
			cout << "You can go (n)" << endl;
			cin >> whereTo;
			if (whereTo == 'n')
				currRoom = 4;
			else
				cout << "That input isn't valid" << endl;
			break;
		default:
			cout << "uhhh what" << endl;
		}
	}

	int input = 1;

	while (input != 0) {
		cout << "enter a number, 0 to quit" << endl;
		cin >> input;

		counting(input, input*-1);
	}
}

void counting(int currNum, int targetNum) {
	if(abs(currNum)!= 0)
		cout << abs(currNum) << " ";

	if (currNum > targetNum) 
		counting(currNum - 1, targetNum);
	else
		cout << endl;
}