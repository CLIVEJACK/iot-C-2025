//#include <stdio.h>
//
//int main()
//{
////
////	int ary[] = { 1, 2, 3 };
////
////	printf("�迭�� ��üũ��: %d\n", sizeof(ary));					// sizeof�� �迭�� ũ�⸦ �ƴ°�
////	printf("�迭 ���Ѱ��� ũ��: %d\n", sizeof(ary[0]));				// 4����Ʈ�� ���´� 
////	printf("�迭 ���� ����: %d\n", sizeof(ary) / sizeof(ary[1]));	// 3��
////	printf("�迭 �̸�: %p\n", ary);								    // �迭�� �̸��� �迭�� �����ּ� %p�� �����ͺ��� �ּ�
////	printf("�迭 ù��° �� �ּ�: %p\n", &ary[0]);					// �迭�� �̸��� ù��° ���ּҿ� ���� �迭�� �������ּҴ� **������**
////	printf("�迭 �ι�° �� �ּ�: %p\n", ary + 1);					// ary�� �ּ�(���)���ٰ� +1�� �ּ��� ������° ���� ����Ŵ
////	printf("�迭 �ι��� �� �ּ�: %p\n", &ary[1]);					// ���� ���� �ּҸ� ����
//
//
//	int score;
//	int ary[5];								// 1		���
//	int count = sizeof(ary) / sizeof(ary[0]);		// 3
//
//	for (int i = 0; i < 5; i++) {						// 2
//		printf("������ �Է��ϼ���:");
//		scanf_s("%d", &score);
//		ary[i] = score;
//		printf("%d�� �л� ����: %d\n", i + 1, ary[i]);
//	}
//	int sum = 0;
//	for (int j = 0; j < 5; j++) {
//		sum += ary[j];
//	}
//	double avg = sum / count;
//	printf("���: %.2lf", avg);
//	
//	return 0;
//}