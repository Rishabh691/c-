#include<iostream>
using namespace std;
int main()
{
    int n,i=0,sum=0;
    cout<<"enter the value of n";
    cin>>n;
    while(i<=n)
    {
         sum=sum+i;
         
         i=i+2;

    }
    cout<<sum ;
    return 0;
}