#include<stdio.h>

int main(){
	int x, y;
	do{
		printf("Nhap gia tri cua x:\n");
		scanf("%d", &x);
		printf("Nhap gia tri cua y:\n");
		scanf("%d", &y);
			int t = x;
				x = y;
				y = t;
		printf("Gia tri x la: %d\n", x);
	    printf("Gia tri y la: %d\n", y);				
	}
	while( x != 0 && y != 0);
	return 0;
}
