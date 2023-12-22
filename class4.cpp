#include<iostream>
using namespace std;
class oneten
{
    int a;
    public:
  void putdata();
};
    void oneten::putdata()
    {
    int i;
    for(i=0;i<10;i++)
    cout<<"\n"<<i;
} 


int main()
{
    oneten aa;
    aa.putdata();
    return 0;
}