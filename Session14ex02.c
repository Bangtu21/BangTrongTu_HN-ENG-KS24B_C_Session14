#include<stdio.h>
int main(){
	char str[]="HelloWord";
	int length=sizeof(str)/sizeof(char);
	length--;
	for(int i=0; i<length; i++){
		printf("%c_", str[i]);
	}
}

