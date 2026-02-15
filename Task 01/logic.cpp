#include "logic.h"

void print(string s) {
	cout << s << endl;
}

string get_pushups(int push_up, int push_up_per_day, int day) {

	if (push_up < 0 || push_up_per_day < 0 || day < 0) {
		return "Error.";
	}

	string result;
	int total_push_up = push_up;

	for (int i = 1; i <= day; i++) {
		result += "Day " + to_string(i) + ": " + to_string(total_push_up) + "\n";
		total_push_up += push_up_per_day;
	}

	return result;
}