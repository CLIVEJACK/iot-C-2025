///*
//	�迭�� ������
//*/
//
//#include <stdio.h>
//
//int main()
//{
//	int ary[5];
//	int* pa = ary;
//
//	*(pa + 0) = 10;
//	printf("*pa: %d, ary[0]: %d\n", *pa, ary[0]);
//	printf("pa: %d\n", pa + 0);						// �Ʒ��� ���̶� 4���̰� ���� 
//	printf("pa + 1: %d\n", (pa + 1));				// +1�� 4����Ʈ�� 
//
//	*(pa + 1) = 20;
//	printf("*(pa + 1): %d, ary[1]: %d\n", *(pa + 1), ary[1]);
//	printf("pa[2]: %d\n, pa[1]");				// [ ] == *( ) �̰� �ΰ��� ���� : �����Ϳ����
//
//	return 0;
//}
//
//
//
