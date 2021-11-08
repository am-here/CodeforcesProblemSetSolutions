#include <bits/stdc++.h>
using namespace std;
int  main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long a,b,c;
		cin >> a >> b >>c;
		long long x = max(a,max(b,c));
		if(a>b && a>c)
			cout << 0 << " ";
		else
			cout << x+1-a << " ";
		if(b>a && b>c)
			cout << 0 << " ";
		else
			cout << x+1-b << " ";
		if(c>a && c>b)
			cout << 0 << " ";
		else
			cout << x+1-c << " ";
		cout<<endl;
	}

	return 0;
}
