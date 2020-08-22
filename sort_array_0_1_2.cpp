#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int zero=0,one=0,two=0;
	    for(int i=0;i<n;i++)
	    {
	     if(a[i]==0)
	     zero++;
	     else if(a[i]==1)
	     one++;
	     else
	     two++;
	    }
	   // cout<<zero<<one<<two<<endl;
	    int i=0;
	    a[n]={0};
	    while(zero--)
	    {
	        a[i++]=0;
	    }
	    while(one--)
	    {
	        a[i++]=1;
	    }
	    while(two--)
	    {
	        a[i++]=2;
	    }
	    for(int i=0;i<n;i++)
	    cout<<a[i]<<" ";
	    cout<<endl;

	}
	return 0;
}
