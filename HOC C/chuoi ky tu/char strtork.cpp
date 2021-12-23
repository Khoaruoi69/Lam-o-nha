#include<string.h>
 main(){
	char s[80], *p
	//printf("nhap chuoi ky tu: "); ge
	gets(s);
	p= strtok(s," ");
	if(p) printf("%s",p);
	while(p){
		p=strtok(NULL," ");
		if(p) printf("%s",p);
	}
}
