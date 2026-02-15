#include "logic.h"

int main() {

	int push_up;
	int push_up_per_day;
	int day;

	cout << "How many push ups did you do today? ";
	cin >> push_up;

	cout << "How many push ups do you want to do every day? ";
	cin >> push_up_per_day;

	cout << "How many days do you want to do that? ";
	cin >> day;

	string result = get_pushups(push_up, push_up_per_day, day);

	cout << "Here's your plan: \n";
	print(result);

	return 0;
}