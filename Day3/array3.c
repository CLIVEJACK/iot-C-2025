//#include <stdio.h>
//
//int main()
//{
//	char str[100] = "banana";
//	char str2[6] = "apple";						//char �迭�� ����ô� +1��ŭ�� ���� �ʿ��ϴ� 
//	char str3[10] = { 'o','r','a','n','g','e' };
//	char str4[4];
//
//	str4[0] = 'a';
//	str4[1] = 'b';
//	str4[2] = 'c';
//	str4[3] = '\0';			// \0�� Null�̴� 
//
//	
//	printf("srt: %s\n", str);
//	printf("srt2: %s\n", str2);					// �迭�� �������� Null���� �����ϴµ� 5���� �� ���� ������ str�� ħ����
//	printf("srt3: %s\n", str3);					// 
//	printf("str3[6]: %s\n", str3[6]);			// �����Ϸ����� Null�� �ڵ������� �־���
//	printf("str4: %s\n", str4);					// �������� �ڹ������� �ִ°͵� ��������̴�
//	printf("str������ ��: %s\n", str[8]);			// 6���� ���ڸ� �ְ� �������� Null�� ä���� 
//
//	//str = str2;								// �̰Ŵ� ���Ѵ� 
//	//strcpy(str, str2);							// str2�� str1���ٰ� ����־�� 
//	//printf("str: %s\n", str);
//
//	//strcpy(str, "dog");
//	//printf("str: %s\n", str);
//	//
//	//str[0] = 'D';								// "D"�� �ƴ϶� 'D'�̴� ����Ǿ��ִ°� ���ڿ������� ĳ���ͷ� �����ؾ��Ѵ� 
//	//printf("str: %s\n", str);
//
//	return 0;
//}