#include<iostream>
using namespace std;
int main(){
     int n;
	 cin>>n;
	 int i=1,j,k,m;
	 while(i<=n)
	 {
		 k=1;
		 while(k<=n-i)
		 {
			 cout<<" ";
			 k++;
		 }
		 j=1;
		 while(j<=i)
		 {
			 cout<<"*";
			 j++;
		 }
		 int m=1;
		 while(m<i-1)
		 {
              cout<<"*";
			  m++;
		 }
		 cout<<endl;
		 i++;
	 }
}


