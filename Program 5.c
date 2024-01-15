#include<stdio.h>

int main(){
	char ch;
	int vowels = 0;
	int consonants = 0; 
	int others = 0;
	printf("Nhap ky tu:\n");
	do{
		ch = getchar();
		if(ch >= 'A' && ch <= 'Z'){
			switch(ch){
				case 'A': 
				case 'E':
				case 'I':
				case 'O':
				case 'U': 
				vowels++;
				break;
				default: consonants++;
			}
		}
	else others++;
	}
	while(ch != '\n');
	printf("number of vowels: %d\n", vowels);
	printf("number of consonants: %d\n", consonants);
	printf("number of others: %d\n", others - 1);
}
