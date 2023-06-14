#include <iostream>
using namespace std;
int main()
{
    int fact=1;
    int n;
    cout<<"enter the value of n:";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"(n)*(n-1)*(n-2)......n="<<fact;
    return 0;
}
