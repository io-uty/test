#include "student.h"
using namespace std;


Student::Student() 
	: midscore{ 0 }, finscore{ 0 } {} //�⺻������ ����
Student::Student(int mid, int fin)
	: midscore{ mid }, finscore{ fin } {} //�Ű����� ������ ����

int Student::getMidscore() const {
	return midscore;
}
int Student::getFinscore() const {
	return finscore;
}