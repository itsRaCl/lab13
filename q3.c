#include <stdio.h>
#include <ctype.h>

int add(char *s1, char *s2, char *s3){
	int count=0;
	for (int i=0; *(s1+i)!='\0'; i++){
		*(s3+count)=*(s1+i);
		count++;
	}
	*(s3+count)=' ';
	count++;
	for (int i=0; *(s2+i)!='\0'; i++){
		*(s3+count)=*(s2+i);
		count++;
	}
}

int main(){
	char s1[1000], s2[1000];

	printf("S1: ");
	gets(s1);
	printf("S2: ");
	gets(s2);

	int first, i=0;
	if (strcmp(s1, s2)==0){
		first=3;
	}
	else{
		while (1){
			if (s1[i]==s2[i]) i++; 
			else{
				if (tolower(s1[i])> tolower(s2[i])){
					first = 2;
				}
				else{
					first =1;
				}
				break;
			}
			
		}
	}
	char s3[2000];
	if (first==1){
		add (s1, s2, s3);
		puts(s3);
	}else if(first==2){
		add(s2, s1, s3);
		puts(s3);
	}
	else if(first ==3){
		puts(s1);
	}
}