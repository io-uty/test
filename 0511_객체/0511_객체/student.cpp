#include "student.h"
#include <iostream>
using namespace std;

int Student::stdnum = 0;

//�⺻ ������ ����
Student::Student() {}
//�Ű����� ������ ����
Student::Student(std::string _name, int _score)
	:name{ _name }, score{ _score } {
	stdnum++;
}

//�Լ� ����
string Student::getName() {
	return name;
}
int Student::getScore() {
	return score;
}
int Student::getStdnum() {
	return stdnum;
}