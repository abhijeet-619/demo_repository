#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {cout<<"non-prime";
        break;}
     }
        if(n==i)
        {cout<<"prime";}
    
    return 0;
}