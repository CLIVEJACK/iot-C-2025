///*
//	����ü ������:
//*/
//
//#include <stdio.h>
//
//typedef struct score {
//	int kor;
//	int eng; 
//	int mat;
//}Score;
//
//int main()
//{
//	Score s = { 100, 80, 85 };
//	Score* ps = &s;
//
//	printf("����: %d\n", ps -> kor);
//	printf("����: %d\n", ps -> eng);		// ps -> eng�̰� Ǯ�� (*ps).mat�̷��� �ȴ� 
//	printf("����: %d\n", (*ps).mat);		// s.�� ����ü ������  �� ps -> mat
//	return 0;
//}
//
///*
//	����ü ������ ���ؼ� ����� �����ϴ� �����?  '.'(������� ������)
//	����ü �����͸� ���ؼ� �ɹ��� �����ϴ� �����? '->'(ȭ��ǥ ������, �ַο쿬����)
//*/