///*
//	����������
//*/
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 100;
//	int* pn;
//	int** ppn;		// 2��������
//
//	pn = &n;		// ���� n�� �ּҸ� ����
//	ppn = &pn;		// ������ ���� pn�� �ּҸ� �����ϴ� ���� ������
//
//	printf("n: %d\t n�ּ�: %p\n", n, &n);			// n�� ���� �ּ� 
//	printf("pn: %p\t pn �ּ�: %p\t *pn  %d\n", pn, &pn, *pn);	// 
//	printf("ppn: %p\t ppn �ּ� %p\t *ppn: %p\t **ppn: %d", ppn, &ppn, *ppn, **ppn);
//
//	return 0;
//}