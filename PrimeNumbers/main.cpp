#include <iostream>
#include <string>

int main()
{
	system("Color 0a");
	using namespace std;

	int num, help, div = 0;

	cout << "Please, add a random number for be tested: ";
	cin >> num;

	for (help = 1; help <= num; ++help) {
		if (num % help == 0) {
			div++;
			cout << help << " / " << num << " resta: " << num % help << "\n";
		}
	}

	if (div == 2) {
		system("Color 0b");
		cout << "\n" << num << " is a Prime Number!\n";
	}
	else {
		system("Color 0c");
		cout << "\n" << num << " is a Composite Number!\n";
	}

	system("Pause");
	return 0;
}