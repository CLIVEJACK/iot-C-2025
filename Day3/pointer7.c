///*
//	const
//*/
//
//#include <stdio.h>
//
//int main()
//{
//	const int num = 10;
//	//num = 20;
//
//	int num2 = 10;
//	num2 = 20;
//	int* pnum2 = &num2;					// num2 = 10 > *pnum2 = 10 
//	*pnum2 = 30;						// *pnum2 = 30
//	printf("%d\n", num2);				// 30 �� ���´� 
//
//	const int* pn2 = &num2;			// ������ ���. (�����ͺ����� ���� �������� ������ �����Ѵ�.) const�� ������
//	//*pn2 = 100;					// ���� ������ �ȵȴ� 
//	num2 = 0;						// num2 = 0
//	pn2 = &num2;					// 
//	printf("%d\n", num2);			// 0�� ���� ����
//
//	int num3 = 40;
//	int* const pnum3 = &num3;		// ������ ��� (�����ͺ����� ����Ű�� �ּ��� ������ �����Ѵ�)
//	*pnum3 = 100;
//	printf("%d\n", num3);			
//	//pnum3 = &num2;
//
//	const int* const pn5 = &num2;
//	// *pn5 = 1000;
//	// pn5 = &num3;
//	num2 = 40;
//
//	return 0;
//}