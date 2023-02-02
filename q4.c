#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
	char str[1000];
	char consonants[21]="bcdfghjklmnpqrstvwxyz";
	char vowels[5]="aeiou";
	gets(str);

	int v=0,c=0,d=0,s=0;

	for (int i=0; *(str+i)!='\0'; i++){
		char x = tolower(*(str+i));
		if (x=='a' ||x=='e'||x=='i'||x=='o'||x=='u') v++;
		else{
			if (x=='b' ||x=='c'||x=='d'||x=='f'||x=='g'||
				x=='m' ||x=='h'||x=='j'||x=='k'||x=='l'||
				x=='n' ||x=='p'||x=='q'||x=='r'||x=='s'||
				x=='y' ||x=='x'||x=='w'||x=='v'||x=='t'||
				x=='z')c++;
			else{
				if(isdigit((x)))d++;
				else{
					s++;
				}
			}
		}
	}
	printf("Vowel: %d\nConsonant: %d\nDigit: %d\nOther: %d\n", v,c, d, s);
}