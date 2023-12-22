#include<iostream>
using namespace std;
int main()
{
    int a,i,count=0;
    cout<<"enter the number"<<endl;
    cin>>a;
    for(i=1;i<=a;i++)
    {
     if(a%i==0)
        count++;
    }
    if(count==2)
    cout<<"it is prime";
    else
    cout<<"not prime";
    return 0;   
}