#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

unsigned short ReadPersonAge();
string ReadPersonName();
unsigned short ReadPersonHeight();
void ReadPersonWeight(unsigned short& weight);
void ReadPersonSalary(double* salary);
void WritePersonData(const string& name, const string& weight, const string& height, const unsigned short* age, const double salary);
void ReadPersonData(string& name, unsigned short& age, double& salary);
void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight);
int main();

int main() {
	string name;
	unsigned short age = 0;
	double salary = 0;
	unsigned short height = 200;
	unsigned short weight;
	cout << "----1----" << "\n";
	ReadPersonData(name, age, salary);
	WritePersonData(name, "200", "60", &age, salary);
	cout << "----2----" << "\n";
	ReadPersonData(name, age, weight, height);
	WritePersonData(name, to_string(weight), to_string(height), &age, 5000);
	return 0;
}
