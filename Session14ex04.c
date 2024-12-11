#include<stdio.h>
int main(){
	char str[]="Hello Word";
	int count=0;
	int kyTu;
	printf("Ban hay nhap mot ky tu bat ky: ");
	scanf("%c", &kyTu);
	int length=sizeof(str)/sizeof(char);
	for(int i=0; i<length; i++){
		if(kyTu==str[i]){
			count++;
		}
	}
	printf("Ky tu %c xuat hien %d lan", kyTu, count);
}
