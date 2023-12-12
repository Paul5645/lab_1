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

void WritePersonData(const string& name, const string& weight, const string& height, const unsigned short* age, const double salary) {
	cout << "Name: " << name << endl;
	cout << "Weight: " << weight << endl;
	cout << "Height: " << height << endl;
	cout << "Age: " << *age << endl;
	cout << "Salary: " << salary << endl;
}
