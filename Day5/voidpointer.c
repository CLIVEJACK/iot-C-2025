///*
//	�Լ� ������:  �Լ��̸� ��ü�� �����ʹ�> �Լ� ������ �ۼ� ���� 1 ~ 3
//	�Լ� �ۼ� �� 1 ~ 4
//*/
//# include <stdio.h>
//int sum(int, int);				// 1.�Լ� ����
//int min(int, int);
//
//int main()
//{
//	int (*fp)(int, int);		// 1.�Լ�������
//	int res;
//	//res =  sum(20, 10);			// 3.�Լ� ȣ��
//	//res = min(20, 10);
//	fp = sum;					// 2.�Լ������͸� sum�̶�� ����
//	res = fp(20, 10);			// 3.res�� fp�� ȣ�� 
//	printf("res: %d\n", res);		// 4.�Լ� ���
//
//	return 0;
//}
//
//int sum(int a, int b)			//2.�Լ� ���� 
//{
//	int res = a + b;
//	return res;
//}
//
//int min(int a, int b)
//{
//	int res = a - b;
//	return res;
//}
//
