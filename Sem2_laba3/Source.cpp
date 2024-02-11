#include<iostream>
#include"Curriculum.h"
using namespace std;

void main() {
	setlocale(LC_ALL, "rus");
	Curriculum c{ "Колганов Богдан Евгеньевич", "09.03.01", "Информатика", 56, 240 };
	c.Print();

	c.SetCode("09.03.02");
	c.SetName("Информатика и вычислительная техника");
	c.SetFIO("Соболев Илья");
	c.SetTNoC(200);
	c.SetHEL(HEL::Magistracy);
	c.SetDisciplines(64);
	c.SetSNoC(200);

	c.ComplitePlan();
	c.Print();
}