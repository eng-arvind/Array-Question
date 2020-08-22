#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  cout<<"Enter size of array\n";
  int n;
  cin>>n;
  cout<<"Enter element of array\n";
  int*a ;
   a=new int[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
   int mx=*max_element(a,a+n);
   int mn=*min_element(a,a+n);
   cout<<"max="<<mx<<"min="<<mn<<endl;
   return 0;
}
