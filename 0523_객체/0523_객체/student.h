#pragma once

class Student {
private:
	int midscore;
	int finscore;
public:
	Student(); //�⺻������
	Student(int mid, int fin); //�Ű����� ������

	int getMidscore() const;
	int getFinscore() const;
};
