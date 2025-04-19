#include <stdio.h>
int main (){
char string[100];
printf("please enter a string ");
fgets(string,sizeof(string),stdin);
char *newline=string;
while (*newline!='\0')
  { 
    if (*newline=='\n')
      {
          *newline='\0';
          break;
      }
    newline++;
  } 

char *ptr=string;
char *ptr1=string; 
while (*ptr !='\0')
 { 
    ptr++;
 }
 ptr--;
while (ptr1<ptr)
   {
    char u =*ptr1;
     *ptr1=*ptr;
     *ptr=u;
      ptr1++;
      ptr--;
   }  
   ptr1=string;
   printf("the reversed string is\n ");
   while (*ptr1!='\0')
   {
    printf("%c",*ptr1); 
    ptr1++;
   }
      return 0;
}