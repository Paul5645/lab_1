#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

unsigned short height;

unsigned short ReadPersonAge() {
	unsigned short age;
	cout << "Enter person's age:"; cin >> age;
	return age;
}

string ReadPersonName() {
	string name;
	cout << "Enter person's name:"; cin >> name;
	return name;
}

unsigned short ReadPersonHeight() {
	cout << "Enter person's height:"; cin >> height;
	return height;
}

void ReadPersonWeight(unsigned short& weight) {
	cout << "Enter person's weight: "; cin >> weight;
}

void ReadPersonSalary(double* salary) {
	cout << "Enter person's salary: "; cin >> *salary;
}

void WritePersonData(const string& name, const string& weight, const string& height, const unsigned short* age, const double salary) {
	cout << "Name: " << name << endl;
	cout << "Weight: " << weight << endl;
	cout << "Height: " << height << endl;
	cout << "Age: " << *age << endl;
	cout << "Salary: " << salary << endl;
}

void ReadPersonData1(string& name, unsigned short& age, double& salary) {
	//1
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonSalary(&salary);

}

void ReadPersonData2(string& name, unsigned short& age, unsigned short& height, unsigned short& weight) {
	//2
	name = ReadPersonName();
	age = ReadPersonAge();
	height = ReadPersonHeight();
	ReadPersonWeight(weight);
}

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