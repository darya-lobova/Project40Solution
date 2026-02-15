#include "logic.h"

string get_fibo_number(int number) {

	if (number <= 0) {
		return "Error.";
	}

	int first = 0;
	int second = 1;
	int next = 0;

	string result = to_string(first);

	for (int i = 0; i < number; i++) {
		result += " " + to_string(second);
		next = first + second;
		first = second;
		second = next;
	}

	return result;
}

void print(string s) {
	cout << s << endl;
}