bool isPalindrome(int x){
     int n=x;
     long int reverse=0;
    if(n<0)
    {
        return false;
        exit(0);
    }
while(n!=0)
{
     int d=n%10;
    reverse=reverse*10+d;
    n=n/10;
}
if(x==reverse)
  return true;
else 
 return false;
}