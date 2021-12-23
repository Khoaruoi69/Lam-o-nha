#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

struct float_calculate{
    float soa;
    float sob;
};
typedef struct float_calculate*p;
void cong(void*args){
	
struct float_calculate*p=(struct float_calculate*)args;
  float c = p->soa + p->sob;
  printf("\nTONG: %f",c);
  
}
void tru(void*args){
struct float_calculate*p=(struct float_calculate*)args;
  float c = p->soa - p->sob;
  printf("\nTRU: %f",c);
}
void nhan(void*args){

struct float_calculate*p=(struct float_calculate*)args;

  float c = p->soa * p->sob;

  printf("\nNHAN: %f",c);

}
void chia(void*args){
struct float_calculate*p=(struct float_calculate*)args;
  float c = p->soa / p->sob;
  printf("\nCHIA: %f",c);
}

int main ()
{
	int res;
        float a,b;
        pthread_t a_thread[10];
        struct float_calculate p;
        printf("\nNhap a: ");
        scanf("%f",&a);
        printf("\nNhap b: ");
        scanf("%f",&b);
        p.soa=a;
        p.sob=b;

	
	
	void* thread_result;
	/*Kh?i t?o danh sách các tuy?n*/
	
		/*T?o tuy?n và luu vào ph?n t? m?ng*/
		res = pthread_create (&(a_thread [1]), NULL,& cong ,&p);
		if(res!=0){
				perror("\nthread created error");
				exit(EXIT_FAILURE);
}
		sleep (1);

		res = pthread_create (&(a_thread [2]), NULL,& tru , &p);
		if(res!=0){
				perror("\nthread created error");
				exit(EXIT_FAILURE);
}
		sleep (1);

		res = pthread_create (&(a_thread [3]), NULL, &nhan ,&p);
		if(res!=0){
				perror("\nthread created error");
				exit(EXIT_FAILURE);
}
		sleep (1);

		res = pthread_create (&(a_thread [4]), NULL, &chia , &p);
		if(res!=0){
		perror("\nthread created error");
		exit(EXIT_FAILURE);
}
		sleep (1); 

	printf ("Waiting for threads to finish ...\n");
	
	/*Ch? danh sách các tuy?n k?t thúc*/
	for(int i=5; i> 0;  i--)
	{
		res = pthread_join (a_thread [thread_num], &thread_result);
		if (res != 0)
		{
			perror ("Thread exited error");
		}
		else
		{
			printf ("Pickup a thread\n");
		}
	}
	printf ("All thread completed \n");
	return 0;
}
