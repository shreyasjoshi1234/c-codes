#include<stdio.h>

void hash1(int a[])
{
   
    int i,r,n=13,key;
    for(i=0;i<n;i++)
    a[i]=-1;
    printf("Enter 13 keys\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&key);
        r=key%13;
        if(a[r]==-1){
        a[r]=key;
        }
        else
        {
             r=r+1;
            while(a[r]==-1)
            {
                a[r]=key;
                r=(r+1)%13;
            }
        }
    }
    printf("Hash table\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}

int main()
{
    int a[13];
    hash1(a);
    return 0;
}

