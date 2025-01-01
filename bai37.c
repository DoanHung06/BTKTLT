#include<stdio.h>
#include<math.h>
void phantichsochinhphuong(int x);
int main(){
	int n;
	printf("Nhap so N: ");
	scanf("%d",&n);
	phantichsochinhphuong(n);
	return 0;
}
void phantichsochinhphuong(int x){
	printf("\nCac so chinh phuong la: ");
	while(x>0){
		int y=(int)sqrt(x);
		int temp=y*y;
		x-=temp;
		printf("%d ",y);
	}
}
