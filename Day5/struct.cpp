///*
//	struct(구조체) - 사용자 정의 자료형
//	기존 자료형을 묶어서 만든 복합 자료형(타입)
//*/
//
//#include <stdio.h>
//#include <string.h>
//
//struct Human {				// 1.구조체 선언 struct 구조체명
//	char name[100];			// 멤버 변수
//	int age;				// 멤버 변수
//};
//
//int main()
//{
//	/* . 맴버 접근연산자 */
//	struct Human h;			// Human 구조체의 변수 h 선언 
//	h.age = 10;				// h객체의 멤버 age에 10을 저장한다. h라는 객체의.이 더해저서 접근연산자가 된다 h의 접근해서 연산하라
//	//h.name = "hog kildong";
//	strcpy(h.name, "Hog Kildong");
//
//	//char str[100] = "hog kildong";
//	//printf("%s\n", str);
//	//char str2[100];
//	////str2 = "kim chulsul";          // 배열이름은 주소여서 대입연산자를 사용할 수 없다. (L_value)변수만 와야함
//	//str2[0] = 'h';					// 이런식으로는 가능
//	//str2[1] = '0';
//	//str2[2] = 'g';
//	//...
//	//str2[10] = '\0';
//
//
//	printf("나의 이름은 %s이고 나이는%d 입니다.", ,);
//
//
//	return 0;
//
//}