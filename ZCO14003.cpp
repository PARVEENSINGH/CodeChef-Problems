#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    long long a;
    vector<long long> vec;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    long long res=0;
    for(int i=0;i<n;i++)
    {
        if(res<vec[i]*(n-i))
        {
            res=vec[i]*(n-i);
        }
    }
    
    cout<<res<<endl;
	return 0;
	
}
