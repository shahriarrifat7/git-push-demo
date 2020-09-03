#include<stdio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;

int ara[32001];

int main()
{
    int n;
    time_t t;
    printf("How many random numbers?\n");
    scanf("%d",&n);
    srand((unsigned) time(&t));
    for(int i=1; i<=n; i++){
        ara[i]=rand();
        printf("%d \n",ara[i]);
        ara[i]=ara[i]%50;
        printf("%d\n",ara[i]);
    }
    for(int i=1; i<=n; i++){
        printf("%d\n",ara[i]);
    }
    return 0;
}
