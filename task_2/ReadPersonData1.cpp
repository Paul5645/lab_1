#include "header.h"

void ReadPersonData1(string& name, unsigned short& age, double& salary) {
	
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonSalary(&salary);

}