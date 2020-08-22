#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  cout<<"Enter size of array\n";
  int n;
  cin>>n;
  cout<<"Enter element of array\n";
    int* a;
    a=new int[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter element that you want to find\n";
    int val;
    cin>>val;
    for(int i=0;i<n;i++)
    {
      if(val==a[i])
      {
        cout<<"find\n";
        return 0;
      }
    }
    cout<<"not find\n";
    return 0;
}
