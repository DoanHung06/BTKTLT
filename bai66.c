#include<stdio.h>
void nhap(int a[], int n);
void xuat(int a[], int n);
int xoaam(int a[], int n);
int main(){
	int n;printf("Nhap so phan tu : ");
	scanf("%d",&n);
	int a[n];
	printf("Nhap cac phan tu : ");
	nhap(a,n);
	printf("Cac phan tu da nhap la : ");
	xuat(a,n);
	n=xoaam(a,n);
	printf("\nCac phan tu sau khi chinh sua la : ");
	xuat(a,n);
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
int xoaam(int a[], int n){
	int i=0;
	for (i=0;i<n;i++){
		if(a[i]<0){
			int j=i;
			for(j;j<n;j++){
				a[j]=a[j+1];
			}
			n--;
		}
	}
	return n;
}
