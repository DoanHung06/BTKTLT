#include<stdio.h>
void nhap(int a[], int n);
void xuat(int a[], int n);
void xuatscp(int a[], int n);
int main(){
	int n;printf("Nhap so phan tu : ");
	scanf("%d",&n);
	int a[n];
	printf("Nhap cac phan tu : ");
	nhap(a,n);
	printf("Cac phan tu da nhap la : ");
	xuat(a,n);
	printf("\nCac so chinh phuong cua mang la : ");
	xuatscp(a,n);
	return 0;
}
void nhap(int a[], int n){
	int i=0;
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void xuat(int a[], int n){
	int i=0;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
void xuatscp(int a[], int n){
	int i=0,s=0;
	for(i=0;i<n;i++){
		int temp =(int)sqrt(a[i]);
		if(temp*temp==a[i]){
			printf("%d ",a[i]);
			s+=a[i];
		}
	}
	printf("\nTong cac so chinh phuong la %d",s);
}
