#include <stdio.h>
#include <ctype.h>

void convertLowerASCII(char *str){
	for (int i = 0; *(str+i)!='\0'; i++){
		if (((*(str+i))<=95) && ((*(str+i))!=' ')){
			(*(str+i))+=32;
		}
	}
}

void convertLowerCtype(char * str){
	for (int i = 0; *(str+i)!='\0'; i++){
		if (isupper(*(str+i))){
			*(str+i)= tolower(*(str+i));
		}
	}
}


int main(){
	char str[100000];
	gets(str);
	convertLowerCtype(str);
	puts(str);
}

