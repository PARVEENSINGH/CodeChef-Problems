#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        //long long  A[n];
        long long x,y,sum=0;
        cin>>x;
        
        for(int i=1;i<n;i++)
        {
            cin>>y;
            
            sum+=abs(y-x)-1;
            x=y;
        }
        
        cout<<sum<<endl;
    }
	return 0;
}
