#include "header.h"

void WritePersonData(const string& name, const string& weight, const string& height, const unsigned short* age, const double salary) {
	cout << "Name: " << name << endl;
	cout << "Weight: " << weight << endl;
	cout << "Height: " << height << endl;
	cout << "Age: " << *age << endl;
	cout << "Salary: " << salary << endl;
}