#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int div,val=2;
    while(val<=n)
    {
        int d=2;
    while(d<val)
    {
        if(val%d==0)
          val++;
        else
          d++;
    }
    cout<<val<<endl;
    val++;
   }

}