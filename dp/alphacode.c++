#include <bits/stdc++.h>
using namespace std;
int value (string s,int l,int i)
{
	if (i == l)
		return 1;


int main()
{
	int t;
	string s;
	cin >> t;
	while (t--)
	{
		cin >> s;
		l = (s.length());
		cout << value (s,l) << endl;
	}
	return 0;
}
