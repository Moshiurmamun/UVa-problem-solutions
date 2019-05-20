#include<stdio.h>

int main()
{
    int t,a,b,n;
    scanf("%d",&n);
    for(t=0;t<n;t++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
            printf(">\n");
        else if(b>a)
            printf("<\n");
        else if("a==b")
            printf("=\n");


    }
    return 0;

}
