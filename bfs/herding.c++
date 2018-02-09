/*bfs*/
#include <bits/stdc++.h>
using namespace std;
bool valid(int x , int y , int n , int m){
	    if(x >=0 && y>=0 && y< m && x<n)
		            return true;
	        return false;
}
int main()
{
	int n,m,i,j;
	scanf ("%d%d",&n,&m);
	char s[n][m];
	for (i = 0; i < n; i++)
	{
		scanf ("%s",s[i]);
	}
	int count,check[n][m];
	count = 0;
	memset (check,0,sizeof(check));
	int prev,color;
	prev = 0;
	color = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			queue<pair<int,int> > q;
			q.push(make_pair(i,j));
			vector<pair<int,int> > path;
			path.push_back(make_pair(i,j));
			if (!check[i][j])
			{
				color = prev + 1;
				check[i][j] = color;
				while (!q.empty())
				{
					pair<int,int> pos = q.front();
					q.pop();
					int x,y;
					x = pos.first;
					y = pos.second;
					if (s[x][y] == 'N')
						x++;
					else if (s[x][y] == 'S')
						x--;
					else if (s[x][y] == 'E')
						y++;
					else if (s[x][y] == 'W')
						y--;
					if (valid(x,y,n,m)&&check[x][y] == 0)
					{
						path.push_back(make_pair(x,y));
						q.push(make_pair(x,y));
						check[x][y] = color;
					}
					else if (valid (x,y,n,m) && check[x][y]!=0)
					{
						int save = check[x][y];
						if (check[x][y]<color)
						{
							for (int p=0;p<path.size();p++)
								check[path[p].first][path[p].second] = check[x][y];
						}
						color = save;
						break;
					}
				}
				if (color>prev)
					prev++;
			}
		}
	}
	cout<<prev<<endl;
	return 0;
}


	
