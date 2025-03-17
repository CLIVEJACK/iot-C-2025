//#include <stdio.h>
//
//int main()
//{
//	char str[100] = "banana";
//	char str2[6] = "apple";						//char 배열에 저장시는 +1만큼의 방이 필요하다 
//	char str3[10] = { 'o','r','a','n','g','e' };
//	char str4[4];
//
//	str4[0] = 'a';
//	str4[1] = 'b';
//	str4[2] = 'c';
//	str4[3] = '\0';			// \0은 Null이다 
//
//	
//	printf("srt: %s\n", str);
//	printf("srt2: %s\n", str2);					// 배열은 마지막에 Null값을 저장하는데 5개가 다 차서 위에는 str을 침범함
//	printf("srt3: %s\n", str3);					// 
//	printf("str3[6]: %s\n", str3[6]);			// 컴파일러에서 Null을 자동적으로 넣어줌
//	printf("str4: %s\n", str4);					// 마지막에 자발적으로 넣는것도 좋은방법이다
//	printf("str나머지 방: %s\n", str[8]);			// 6개의 문자를 넣고 나머지는 Null로 채워짐 
//
//	//str = str2;								// 이거는 못한다 
//	//strcpy(str, str2);							// str2을 str1에다가 집어넣어라 
//	//printf("str: %s\n", str);
//
//	//strcpy(str, "dog");
//	//printf("str: %s\n", str);
//	//
//	//str[0] = 'D';								// "D"가 아니라 'D'이다 저장되어있는건 문자열이지만 캐럭터로 변경해야한다 
//	//printf("str: %s\n", str);
//
//	return 0;
//}