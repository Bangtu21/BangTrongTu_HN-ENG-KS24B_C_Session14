#include<stdio.h>

int main(){
	char str[100];
	printf("Ban hay nhap vao mot chuoi: ");
	fgets(str, sizeof(str), stdin);
	int length=strlen(str);
	length--;
	printf("Chuoi ban vua nhap la %s", str);
	printf("Do dai cua chuoi la %d", length);
		
}

