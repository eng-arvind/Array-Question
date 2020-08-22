#include<iostream>
#include<map>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    map<int,int> m={{0,0}};
	    for(int i=0;i<n;i++)
	    {
	        m[a[i]]++;
	    }
	    int ans=m[x];
	    if(ans!=0)
	    cout<<m[x]<<endl;
	    else
	    cout<<-1<<endl;
	}
	return 0;
}
