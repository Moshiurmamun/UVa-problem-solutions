#include<stdio.h>
#include<math.h>
#define pi acos(-1)

int main()

{
    int T,n;
    double l,w,r,red_area,green_area;
    scanf("%d",&n);
    for(T=1;T<=n;T++)
    {
        scanf("%lf",&l);
        w=6*(l/10);
        r=(l/5);

        red_area=pi*r*r;
        green_area=(l*w)-red_area;
        printf("%.2lf %.2lf\n",red_area,green_area);

    }

    return 0;
}


