#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,i,j,l,h,num,temp;
    int n,max,cnt;
    scanf("%d",&n);

    while(n--){
            max=0;
        scanf("%lld %lld",&l,&h);
        if(h<l){
            temp=h;
            h=l;
            l=temp;

        }
        for(i=l;i<=h;i++){
                //a=i;
                cnt=0;
                b=sqrt(i);
                if(b*b==i)
                    cnt--;
            for(j=1;j<=b;j++){
                if(i%j==0){
                    cnt=cnt+2;
                }}
            if(cnt>max){
                max=cnt;
                num=i;
                }

    }
    printf("Between %lld and %lld, %lld has a maximum of %d divisors.\n",l,h,num,max);

    }
    return 0;

}
