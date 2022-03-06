#include<stdio.h>

void fun1()
{
    static int a=10;
 //   a=10;
    printf("\nFunction a %d",a);
    a++;
}

int main()
{
    fun1();
    fun1();
    fun1();

}

