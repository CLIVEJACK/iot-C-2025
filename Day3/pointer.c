/*
	pointer - �ּ�
	������ ���� - �ּҸ� ������ �� �ִ� ����
*/

#include <stdio.h>

int main()
{
//	int p;		// intŸ���� ���� ���� 
//	int* p;		// intŸ���� ������ ���� ����. ������ ������ ũ��� 4����Ʈ
//	char* pc;	// charŸ���� ������ ���� ����
//	double *pd;	// *�� ��ġ�� ���� �������

	//int* p = 10;
	//printf("%d",p); 


	int num = 100;
	printf("num�� �ּ�: %p\n", &num);
	printf("num�� ��: %d\n", num);
	int * p = &num;			// intŸ���� num�� *p �ּҿ� ����.  * �ƹ��ǹ� ���� ǥ��
	printf("�����ͺ��� p�� ����� ��(�ּ�): %p\t", p);
	printf("�����ͺ��� P�� ����Ű�� ���� ��: %d\n", *p);			// *p�� �������� ������ �ض� 
	num += 1;
	printf("num: %d, *p: %d\n", num, *p);					// *p�� �����Ͱ��� ������ 
	*p += 1;
	printf("num: %d, *p: %d\n", num, *p);					// *�� �׳� ǥ��


	return 0; 
}