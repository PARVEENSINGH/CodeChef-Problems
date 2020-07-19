#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void printResult(vector<ll> vec)
{
    for(int i=0;i<19;i++)
    cout<<vec[i]<<" ";
    cout<<endl;
}
int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    ll A,B,temp;
	    cin>>A>>B;
	    vector<ll> vec(19,1);
	    
	    if(B==0 || A==0)
	    {
	    printResult(vec);
	    continue;
	    }
	    
	    
	    for(int i=2;i<21;i++)
	    {
	        temp=(B*(log(A)/log(i)))+1; /*Direct Formula can be used 
	                to get the required number of digit to represent a 
	                decimal number in various number system. 
	                Formula:- (log(n)/log(numberSystem))+1;*/
	        vec[i-2]=temp;
	        
	    }
	         
	   printResult(vec);      
	   
	}
	return 0;
}
