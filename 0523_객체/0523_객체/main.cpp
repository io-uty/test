#include "student.h"
#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

int main() {
	int midscore, finscore;
	double midsum = 0, finsum = 0;

	//���� �޸� �Ҵ��� �̿��� �迭�� ���ڸ� �Է��� �� �ֵ��� ��
	int size;
	cin >> size;
	Student* arr = new Student[size];

	for (int i = 0; i < size; i++) {

		cout << "Enter midterm and final score: ";
		cin >> midscore >> finscore;
		arr[i] = Student{ midscore, finscore };
		midsum += arr[i].getMidscore();
		finsum += arr[i].getFinscore();
	}

	cout << endl;
	
	cout << setw(19) << right << "midterm" << setw(6) << "final" << endl;
	for (int i = 0; i < size; i++) {
		//�����ڸ��� �Ѿ���� ������ 0���� ä���� �� �ֵ��� ��
		cout << "Student " << setw(2) << right << setfill('0')
			<< i+1 << ": ";
		cout << setfill(' ') << setw(7) << right << arr[i].getMidscore();
		cout << setw(6) << right << arr[i].getFinscore() <<endl;
	}
	//��� ������ �հ踦 �迭�� ũ��� ������ ��� ���ϱ�
	cout << setw(10) << right << "Average" << ": ";
	cout << fixed << setprecision(1) << setw(7) << midsum / static_cast<double>(size) << " ";
	cout << fixed << setprecision(1) << setw(5) << finsum / static_cast<double>(size);

	delete[] arr;
}