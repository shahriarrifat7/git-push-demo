#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    double i,j,n,m,mid;

    while(scanf("%lf", &n)==1){
        if(n==0) return 0;
        i=1;

        double high=n,low=0;
        while(i<=64){
            mid=(low+high)/2;
            m=mid*mid;
            if(m>n) high=mid;
            else if(m<n) low=mid;
            i++;
        }
        printf("%lf is the sqrt of %lf",mid,m);
    }
}
