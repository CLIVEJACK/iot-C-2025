///*
//	strcpy - ���ڿ� �����Լ� ���ڿ� > �迭 ����, �迭 > �迭 ����, ���ڿ� > ������ �ȵ�
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[100] = "orange";
//	char str2[100] = "apple";
//	char* ps = "apple";
//	char str3[100] = "banana";
//
//	printf("str: %s\n", str);
//	printf("srt2: %s\n", str2);
//
//	strcpy(str, str2);			// strcpy(����, ����)  �������� ���� ���ʿ� ������
//	printf("str: %s\n", str);		// apple
//	printf("srt2: %s\n", str2);		// apple
//
//	strcpy(str, "banana");		// ���ڿ��� �־ �� ����	
//	printf("str: %s\n", str);	// banana
//	
//	strcpy(str, ps);			// �����͵� ����
//	printf("str: %s\n", str);	// apple
//
//	//strcpy(ps, str2);			// �̰� ���ڿ���(str2)������ ps(������)�� ������ �ȵ�
//	//printf("str: %s\n", str);
//
//	strncpy(str, "abc", 3);			// �����ּҺ��� ������ ���� ������ �����Ͽ� ���� > str�� "abcd"�߿� 3���� ����
//	printf("%s\n", str);
//
//
//	return 0;
//}