#include <bits/stdc++.h>
using namespace std;
int seg[100005] = {0};
int lazy[100005] = {0};
void constructSegTree (int a[], int low, int high, int pos)
{
	if (low > high)
		return;
	if (low == high)
		seg[pos] = 1;

	int mid = (low+high)/2;


	
}
int main()
{
	int n, q;
	string s;
	scanf ("%d %d", &n, &q);
	cin >> s;
	int i, a[n];
	for (i = 0; i < n; i++)
	{
		if (s[i] == '1')
			a[i] = 1;
		else 
			a[i] = 0;
	}
	constructseg(a, 0, n-1, 0);
	return 0;
}
