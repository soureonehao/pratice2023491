#include<stdio.h>
#include<ctype.h>
int main(void){
	int table[27], i, alphabet, x, y, ch, encipher, j, deciphering[20];
	for (i = 0; i <= 26; i++) {
		alphabet = 'a';
		alphabet += i;
		table[i] = alphabet;
	}
printf("��������乫ʽx,y:"); 
scanf_s("%d %d", &x, &y);
while (getchar() != '\n');
	printf("������Ҫ���ܵ�����ƴ��:");
	while ((ch = getchar()) != EOF) {
		if (ch == '\n')
			break;
		ch = tolower(ch) - 'a';
		encipher = (x * ch + y) % 26;
		putchar(table[encipher]);
		
	}
	return 0;
	}