///*
//	�Է¹��� ���ڿ��� �迭�� �����ϱ�		
//*/
//
//#include <stdio.h>
//
//void myStrInput(char*, int);					//3�̶� ���� ����
//
//int main()
//{
//	char str[100];								// ���ڿ��� ������ �迭 1
//
//	myStrInput(str, 100);						// ȣ�� ���ڿ��� ������ �迭 2			4�� ������
//	printf("�Է��� ���ڿ� : %s\n", str);
//
//	return 0;
//}
//
//void myStrInput(char* ps, int size)			// 3 ���๮�ڰ� �Էµǰų� �迭�� ���� �����ϸ� ����
//{	
//	int i = 0;
//	while (1) {					// 1������� ��ӽ׾ƶ�
//		ps[i] = getchar();
//		if (ps[i] == '\n' || i == (size - 1)) break;		//4
//		i++;
//	}
//	ps[i] = '\0';						// Null�� ���� ������ ��������
//}
//
