#include<stdio.h>
int main()
{


    int n,a,sum;

    do
    {
        scanf("%d",&a);
        sum=0;
        for(n=1; n<=a; n++)
            sum=(n*n)+sum;
            if(sum==0) break;

    printf("%d\n",sum);
    }while(sum!=0);

    return 0;
}
