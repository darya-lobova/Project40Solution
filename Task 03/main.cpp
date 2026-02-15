#include "logic.h"

int main() {

	int index;
	cout << "Input index: ";
	cin >> index;

	long long tribo_number = get_tribo_number(index);

	string msg = tribo_number == -1 ? "Error." : to_string(tribo_number);

	print(msg);

	return 0;
}