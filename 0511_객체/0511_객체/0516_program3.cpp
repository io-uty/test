#include <iostream>
#include <array>
#include <string>
#include <iomanip>
using namespace std;

class Student {
private:
	string name;
	static const int NUMBER = 3;
	int scores[NUMBER];
	double avg;
public:
	void InputScore();
	void InputName();
	void average();
	void print() const;
};

int main() {
	Student students[4];

	for (Student& s : students) {
		s.InputName();
		s.InputScore();
	}

	cout << endl << left << setw(10) << "Name" << right << setw(10)
		<< "Score 1" << setw(10) << "Score 2" << setw(10)
		<< "Score 3" << setw(10) << "Average" << endl;
	for (const Student& s : students)
		s.print();
}

