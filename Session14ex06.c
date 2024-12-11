#include<stdio.h>
int main(){
	char str[]="bang trong tu";
	int length=sizeof(str)/sizeof(char);
	int count=0;
	for(int i=0; i<length; i++){
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
			count++;
		}
	}
	printf("So ky tu co trong chuoi la: %d", count);
}
