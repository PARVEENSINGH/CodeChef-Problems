#include <iostream>
using namespace std;

int  wina=0,winb=0;

int  getDigitSum(long long a)
{
    int  sum=0;
    while(a>0)
    {
     sum+=a%10;
     a/=10;
    }
   
    return sum;
}
void solve(long long a,long long b)
{
    int A=getDigitSum(a);
    int B=getDigitSum(b);
    
     if(A>B)
        wina+=1;
     else if(B>A)
        winb+=1;
     else
     {
         wina+=1;
         winb+=1;
     }
}

int main() {
	int t,count=0;
	cin>>t;
	while(t-->0)
	{
	    wina=0;
	    winb=0;
	    int n;
	    long long a,b;
	    cin>>n;
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a>>b;
	        if(a==b)
	        {
	            winb+=1;
	            wina+=1;
	        }
	        else
	        solve(a,b);
	    }
	    
	    if(wina>winb)
	    {
	        cout<<"0"<<" "<<wina<<endl;
	    }
	    else if(wina==winb)
	    {
	        cout<<"2"<<" "<<wina<<endl;
	    }
	    else
	    cout<<"1"<<" "<<winb<<endl;
	}
	return 0;
}
