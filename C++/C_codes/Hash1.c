#include<stdio.h>
#define MAX 17

void hash(int a[MAX])
{
    int n,key,i,r;
    printf("Enter the number of keys to be entered\n");
    scanf("%d",&n);
    i=n;
    while(i!=0)
    {
        printf("enter the key\n");
        scanf("%d",&key);
        r=key%17;
        if(a[r]==-1)
        {
            a[r]=key;
            printf("the key %d is in locaton %d in the array\n",key,r);
        }
        else
        {
            while(a[r]!=-1)
            {
                r=(r+1)%17;
                if(a[r]==-1)
                {
                    a[r]=key;
                    printf("the key %d is in locaton %d in the array\n",key,r);
                }
            }
        }
        i--;
    }
}

void display(int a[MAX])
{
    printf("Enter the key to be searched\n");
    int key;
    scanf("%d",&key);
    int r=key%MAX;
    if(a[r]==key)
    {
        printf("location is %d",r);
    }
    else
    {
        r=r+1;
        int flag=0;
        while(a[r]!=key)
        {
            if(flag==13)
            {
                break;
            }
            r=(r+1)%MAX;
            flag++;
        }
        if(flag!=13)
        {
            printf("location is %d",r);
        }
        else
        {
            printf("location is not found\n");
        }
    }
}

int main()
{
    int a[MAX];
    for(int i=0;i<MAX;i++)
    {
        a[i]=-1;
    }
    hash(a);
    display(a);
}
