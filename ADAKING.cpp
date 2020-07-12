#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    char M[8][8];
	    
	    for(int i=0;i<8;i++)
	    {
	        for(int j=0;j<8;j++)
	        {
	            M[i][j]='.';
	        }
	    }
	    
	    if(n<8)
	    {
	        int row=7,col=1,i=1;
	        M[row][col]='O';
	        M[row][col-i]='X';
	        M[row][col+i]='X';
	        M[row-i][col-i]='X';
	        M[row-i][col+i]='X';
	        M[row-i][col]='X';
	        
	        while(n>1)
	        {
	             i++;
	             M[row-i][col-1]='X';
	             M[row-i][col+1]='X';
	             M[row-i][col]='.';
	             n--;
	        }
	        if(n==1)
	        {
	         M[row-1][col]='.';   
	         M[row-i][col]='X';
	        }
	    }
	    else
	    {
	        int row=0,col=0,i=1;
	        M[row][col]='O';
	        int t=n/8,r=n%8;
	        row=n/8;
	        if(r>0)
	        {
	            col+=r;
	            int rc=col,i=0;
	            
	            while(col<8)
	            M[row][col++]='X';
	            
	            while(i<rc+1)
	            M[row+1][i++]='X';
	        }
	        else if(r==0)
	        {
	            while(col<8)
	            M[row][col++]='X';
	        }
	           
	        }
	  
	    for(int i=0;i<8;i++)
	    {
	        for(int j=0;j<8;j++)
	        {
	            cout<<M[i][j];
	        }
	        cout<<endl;
	    } 
	    
	    cout<<endl;
	}
	return 0;
}
