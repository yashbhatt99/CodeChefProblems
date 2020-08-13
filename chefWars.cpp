#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(--t)
	{
		int P, H;
		cin >> P >> H;
		
		def chefWars:
		
		   bool flag = false;
		   while(P!=0)
		   {
			  H = H-P;
			  P = P/2;

			  if(H < 1)
			   {
				 flag = true;
			   }
			   else if(P < 1)
			   {
			   	flag = false;
			   }
		    }
	    		if (flag == true)
	    		{
	    			cout << "1";
	    		}
	    		else if(flag == false)
	    		{
	    			cout << "0";
	    		}
	        }
    return 0;
}