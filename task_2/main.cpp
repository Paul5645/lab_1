#include "header.h"

int main() {
	string name;
	unsigned short age = 0;
	double salary = 0;
	unsigned short height = 200;
	unsigned short weight;
	cout << "----1----" << "\n";
	ReadPersonData1(name, age, salary);
	WritePersonData(name, "200", "60", &age, salary);
	cout << "----2----" << "\n";
	ReadPersonData2(name, age, weight, height);
	WritePersonData(name, to_string(weight), to_string(height), &age, 5000);
	return 0;
}