#include <stdio.h>
#include <string.h>


int main()
{
   const char haystack[20] = "VietJack/Team";
   const char needle[10] = "Team";
   char *ret;
   ret = strstr(haystack, needle);
   
   
   printf("Chuoi con la: %s \t", ret);
 //  printf("%s", ret2);
   
   return(0);
}
