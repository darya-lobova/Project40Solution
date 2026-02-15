#include "logic.h"

int main() {

	int number;

	cout << "Input number: ";
	cin >> number;

string result = get_fibo_number(number);

	print(result);

	return 0;
}