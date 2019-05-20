#include<bits/stdc++.h>

using namespace std;

int main()
{
    double d,v,u,Sp,St,thita,diff;
    int n,cnt=0;
    scanf("%d",&n);
    while(n--){
        scanf("%lf %lf %lf",&d,&v,&u);
        cnt++;
        if(v==0 || v>=u){
            printf("Case %d: can't determine\n",cnt);
        }
        else{
        thita=acos(v/u);
        Sp=d/(u*sin(thita));
        St=d/u;
        diff=abs(Sp-St);
        printf("Case %d: %.3lf\n",cnt,diff);
    }
    }
    return 0;
}
