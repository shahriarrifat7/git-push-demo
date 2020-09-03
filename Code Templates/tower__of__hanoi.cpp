#include<bits/stdc++.h>

using namespace std;

void tower(int n, char BEG, char AUX, char END){
    if(n==1) {
        printf("%c ---> %c\n",BEG,END);
        return;
    }
    tower(n-1,BEG,END,AUX);
    printf("%c ---> %c\n",BEG,END);
    tower(n-1,AUX,BEG,END);
    return;
}
int main()
{
    int n;
    printf("Enter the number of disks : ");
    scanf("%d,",&n);
    printf("The following moves are required for N = %d\n",n);
    tower(n,'A','B','C');
    return 0;
}
