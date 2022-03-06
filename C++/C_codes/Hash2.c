#include<stdio.h>
#include<string.h>

#define MAX 13

void hash(char a[MAX][MAX])
{
    int n,i,r,sum=0;
    char key[MAX];
    printf("Enter the number of keys to be entered\n");
    scanf("%d",&n);
    i=n;
    while(i!=0)
    {
        printf("enter the key\n");
        scanf("%s",key);
        for(int j=0;key[j]!='\0';j++)
        {
            sum=sum+key[j];
        }
        r=sum%MAX;
        if(a[r][0]=='0')
        {
            strcpy(a[r],key);
            printf("the key %d is in location %d in the array\n",sum,r);
        }
        else
        {
            while(a[r][0]!='0')
            {
                r=(r+1)%17;
                if(a[r][0]=='0')
                {
                    strcpy(a[r],key);
                    printf("the key %d is in location %d in the array\n",sum,r);
                    break;
                }
            }
        }
        i--;
    }
}

void display(char a[MAX][MAX])
{
    int sum=0;
    printf("Enter the key to be searched\n");
    char key[MAX];
    scanf("%s",key);
            for(int j=0;key[j]!='\0';j++)
        {
            sum=sum+key[j];
        }
    int r=sum%MAX;
    if(strcmp(a[r],key)==0)
    {
        printf("location is %d",r);
    }
    else
    {
        r=r+1;
        int flag=0;
        while(strcmp(a[r],key)!=0)
        {
            if(flag==MAX)
            {
                break;
            }
            r=(r+1)%MAX;
            flag++;
        }
        if(flag!=MAX)
        {
            printf("Location is %d",r);
        }
        else
        {
            printf("Location is not found\n");
        }
    }
}

int main()
{
    char a[MAX][MAX];
    for(int i=0;i<MAX;i++)
    {
        a[i][0]='0';
    }
    hash(a);
    display(a);
}
