#include<iostream>
#include"Curriculum.h"
using namespace std;

void main() {
	setlocale(LC_ALL, "rus");
	Curriculum c{ "�������� ������ ����������", "09.03.01", "�����������", 56, 240 };
	c.Print();

	c.SetCode("09.03.02");
	c.SetName("����������� � �������������� �������");
	c.SetFIO("������� ����");
	c.SetTNoC(200);
	c.SetHEL(HEL::Magistracy);
	c.SetDisciplines(64);
	c.SetSNoC(200);

	c.ComplitePlan();
	c.Print();
}