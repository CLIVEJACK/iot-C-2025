#include <stdio.h>

struct profile {
	int age;
	double heigh;
	double wight;
};

struct student {
	struct profile pf;				// 구조체 안에 구조체 저장가능 
	int id;
	double grade;

};

int main()
{
	struct student s;			// 구조체 변수의 초기화 , 선언
	s.grade = 99;
	s.id = 201212;
	s.pf.age = 20;
	s.pf.heigh = 180;
	s.pf.wight = 60;

	printf("키: %.1lf\n", s.pf.heigh);
	printf("몸무게: %.lf\n", s.pf.wight);
	return 0;
}