#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        int d=2;
        while(d<i)
        {
            if(i%2==0)
             i++;
            else
              d++;
        }
        cout<<i<<endl;
    }
} 
