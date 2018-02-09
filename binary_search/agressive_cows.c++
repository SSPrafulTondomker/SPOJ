#include <bits/stdc++.h>
using namespace std;
int F(int x,int N,int pos[],int C)
{
	  //We can always place the first cow in the leftmost stall
	  int cowsplaced=1,lastpos=pos[0];
	  for(int i=1;i<N;i++)
	  {
		  if(pos[i]-lastpos>=x)
		  {
		       //We are at least x away from last placed cow
		       //So we can place one here
		          if(++cowsplaced==C)return 1;
			       lastpos=pos[i];
		    }
	    }
}
int main()
{
	int t,n,c;
	scanf ("%d",&t);
	while (t--)
	{
		scanf ("%d%d",&n,&c);
		int pos[n],i;
		for (i = 0; i < n; i++)
			scanf ("%d",&pos[i]);
		sort(pos,pos+n);
		int start=0,r=0,end=pos[n-1]-pos[0]+1,mid;
		while(end-start>1)
		{
			  mid=(end+start)>>1;
			  r += F(mid,n,pos,c);
			    (F(mid,n,pos,c)?start:end)=mid;
		}
		cout << r << endl;
	}
}


