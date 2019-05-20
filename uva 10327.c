#include<stdio.h>

int main()
{
    int n,i,j,ch[1000],max,cnt;

    while(scanf("%d",&n)!=EOF)
    {


    for(i=1; i<=n; i++)
    {
    scanf("%d",&ch[i]);
    }
    cnt=0;
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(ch[i]>ch[j])
                cnt++;
        }

    }

        printf("Minimum exchange operations : %d\n",cnt);

    }
    return 0;

    }

