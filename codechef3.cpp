#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
        int five = 0, ten = 0, fifteen = 0;
        bool ans = 1;
        for(int i=1;i<=n;i++) {
            
            if(a[i]==5) five++;
            else if(a[i]==10){
                if(!five){
                    ans=0;
                    break;
                }
                five--;
                ten++;
            }else {
                if(ten) ten--;
                else if(five>=2) five-=2;
                else {
                    ans=0;
                    break;
                }
                fifteen++;                
            }
        }
        cout<<(ans?"YES":"NO")<<endl;
    }
    return 0;
}