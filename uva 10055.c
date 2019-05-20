#include <stdio.h>

int main()
{
    long long int a,b,temp,n=0;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        if(a<b){
            temp=a;
            a=b;
            b=temp;
        }
        n=a-b;
        printf("%lld\n",n);
    }

    return 0;

}
