#include <stdio.h>

typedef struct addr {
	char name[20];
	int age;
	char tel[20];
	char addr[100];

}Addr;

//void printf_list(); // È£ÃâµÇ¸é 

int main()
{
	Addr list[3] = { {"È«±æµ¿",100,"010-1234-5678","¸ô¶ó" },
					 { "±èÃ¶¼ö",33,"010-222-2222", "ºÎ»ê" },
					 { "±è¿µÈñ",24,"010-333-3333", "¿ï»ê" }
	};

	//printf_list(list);	

	for (int i = 0; i < 3; i++) {
		printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}
	return 0; 
}