#include<iostream>
using namespace std;
int main()
{
    int n,i=2;
    cout<<"enter the number";
    cin>>n;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"number is not prime";
             
         
        }
        else
        { cout<<"numberis prime ";}
          i=i+1;
           
        
        }
        return 0;

}

