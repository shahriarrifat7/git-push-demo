#include<stdio.h>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    char line[100];
    string s;

    gets(line);

    istringstream ss(line);

    while(ss >> s) {
        printf("%s\n",s.c_str());
    }
    return 0;
}
