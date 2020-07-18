#include <iostream>
using namespace std;

int main() {
	int n,pos,i;
	cin>>n;
	
	int A[n+1];
	for(int i=1;i<=n;i++)
	cin>>A[i];

	for( i=n;i>1;i--)
	if(A[i]!=A[i-1])
	{
	    pos=i;
	    break;
	}
	if(i==1)
	pos=1;
	cout<<pos<<endl;
	
	return 0;
}
