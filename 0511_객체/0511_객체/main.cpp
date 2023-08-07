#include "student.h"
#include <iostream>
#include <vector>
#include <array>
#include <string>
using namespace std;

//�����Լ��� ����� vector�� array�� �Ű������� ����
void findMinMaxStudent(vector<Student> stu, Student minmax[2]);

int main() {
	vector<Student> students; //��ü�� ������ �� �ִ� vector����
	string name;
	int score ;

	cout << "Enter the name and score of student." << endl;
	cout << "(EOF to quit) ? ";

	//EOF �Է��� ���� ������ vector�� ���Ҹ� �Է¹���
	while (cin >> name >> score) {
		students.push_back(Student(name, score));
		cout << "(EOF to quit) ? ";

	}

	cout << endl;

	Student minmax[2];
	findMinMaxStudent(students, minmax);

	cout << "The number of students: ";
	cout << Student::getStdnum();
	cout << "\nMinimum and Maximum scores" << endl;
	for (Student s : minmax) {
		cout << s.getName() << " " << s.getScore() << " ";
	}
	
}

void findMinMaxStudent(vector<Student> stu, Student minmax[2]) {
	minmax[0] = stu[0];
	//�ְ���, �������� �ش�Ǵ� �л��� ã�� array�� ����
	for (Student s : stu) {
		if (s.getScore() < minmax[0].getScore()) {
			minmax[0] = s;
		}
		else if (s.getScore() >  minmax[1].getScore()) {
			minmax[1] = s;
		}
	}
}