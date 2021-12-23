// khoi tao so ngau nhien trong C
// Ham srand 
cu phap: void srand (unsigned int seed);
de tao mot so ngau nhien theo mot so seed. so ngau nhien duwoc tao la pseudo
random, tuc la so ngau nhien gia, co the don duoc so ke tiep. Moi mot so seed
se cho ra mot bo nho random khac nhau.
de cho so seed khac nhau nguoi ta dung kem voi unsigned int time(NULL) trong 
thu vien time.h, ham time(NULL) tra ve so giay da troi qua ke tu 1/1/1970.
Ham srand() thuong doc goi truoc khi goi ham rand().

// ham rand
cu phap: int rand(void );
tra ve so nguyen tu trong khoag random gia trong khoang 0 den RAND-MAX. Hang 
RAND-MAX duoc dinh nghia trong stdlib.h dam bao it nhat 32767.
Neu chi dung ham rand() thi se cho ra nhung so giong nhau moi lan chay, vi 
vay nguoi ta thuong khai bao srand(time (NULL)) truoc ket qua random moi lan 
moi khac nhau.
*De lay so ngau nhien tu 0 den n t su dung rand()%(n+1)
* De lay so ngau nhien tu a den b ta ssu dung a+ rand()%(b-a+1).
***** vi du***
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
int main()
{
   int a, b;
   srand(time(NULL));
   printf("a = %d\n", rand()%100); //Ng?u nhiên t? 0 d?n 99
   printf("b = %d\n", 50+rand()%51); // 50 d?n 100
   return 0;
}
//Hàm Random tu 0 den n:
int Random(int n)
{
   return rand()%(n+1);
}

//Hàm Random tu a den b:

int Random(int a, int b)
{
   return a + rand()%(b-a+1);
}

//Hàm Random so thuc tu 0 den n:
float Random(float n)
{
   return n*rand()/RAND_MAX;
}

//Hàm Random so thuc tu a den b:
float Random(float a, float b)
{
   return a + (b - a)*rand()/RAND_MAX;
}

//Hàm Random cho mang mot chiou:
void Random(int *a, int n)
{
   for(int i = 0; i < n; i++)
      a[i] = rand();
}
