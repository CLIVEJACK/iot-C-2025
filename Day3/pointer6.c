////1. printary < ����ϴ� �Լ� �����
////2. intputary < �Է��ϴ� �Լ� ����� 
//// �̰� �ٽú���
//
//#include <stdio.h>
//
//void printary();
//
//int main()
//{
//	
//	int ary[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int ary2[] = { 1, 2, 3 };
//
//	int size = sizeof(ary2) / sizeof(ary2[0]);		// size �ൿ�ֱ� 4. 
//
//	//inputary();
//	//printf("�Է¹޴� ���� �����ÿ�.");
//	//scanf("%d", inputary);
//	printary(ary, size);							// size�ֱ� 3.
//
//	return 0;
//
//}
//
//void printary(int* p, int _size)				// ���� main���� �޾ƿ����� �Ű������� *(������)�� �ؾ��Ѵ�
//{												// �׷��� ���μ��� size�� �ִ´� 2.
//	int i;
//	for (i = 0; i < _size; i++) {				// printary���忡���� ary�� ���� ���� �׷��Ƿ� �Է����� �޾Ƶ��� ���μ��� �ʿ��ϴ� 1. �׷��� for���ǽĿ� �ִ´� 5. 
//		printf("ary[%d]: %d\n", i, p[i]);
//	}
//}