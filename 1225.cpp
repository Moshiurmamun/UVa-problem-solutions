#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,k, a,num;
	int t;
	cin>>t;

	while(t--){
		cin>>num;
		int  c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
		for(i=1; i<=num; i++){
			a=i;
			while(a>=1){
				k = a%10;
				if(k==0)
					c0++;
				else if(k==1)
					c1++;
				else if(k==2)
					c2++;
				else if(k==3)
					c3++;
				else if(k==4)
					c4++;
				else if(k==5)
					c5++;
				else if(k==6)
					c6++;
				else if(k==7)
					c7++;
				else if(k==8)
					c8++;
				else if(k==9)
					c9++;

				a = a/10;
			}
		}
		cout<<c0<<" "<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<" "<<c5<<" "<<c6<<" "<<c7<<" "<<c8<<" "<<c9<<endl;
	}

	return 0;
}
