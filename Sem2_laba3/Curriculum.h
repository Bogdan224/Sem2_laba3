#pragma once
#include<iostream>
using namespace std;

enum class HEL { //Higher Education Level
	Bachelor = 0, Magistracy, Postgraduate 
};

enum class Ready {
	Edited = 0, Complited
};

class Curriculum
{
private:
	string _code;
	string _name;
	string _FIO;
	int _TNoC;//Target Number Of Credits
	int _SNoC;//Sum Number Of Credits
	int _disciplines;
	HEL _level;
	Ready _ready = Ready::Edited;
public:
	Curriculum(string FIO, string code, string name, int disciplines, int TNoC = 0, HEL level = HEL::Bachelor);
public:
	void SetCode(string code);
	void SetName(string name);
	void SetFIO(string FIO);
	void SetTNoC(int TNoC);
	void SetHEL(HEL level);
	void SetDisciplines(int disciplines);
	void SetSNoC(int SNoC);

	string GetCode();
	string GetName();
	string GetFIO();
	int GetDisciplines();
	int GetTNoC();
	string GetHEL();
	string GetReady();

	void ComplitePlan();
	void CompliteDiscipline(int credits);
	void Print();
};

