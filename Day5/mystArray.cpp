//// 호출되면 출력하는거
//
//#include <stdio.h>
//
//typedef struct addr {
//	char name[20];
//	int age;
//	char tel[20];
//	char addr[100];
//
//}Addr;
//
////void printf_list(); // 호출되면 
//
//int main()
//{
//	Addr list[3] = { {"홍길동",100,"010-1234-5678","몰라" },
//					 { "김철수",33,"010-222-2222", "부산" },
//					 { "김영희",24,"010-333-3333", "울산" }
//	};
//
//	//printf_list(list);	
//
//	for (int i = 0; i < 3; i++) {
//		printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
//	}
//	return 0;
//}