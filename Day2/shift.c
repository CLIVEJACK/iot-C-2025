//#include <stdio.h>
//
//int main()
//{
//	char ch = 0x7f;				//0b 0111 1111
//	unsigned char uch = 0x7f;
//	printf("ch: %x, uch: %x, ch: %u, uch: %u\n", ch, uch, ch, uch);
//
//	char ch1 = 0x9f;			// 0b 1001 1111
//	unsigned char uch1 = 0x9f;
//	printf("ch1: %x, uch1: %x\n", ch1 ,uch1);
//	
//	ch1 >>= 1;					// 0b 1100 1111		복합대입연산자 우측으로 1비트 움직이고 ch1에 다시 대입한다
//	uch1 >>= 1;					// 0b 0100 1111     양수또는 음수가 제일 앞이 비면 부모비트를 따라간다 
//	printf("ch1: %x, uch1: %x\n", ch1, uch1);
//	ch1 == uch1;
//
//
//	return 0;
//}
