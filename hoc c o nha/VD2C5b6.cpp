/* chuong trinh thong ke can bo theo trinh do*/
#include<stdio.h>
int a[]={6,1,4,3,2,5,1,6,4,5,2,3,1,3,5};
main(){
	int i, trendh=0, trench=0, trenpts=0, ts=0;
	for(i=0;i<15;++i){
		switch(a[i]){
			case 6: ts++;
			case 5: trenpts++;
			case 4: trench++;
			case 3: trendh++;
		}
	}
	printf("\nso can bo tu dai hoc tro len la: %2d",trendh);
	printf("\nso can bo tu cao hoc tro len la: %2d", trench);
	printf("\nso can bo tu pts tro len la: %2d",trenpts);
	printf("\nso can bo co hoc vi la tien sy la: %2d",ts);
}
