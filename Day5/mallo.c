///*
//	�޸� ���� �Ҵ�: malloc - free
//	calloc - �޸� ���� �Ҵ��Ͽ� 0���� �ʱ�ȭ
//	realloc - ũ������ 
//*/
//# include <stdio.h>
//# include <stdlib.h>			//������� ����
//
//int main()
//{
//	int* pi =(void*)malloc(sizeof(int));		// �������� �Է�ũ�⸸ŭ �޸� �������� �Ҵ�޾Ӽ� ���� �ּҸ� �����Ѵ�
//	//int* pi = (int*)malloc(sizeof(int));		// ���� �����ϴ� ���̵�� ��Ʈ�� ��� �ص��ȴ�
//	if(pi == NULL){
//		printf("�޸� �Ҵ� ����");
//		exit(1);
//	}
//	printf("�Ҵ缺��!!");
//
//	free(pi);									// ���� �޸� ������ ������ ������ �� 
//	
//	return 0;
//}