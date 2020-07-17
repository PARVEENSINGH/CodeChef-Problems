#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void swap(ll *a,ll *b)
{
    int p=*a;
    *a=*b;
    *b=p;
}
ll min(ll a,ll b)
{
    return a>b?b:a;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,flag=0,i,j;
	    ll min_no;
	    cin>>n;
	    
	    vector<ll> vec1;
	    vector<ll> vec2;
	    
	    ll A[n],B[n],res=0;
	    for(i=0;i<n;i++)
	    cin>>A[i];
	    for(i=0;i<n;i++)
	    cin>>B[i];
	    
	    sort(A,A+n);
	    sort(B,B+n);
	    min_no= min(A[0],B[0]);
	    
	    i=0,j=0;
	    
	    while(i<n && j<n)
	    {
	        if(A[i]<B[j])
	        {
	            vec1.push_back(A[i]);
	            i++;
	            //vec1 will store the elements smaller than the B[j]
	        }
	        
	        else if(A[i]>B[j])
	        {
	            vec2.push_back(B[j]);
	            j++;
	            //vec2 will store all the elements smaller than the A[i]
	        }
	        else  //When elements are equal
	        {
	            i++;
	            j++;
	            //Not storing the equal elements
	        }
	    }
	   
	    while(i<n)
	    {
	       vec1.push_back(A[i]);
	       i++;
	    }
	    
	    while(j<n)
	    {
	        vec2.push_back(B[j]);
	        j++;
	    }
	    sort(vec1.begin(),vec1.end());
	    sort(vec2.begin(),vec2.end());
	    i=vec1.size();
	    if(i%2!=0 && i!=vec2.size())
	    {
	        cout<<-1<<endl;
	        continue;
	        
	        // size of vectors should be even because the numbers entries should
	        //exist in even number such that can be divided equally into two parts.
	       
	        /*Size of both vectors should be equal as initial size was n.*/
	        
	    }
	 
	    i--;
	    j=0;
	    for(j=0;j<vec1.size();)
	    {
	        if(vec1[j]==vec1[j+1] && vec2[i]==vec2[i-1])
	        {
	            res+=min(2*min_no,min(vec1[j],vec2[i]));
	            
	            /*2*min_no  is done to swap as follows
	            swap min_no or A[0]/B[0] with vec1[j]
	            then swap min_no with vec2[i]*/
	            
	            /*min(vec1[j],vec2[i]) is done always assuming to swap 
	            the smaller number from A with the greatest possible number from B.*/
	        }
	        else
	        {
	            flag=1;  //if any entry present odd number of times.
	            break;
	        }
	        i-=2;
	        j+=2;
	    }
	   if(flag)
	    cout<<-1<<endl;
	   else
	    cout<<res<<endl;
	    
	}
	return 0;
}
