#include<iostream>
using namespace std;
int main()
{
    int a,b,k;
    cout<<"enter the number"<<endl;
    cin>>a>>b;
    for(k=a;k<=a*b;k=k+1)
    
        if(k%a==0 && k%b==0)
        {
        cout<<k;
        break;
    }
    return 0;
}