#include<iostream>
using namespace std;
class arr
{
    int a,b;
    public :
    void getdata();
    void putdata();

};
void arr::getdata()
{
    cout<<"\n enter two numbers :\n";
    cin>>a>>b;
}
void arr::putdata()
{
    cout<<"\na="<<a<<"\tb="<<b;
}
int main()
{
    int i;
    arr aa[i];
    for(i=0;i<5;i++)
    aa[i].getdata();
    for(i=0;i<5;i++)
    aa[i].putdata();
    return 0;
}