#include "student.h"
#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

int main() {
	int midscore, finscore;
	double midsum = 0, finsum = 0;

	//동적 메모리 할당을 이용해 배열의 숫자를 입력할 수 있도록 함
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
		//십의자리가 넘어가더라도 공백이 0으로 채워질 수 있도록 함
		cout << "Student " << setw(2) << right << setfill('0')
			<< i+1 << ": ";
		cout << setfill(' ') << setw(7) << right << arr[i].getMidscore();
		cout << setw(6) << right << arr[i].getFinscore() <<endl;
	}
	//모든 점수의 합계를 배열의 크기로 나누어 평균 구하기
	cout << setw(10) << right << "Average" << ": ";
	cout << fixed << setprecision(1) << setw(7) << midsum / static_cast<double>(size) << " ";
	cout << fixed << setprecision(1) << setw(5) << finsum / static_cast<double>(size);

	delete[] arr;
}