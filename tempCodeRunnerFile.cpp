#include<iostream>
using namespace std;
bool isPalindrome(int x){
    signed int n=x;
    signed int reverse=0;
while(n!=0)
{
    signed int d=n%10;
    reverse=reverse*10+d;
    n=n/10;
}
if(x==reverse)
  return true;
else 
 return false;
}
int main()
{
    int a;
    cin>>a;
    cout<<isPalindrome(a);
}