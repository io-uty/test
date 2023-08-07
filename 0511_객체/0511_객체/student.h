#pragma once
#include <string>


class Student {
private:
	std::string name;
	int score;
	static int stdnum;

public:
	Student();
	Student(std::string name, int score);

	std::string getName() ;
	int getScore() ;
	static int getStdnum();
};
