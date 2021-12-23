#include<stdio.h>
#include<conio.h>
void nhapn (int&n)
{
 do {
 	printf("nhap n:"); scanf("%d",&n);
 	if(n<=0||n>100)
 	printf("\nban nhap sai");
} while(n<=0||n>100);
}
long tinhtong (int n)
	{long S=0;
	for(int i =1;i<=n;i++)
	S=S+i;
	return S;
	}
void xuatuoc (int n)
{    for(int i=1;i<=n;i++)
	    if (n%i==0)
	    printf("\nxuat uoc:%d",i);
	}
int demuoc(int n)
{    int d=0;
     {
	 for (int i=1;i<=n;i++)
     if(n%i==0){
         d++;}}
         return d;
}
int tongcacuoc (int n)
{    int T;
     {
	 for(int i=1;i<=n;i++)
     if(n%i==0)
     T=T+i;}
     return T;
}
void KTsohoanthien (int n)
{   int K=0;
    {
    for(int i=1; i<n;i++)
    if(n%i==0)
    K=K+i;}
    if(n==K)
    printf("\nHT");
    else 
    printf("\nKHT");
    
}
int main()
{ int n;
nhapn(n);
long S=tinhtong(n);
printf("\n tinhtong:%ld",S);
xuatuoc(n);
int d=demuoc(n);
printf("\n%d co %d uoc", n, d);
{
if(d==2)
{printf("\n%d la so nguyen to",n);}
else{
printf("\n%d ko la so nguyen to", n);}
}
int T=tongcacuoc(n);
printf("\ntong cac uoc:%d",T);
KTsohoanthien(n);
}
