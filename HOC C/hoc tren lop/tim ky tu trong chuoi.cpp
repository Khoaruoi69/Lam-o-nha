(char *a, char *b)
{
	int kq,d=0;
	if(strstr(a,b)!=NULL)
	{
		kq=strlen(a)-strlen(strstr(a,b));
		for(int i=kq;i>=0;i--)
		if(a[i]==' ')
		d++;
		return d+1;
	}
	else return -1;
}

int main()
{
	char s[255], s1[255];
	printf("\nEnter string: ");
	gets(s);
	char *c;
	printf("\nSearch: ");
	scanf("%c", &c);
	int k=search(s,c);
	printf("\nlocation %s: %d", c, k);
	
	getch();
	return 0;
}
