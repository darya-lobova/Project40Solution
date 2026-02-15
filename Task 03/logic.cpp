#include "logic.h"

long long get_tribo_number(int index) {

	if (index <= 0) {
		return -1;
	}

	if (index == 1) {
		return 0;
	}

	if (index == 2) {
		return 0;
	}

	if (index == 3) {
		return 1;
	}

	int first = 0;
	int second = 0;
	int third = 1;
	int next = 0;

	for (int i = 4; i <= index; i++) {
		next = first + second + third;
		first = second;
		second = third;
		third = next;
	}

	return third;

}

void print(string s) {
	cout << s << endl;
}