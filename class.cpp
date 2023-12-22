#include<iostream>
using namespace std;
class addition
{
private:
 int a,b;
 public:
 void getdata()
 {
    cout<<"\n enter two numbers";
    cin>>a>>b;
 }
 void putdata()
 {
    cout<<"\n addition= "<<a+b;
 }
};

int main()
{
    addition aa;
    aa.getdata();
    aa.putdata();
    return 0;
}