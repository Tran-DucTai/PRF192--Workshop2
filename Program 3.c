	#include<stdio.h>

int main(){
	int x;
	printf("Nhap x:\n");
	scanf("%d", &x);
	int sum = 0;
	do{	
		if(x!=0)
		sum = sum + x;
		printf("Nhap x:\n");
		scanf("%d", &x);
	}
	while (x!=0);
	printf("sum of integers: %d", sum);
	return 0;
}


