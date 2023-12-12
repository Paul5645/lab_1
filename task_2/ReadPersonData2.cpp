#include "header.h"
void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight) {

	name = ReadPersonName();
	age = ReadPersonAge();
	height = ReadPersonHeight();
	ReadPersonWeight(weight);
}
