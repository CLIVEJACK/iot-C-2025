///*
//	viode pointer : ���̵� ������ > �����Ͷ�� �̾߱� > ����Ű�� �ڷ����� ���� ������ 
//*/
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 10;
//	double db = 3.14;
//
//	//int pn = &n;			// �̰� ����������
//	//double* pdb = &db;
//
//	void* p;
//
//	p = &n;								
//	//printf("*p: %d\n", *p);				// void Ÿ�ӿ� int(�������� �־)������ ���� 
//	printf("*p: %d\n", *(int *)p);			// ���� �ڷ����� ��� �ؾ��Ѵ�  
//
//	p = &db;
//	printf("*p: %.1lf\n", *(double*)p);
//	
//
//	return 0;
//}