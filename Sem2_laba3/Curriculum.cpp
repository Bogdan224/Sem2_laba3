#include "Curriculum.h"

//�����������
Curriculum::Curriculum(string FIO, string code, string name, int disciplines, int TNoC, HEL level) {
	this->_code = code;
	this->_name = name;
	this->_FIO = FIO;
	if (TNoC <= 0) TNoC = 1;
	this->_TNoC = TNoC;
	if (disciplines <= 0) disciplines = 1;
	this->_disciplines = disciplines;
	this->_level = level;
}
//Set-����
void Curriculum::SetCode(string code) {
	this->_code = code;
}
void Curriculum::SetName(string name) {
	this->_name = name;
}
void Curriculum::SetFIO(string FIO) {
	this->_FIO = FIO;
}
void Curriculum::SetTNoC(int TNoC) {
	this->_TNoC = TNoC;
}
void Curriculum::SetHEL(HEL level) {
	this->_level = level;
}
void Curriculum::SetDisciplines(int disciplines) {
	if (disciplines >= 0) this->_disciplines = disciplines;
}
void Curriculum::SetSNoC(int SNoC) {
	if (SNoC == this->_TNoC) this->_SNoC = SNoC;
	//else throw domain_error("SNoC ������ ���� ����� TNoC!");
}
//Get-����
string Curriculum::GetCode() {
	return this->_code;
}
string Curriculum::GetName() {
	return this->_name;
}
string Curriculum::GetFIO() {
	return this->_FIO;
}
int Curriculum::GetDisciplines() {
	return this->_disciplines;
}
int Curriculum::GetTNoC() {
	return this->_TNoC;
}
string Curriculum::GetHEL() {
	if (this->_level == HEL(0)) {
		return "�����������";
	}
	if (this->_ready == Ready(1)) {
		return "������������";
	}
	if (this->_ready == Ready(2)) {
		return "�����������";
	}
}
string Curriculum::GetReady() {
	if (this->_ready == Ready(0)) {
		return "�������������";
	}
	if (this->_ready == Ready(1)) {
		return "����� � ��������";
	}
}

void Curriculum::ComplitePlan() {
	if (this->_code != "" && this->_FIO != "" && this->_name != "" && this->_disciplines >= 0 && this->_TNoC == this->_SNoC) {
		this->_ready = Ready::Complited;
		cout << "���� ������ � ��������!\n";
	}
	else {
		cout << "������ �� �������� �������� �����������!\n";
	}
}

void Curriculum::Print() {
	cout << "�������� �����: " << this->GetName()
		<< "\n����: " << this->GetCode()
		<< "\n��� �����������: " << this->GetFIO()
		<< "\n���-�� ���������: " << this->GetDisciplines()
		<< "\n������� ���-�� �������� ������: " << this->GetTNoC()
		<< "\n������� ������� �����������: " << this->GetHEL()
		<< "\n���������� �����: " << this->GetReady() << endl;
}

void Curriculum::CompliteDiscipline(int credits = 1) {
	this->_SNoC += credits;
}