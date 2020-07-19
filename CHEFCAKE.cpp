#include <iostream>
using namespace std;
typedef long long ll;

void solve(int A[],int n,ll sum)
{
    int temp=n;
    ll fact_res=1,res=0,i=1;
    while(n>1)
    {
        fact_res*=n;
        n--;
    }
    
    ll fact_for_n_Minus_1=fact_res/temp;
    sum*=fact_for_n_Minus_1;
    while(temp>0)
    {
        res+=sum*i;
        i*=10;
        temp--;
    }
    cout<<res<<endl;
    
}
int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    int A[n];
	    ll sum=0;
	    for(int i=0;i<n;i++)
	    {
	    cin>>A[i];
	    sum+=A[i];
	    }
	    
	    solve(A,n,sum);
	}
	return 0;
}
