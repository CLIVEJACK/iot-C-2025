#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

char change(char a, char b);

int main()
{
	char ch1;
	char ch2;
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%c", &change);

	printf("�빮��: %c, �ҹ���: %c", ch1, ch2);


	return 0;
}

char change(char a, char b) {
	if ((a >= 'A') && (b <= 'Z')) {
		a = b + ('a' - 'A');
	}
	return a, b;
}