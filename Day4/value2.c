///*
//	static - ���� ��������
//*/
//#include <stdio.h>
//void incFunc();
//void incFunc2();
//
//int main()
//{
//	for (int i = 0; i < 5; i++) {
//		incFunc();
//		incFunc2();
//	}
//	
//	return 0;
//}
//
//void incFunc() {
//	int cnt = 0;
//	cnt++;
//	printf("cnt: %d\t",cnt);
//}
//void incFunc2() {
//	static int scnt = 0;	// ���� ��������(���������� ������ ����� ��Ͼȿ����� �����ϴ�)
//	scnt++;					// ���������� ������ ����� �������� ���� ���������� �����ʿ��� ����
//	printf("scnt: %d\n", scnt);
//}
//
////
////int ary[��] = { 1, 2, 3 };		// 1���� �迭
////int art[��][��];					// 2���� �迭