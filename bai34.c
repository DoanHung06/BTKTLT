#include<stdio.h>
#include<string.h>
int kiemtradoixung(char a[]);
int main(){
	char a[100];
	gets(a);
	int t=kiemtradoixung(a);
	if(t==0){printf("chuoi so khong tu doi xung");
	}
	else printf("chuoi so tu doi xung");
	return 0;
}
int kiemtradoixung(char a[]){
	int i=0,j=strlen(a)-1;
	while (i<=j){
		if(a[i]!=a[j]){
			return 0;
		}
		
		i++;j--;
	}
	return 1;
}
