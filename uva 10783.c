#include<stdio.h>

int main()
{
    int i,a,b,t,cnt=0;
    scanf("%d",&t);

    while(t--)
    {
    int sum=0;
    scanf("%d\n %d",&a,&b);
    if(a%2==0) ++a;
    if(b%2==0) --b;
    for(i=a; i<=b; i+=2){

        sum=sum+i;
    }
    ++cnt;

    printf("Case %d: %d\n",cnt,sum);
    }
    return 0;

}
