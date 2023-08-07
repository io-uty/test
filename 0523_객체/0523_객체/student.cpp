#include "student.h"
using namespace std;


Student::Student() 
	: midscore{ 0 }, finscore{ 0 } {} //기본생성자 정의
Student::Student(int mid, int fin)
	: midscore{ mid }, finscore{ fin } {} //매개변수 생성자 정의

int Student::getMidscore() const {
	return midscore;
}
int Student::getFinscore() const {
	return finscore;
}