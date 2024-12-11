#include<stdio.h>
int main(){
	char str[]="Hello Word";
	int length=sizeof(str)/sizeof(char);
	printf("dao nguoc: \n");
	for(int i=length-1; i>=0; i--){
		printf("%c", str[i]);
	}
}
