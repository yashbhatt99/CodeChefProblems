#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	
    int t;
    cin >> t;

    int n;
    cin >> n;

    std::vector<int> p; 

    while(t--)
    {
    	int five = 0, ten = 0, fifteen = 0;
        for(int i; i<=n; i++)
        {
            cin>>p[i];

            

            if(p[0] == 5)
            {
                if(p[i] == 5)
                {
                    five++;
                }
                else if(p[i] == 10)
                {
                    ten++;
                    five--;
                    if(five == 0)
                    {
                        cout<<"YES";
                    }
                }
                else if(p[i] == 15)
                {
                    ten--;
                    if(ten == 0)
                    {
                        five - 2;
                    }
                    else if(five == 0)
                    {
                        cout << "NO";
                    }
                }
            }
        }
    }
    return 0;
}
