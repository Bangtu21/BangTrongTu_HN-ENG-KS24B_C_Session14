#include<stdio.h>
int main(){
	char str[]="hello word";
	int count=1;
	int length=sizeof(str)/sizeof(char);
	for(int i=0; i<length; i++){
		if(str[i]==' '){
			count++;
		}
	}
	printf("so tu co trong chuoi la %d", count);
}
