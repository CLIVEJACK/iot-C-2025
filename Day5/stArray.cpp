#include <stdio.h>

typedef struct addr {
	char name[20];
	int age;
	char tel[20];
	char addr[100];

}Addr;

//void printf_list(); // ȣ��Ǹ� 

int main()
{
	Addr list[3] = { {"ȫ�浿",100,"010-1234-5678","����" },
					 { "��ö��",33,"010-222-2222", "�λ�" },
					 { "�迵��",24,"010-333-3333", "���" }
	};

	//printf_list(list);	

	for (int i = 0; i < 3; i++) {
		printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}
	return 0; 
}