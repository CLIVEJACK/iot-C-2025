#include <stdio.h>

struct profile {
	int age;
	double heigh;
	double wight;
};

struct student {
	struct profile pf;				// ����ü �ȿ� ����ü ���尡�� 
	int id;
	double grade;

};

int main()
{
	struct student s;			// ����ü ������ �ʱ�ȭ , ����
	s.grade = 99;
	s.id = 201212;
	s.pf.age = 20;
	s.pf.heigh = 180;
	s.pf.wight = 60;

	printf("Ű: %.1lf\n", s.pf.heigh);
	printf("������: %.lf\n", s.pf.wight);
	return 0;
}