#include<bits/stdc++.h>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;

	while(t--)
	{
		int n,k;

		cin>>n>>k;
		int sum = 0;
		int count = 0;

		for(int i = 0; i<n; i++)
		{
			int price;
			cin >> price;


			if(price > k)
			{
				count += k;
			}
			else
			{
				count += price;
			}

			sum += price;

		}

		cout<<sum - count<<"\n";

	}

	return 0;

	
}

