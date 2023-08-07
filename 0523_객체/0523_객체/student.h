#pragma once

class Student {
private:
	int midscore;
	int finscore;
public:
	Student(); //기본생성자
	Student(int mid, int fin); //매개변수 생성자

	int getMidscore() const;
	int getFinscore() const;
};
