#include<stdio.h>
int main()

{
    int tc;
    long int cnt,i,j,a,b,num,u,z,sum,k;
    scanf("%d",&tc);
    while(tc--){
        scanf("%ld %ld",&i,&j);
        cnt=0;
        for(a=i; a<=j; a++)
        {
            for(b=2 ;b<=a-1; b++)
            {
            if(a%b==0)break;
            }
            if(a==b){
                sum=0;
            while(b>0)
            {
                u=b%10;
                sum=sum+u;
                b=b/10;
            }
            for(k=2;k<=sum-1;k++)
               {
                if(sum%k==0)break;}
            if(sum==k){
                cnt++;
            }

        }
        }
         printf("%ld\n",cnt);
}
    return 0;
}
