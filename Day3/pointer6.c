//1. printAry < ����ϴ� �Լ� �����
//2. intputAry < �Է��ϴ� �Լ� ����� 

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void printAry();
//
//int main()
//{
//	
//	int ary[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int ary2[] = { 1, 2, 3 };
//
//	int size = sizeof(ary2) / sizeof(ary2[0]);		// size �ൿ�ֱ� 4. 
//
//	//inputAry();
//	//printf("�Է¹޴� ���� �����ÿ�.");
//	//scanf("%d", inputAry);
//	printAry(ary, size);							// size�ֱ� 3.
//
//	return 0;
//
//}
//
//void printAry(int* p, int _size)				// ���� main���� �޾ƿ����� �Ű������� *(������)�� �ؾ��Ѵ�
//{												// �׷��� ���μ��� size�� �ִ´� 2.
//	int i;
//	for (i = 0; i < _size; i++) {				// printAry���忡���� ary�� ���� ���� �׷��Ƿ� �Է����� �޾Ƶ��� ���μ��� �ʿ��ϴ� 1. �׷��� for���ǽĿ� �ִ´� 5. 
//		printf("ary[%d]: %d\n", i, p[i]);
//	}
//}