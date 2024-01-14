#include<stdio.h>

int main(){
	char c1, c2;
	printf("Nhap ki tu dau tien:\n");
	scanf("%c", &c1);
	fflush(stdin);
	printf("Nhap ki tu thu hai:\n");
	scanf("%c", &c2);
	int d;
	char t, c;
	if(c1 > c2){
		t = c1;
		c1 = c2;
		c2 = t;
	}
	d = c2 - c1;
	printf("Su khac biet giua %c va %c là: %d\n", c1, c2, d);
	printf(" Dec Oct Hex\n");
	for(c = c1; c < c2; c++) printf("%c %d %o %x\n", c, c, c, c);
}
