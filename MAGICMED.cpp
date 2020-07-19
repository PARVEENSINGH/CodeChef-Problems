#include <iostream>
// #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 100000007
ll pow(ll A,ll B,ll M)
{
    A=A%M;  
    ll res=1;
    
    if(A==0)  // If A is divisible by M. Then the net profit is zero.
    return 0;
    
    while(B>0)
    {
        if(B & 1) // If B is odd. Odd no. has their LSB 1.
        res=(res*A)%M; 
        
        B>>=1;
        A=(A*A)%M;
    }
    return res;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        ll A,B,C,M,P;
        cin>>A>>B>>C>>M>>P;
      
        if(A==0)
        {
              cout<<"NO"<<" "<<0<<"\n";
                    continue;
        }
        if(A==1)
        {
            cout<<"YES"<<" "<<(P%mod)<<"\n";
                    continue;
        }
        
        ll pow1=pow(A,B,M);
        ll pow2=pow(pow1,C,M);
        
        ll medi=pow2%M;
        ll profit=(medi*P)%mod;
        if(medi==0)
        cout<<"NO"<<" "<<0<<"\n";
        else
        cout<<"YES"<<" "<<profit<<"\n";
    }
	return 0;
}
