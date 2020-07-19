#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,res=-1,countSame=1;
	    cin>>n;
	    
	    ll A[n];
	  
	    for(int i=0;i<n;i++)
	        cin>>A[i];
	    sort(A,A+n); 
	    
	    for(int i=0;i<n-1;i++)
	    {
	        if(A[i]==A[i+1])
	         countSame++;
	         else
	         {
	             if(res<countSame)
	             res=countSame;
	             countSame=1;
	         }
	    
	    }
	    if(res<countSame)
	    res=countSame;
	    cout<<res<<endl;
	   
	}
	return 0;
}
