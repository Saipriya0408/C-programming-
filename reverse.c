#include<stdio.h>  
 int main()    
{    
int n=156, reverse=0, rem;    
    
  while(n!=0)    
  {    
     rem=n%10;    
     reverse=reverse*10+rem;    
     n/=10;    
  }    
  printf("Reversed Number: %d",reverse);    
return 0;  
}