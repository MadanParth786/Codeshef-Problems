#include<iostream>
#include<algorithm>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
       long long int n,count=0,l=0,r;
       cin>>n;
       vector<pair<pair<long long int,long long int>,long long int>> arr(n);
       vector<long long int> ans;
       for(int i=0;i<n;i++)
        {
            long long int x;
            cin>>x;
            arr[i].first.first=x;
        }
        for(int i=0;i<n;i++)
        {
            long long int x;
            cin>>x;
            arr[i].first.second=x;
            arr[i].second=i+1;
        }
        sort(arr.begin(),arr.end());
        int check=0;
        for(long long int i=0;i<arr.size();i++)
        {
            
            if(arr[i].first.first>arr[i].first.second)
            {
                continue;
            }
            if(i==0)
            {
                r=arr[i].first.first;
                ans.push_back(arr[i].second);
                ans.push_back(l);
                ans.push_back(r);
                l=r;
                count++;
                continue;
            }

            if(arr[i].first.second-l>=arr[i].first.first)
            {
                r=arr[i].first.first+l;
                ans.push_back(arr[i].second);
                ans.push_back(l);
                ans.push_back(r);      
                l=r;
                count++;
            }

        }
        cout<<count<<endl;
        for(long long int i=0;i<ans.size();i++)
        {
        cout<<ans[i]<<" ";
        if((i+1)%3==0)
        {
            cout<<endl;
        }
        }

    }
    return 0;
}
