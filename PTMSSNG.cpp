#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	 int n;
	 cin>>n;
	 ll xorx=0,xory=0,a,b;
	 ll size=4*n-1;
	 for(ll i=0;i<size;i++)
	 {
	     cin>>a>>b;
	     xorx^=a;
	     xory^=b;
	 }
	 
	 cout<<xorx<<" "<<xory<<endl;
	}
	return 0;
}
