//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//
//	char str[100];
//	char* ps[5];
//	printf("���ڿ��� �Է��ϼ���>> ");
//	gets(str);								
//	printf("�Է��� ���ڿ�: %s\n", str);
//
//	
//	/*���ڿ� ����*/
//	ps[0] = (char*)malloc(strlen(str) + 1);			// �Էµ� ���ڿ��� ������ ������ �����κ��� �Ҵ� �޴´�. +1�� �������� Null�� ����ֱ� ���ؼ� 
//	if (ps == NULL) {
//		exit(1);							// �ٷ� ����
//	}
//
//	strcpy(ps, str);						// ���ڿ� ���� 
//	printf("heap: %s\n", ps);
//
//	free(ps);								// ���� �޸� ��ȯ
//
//	return 0;
//}