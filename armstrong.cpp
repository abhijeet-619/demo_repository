#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,p,remainder;
    int sum=0;
    cin>>n;
    p=n;

    while(n>0)
    { 
        remainder=n%10;
        sum=sum+(pow(_issue_sum1_c5,3));
        n/=10;
    }
    if(sum==p)
    {cout<<"armstrong";}
    else
    cout<<"non-armstrong";
    return 0;

}
