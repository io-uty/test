#include "student.h"
#include <iostream>
#include <vector>
#include <array>
#include <string>
using namespace std;

//전역함수를 만들어 vector와 array를 매개변수로 받음
void findMinMaxStudent(vector<Student> stu, Student minmax[2]);

int main() {
	vector<Student> students; //객체를 저장할 수 있는 vector생성
	string name;
	int score ;

	cout << "Enter the name and score of student." << endl;
	cout << "(EOF to quit) ? ";

	//EOF 입력이 들어올 때까지 vector에 원소를 입력받음
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
	//최고점, 최저점에 해당되는 학생을 찾아 array에 저장
	for (Student s : stu) {
		if (s.getScore() < minmax[0].getScore()) {
			minmax[0] = s;
		}
		else if (s.getScore() >  minmax[1].getScore()) {
			minmax[1] = s;
		}
	}
}