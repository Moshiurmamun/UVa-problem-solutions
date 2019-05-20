#include<stdio.h>

int main()
{
    int a,n,s,i,max,cnt=0;

    scanf("%d",&a);



    while(a--)
    {
        max=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf("%d",&s);
            if(s>max)
                max=s;


        }++cnt;
        printf("Case %d: %d\n",cnt,max);

    }
    return 0;
}
