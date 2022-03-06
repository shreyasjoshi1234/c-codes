#include<stdio.h>
#include<stdlib.h>

int main()
{
   if( vfork()==0)
    printf("OS");
    return 0;
}