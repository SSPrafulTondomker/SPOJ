#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,m,n,i,j,c,x,y,ex,ey;
	scanf ("%d",&t);
	while (t--)
	{
		scanf ("%d%d",&m,&n);
		char a[1000][1000];
		c = 0;
		for (i = 0; i < m; i++)
		{
			cin >> a[i];
			if (i == 0 && m-1 != 0)
			{
				for (j = 0; j < n; j++)
				{
					if (a[i][j] == '.')
					{
						c += 1;
						if (c == 1)
						{
							x = i;
							y = j;
							//cout<<i<<" "<<j<<endl;
						}
						if (c == 2)
						{
							ex = i;
							ey = j;
						}
						//cout << c << endl;
					}
				}
			}
			else if (i == m-1)
			{
				for (j = 0; j < n; j++)
				{
					if (a[i][j] == '.')
					{
						c += 1;
						//cout << c << " "<< a[i][j] << " "<< y<<endl;
						if (c == 1)
						{
							x = i;
							y = j;
							//cout << x<<" "<<y<<endl;
						}
						if (c == 2)
						{
							ex = i;
							ey = j;
						}
					//cout << x << " h" << y << endl;
					}
				}
				//cout << c << endl;
			}
			else if (i >= 1 && i < (m-1))
			{
				if (a[i][n-1] == '.' && n-1 != 0)
				{
					c += 1;
					if (c == 1)
					{
						x = i;
						y = n-1;
					}
					if (c == 2)
					{
						ex = i;
						ex = n-1;
					}
					//cout << c <<" "<<i<<" "<<n-1<< endl;
				}
				if (a[i][0] == '.')
				{
					c += 1;
					if (c == 1)
					{
						x = i;
						y = 0;
					}
					if (c == 2)
					{
						ex = i;
						ey = 0;
					}
				}
				//cout << c << endl;
			}
		}
		//cout << c << " "<<x<<" "<<y<<" "<<ex<<" "<<ey<< endl;
		if (c < 2 || c > 2)
		{
			printf ("invalid \n");
			c = 0;
		}
		else
		{
			queue<pair<int,int> > q;
			int check[1000][1000],f,l,flag;
			flag = 0;
			memset (check,0,sizeof(check));
			pair<int,int> pos;
			q.push(make_pair(x,y));
			while (!q.empty())
			{
				pos = q.front();
				int f,l;
				f = pos.first;
				l = pos.second;
				check[f][l] = 1;
				if (f == ex && l ==ey)
				{
					flag = 1;
					break;
				}
				//cout<<q.size()<<endl;
				q.pop();
				if (f-1 >= 0 && f-1 < m)
				{
					if (l >= 0 && l < n)
					{
						if (a[f-1][l] == '.' && check[f-1][l] == 0)
							q.push(make_pair(f-1,l));
					}
				}
				if (f+1 >= 0 && f-1 < m)
				{
					if (l >= 0 && l < n)
					{
						if (a[f+1][l] == '.' && check[f+1][l] == 0)
							q.push(make_pair(f+1,l));
					}
				}
				if (l-1 >= 0 && l-1 < n)
				{
					if (f >= 0 && f < m)
					{
						if (a[f][l-1] == '.' && check[f][l-1] == 0)
							q.push(make_pair(f,l-1));
					}
				}
				if (l+1 >= 0 && l+1 < n)
				{
					if (f >= 0 && f < m)
					{
						if (a[f][l+1] == '.' && check[f][l+1] == 0)
							q.push(make_pair(f,l+1));
					}
				}
			}
			if (flag == 0)
				printf ("invalid\n");
			else
				printf ("valid \n");
			    q = queue<pair<int,int> >();  
			    flag = 0;
		}
	}
}
		



