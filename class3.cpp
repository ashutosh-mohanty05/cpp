#include<iostream>
using namespace std;
class oddeve
{
    int a;
    public :
    void getdata();
    void putdata();

};
void oddeve::getdata()
{
    cout<<"\n enter to check";
    cin>>a;
}
void oddeve::putdata()
{
    if(a%2==0)
    cout<<"\neven";
    else
    cout<<"\nodd";
}
int main()
{
    oddeve aa;
    aa.getdata();
    aa.putdata();
    return 0;
}