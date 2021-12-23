#include<stdio.h>
#include<conio.h>

	long tinhtong(int n)
	{
		if(n==0)
		return 0;
		long s= tinhtong(n-1);
		return s+n;
	}
int main(){
	int n;
	printf("nhap n:"); scanf("%d",&n);
	long t= tinhtong(n);
	printf("%ld",t);
	return 0;
}

