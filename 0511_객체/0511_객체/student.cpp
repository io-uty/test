#include "student.h"
#include <iostream>
using namespace std;

int Student::stdnum = 0;

//기본 생성자 정의
Student::Student() {}
//매개변수 생성자 정의
Student::Student(std::string _name, int _score)
	:name{ _name }, score{ _score } {
	stdnum++;
}

//함수 정의
string Student::getName() {
	return name;
}
int Student::getScore() {
	return score;
}
int Student::getStdnum() {
	return stdnum;
}