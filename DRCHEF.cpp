#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll max(ll a,ll b)
{
    return a>b?a:b;
}

void solve(ll A[],int n,ll x)
{
    int max_index,res=0,count=0,i=0,begin=0;
   
    sort(A+1,A+n+1);

    for(int i=1;i<=n;i++)
    if(A[i]>=x)
    {
        begin=i;
        break;
    }
     // Elements less than x are below index begin and they can be added directly 
    if(!begin)
    {  //if all the elements are less than x.
    cout<<n<<endl;
    return;
    }
    
    x=max(x,A[begin-1]*2);
    //updating the value of x by eliminating the country at index begin-1
    
    for(i=begin;i<=n;i++)
    {
         while(x<A[i])
        {
            x*=2;
            res++;
        }
        
        res++;
        x=2*A[i];
        
    }
    
    cout<<res+begin-1<<endl; // -1  is performed because element initially at 
                            //begin-1 has been considered in res.
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    ll x,A[n+1];
	    cin>>x;
	    A[0]=0;
	    for(int i=1;i<=n;i++)
	    cin>>A[i];
	    
	    solve(A,n,x);
	    
	    
	}
	return 0;
}

