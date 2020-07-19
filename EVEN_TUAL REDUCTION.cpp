#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAX 255

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i=0,flag=0;
	    vector<int> A(255,0);
	    cin>>n;
	    string str;
	    cin>>str;
	     while(i<str.length())
	     {
	        A[str[i]]++;
	        i++;
	     }
	    
	    for(int i=97;i<123;i++)
	    {
	        if(A[i]&1)
	        {
	            flag=1;
	            cout<<"NO"<<endl;
	            break;
	        }
	        //cout<<A[i]<<" ";
	    }
	    if(!flag)
	    cout<<"YES"<<endl;
	   // for(int i=0)
	}
	return 0;
}
