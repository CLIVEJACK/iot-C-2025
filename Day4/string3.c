///*
//	sccanf, gets�� ������ �����ϴ� �Լ�
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//
//{
//	char str[100];						// �迭 ����
//	/* scanf */
//	//printf("���ڿ� �Է� >>");
//	//scanf("%s", str);						// scanf�� ���� ������ �Էµ�
//
//	//printf("���ڿ�: %s", str);				
//	//scanf("%s", str);						// �ٽ����ָ� �Էµ�
//	//printf("���� ���ڿ�: %s", str);			// scanf�� ���� �ϸ� �ȵ�
//
//	/* gets */
//
//	//printf("������ ������ �Է� >>");
//	//gets(str);						// (str)����� ����. ������ ����
//	//printf("�Է� ���ڿ�: %s\n", str);
//
//	/* fgets */							// ������ ���� ���� 
//	printf("������ ������ �Է� >> ");
//	fgets(str, sizeof(str), stdin);				// stdin�� ���� ����¿� ���ؼ� �Է��� �޴´�
//	printf("�Է� ���ڿ�: %s\n", str);
//
//	return 0;
//}