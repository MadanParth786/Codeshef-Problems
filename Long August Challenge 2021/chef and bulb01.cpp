#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int N,p,k; 
		cin>>N>>p>>k;
        int days=0;
        int i=0,m=0;
        while(m<=p%k)
        {
            int ans=(i*k)+m;
            if(ans<N)
            {
                days++;
                i++;
                if(ans==p)
                {
                    cout<<days<<endl;
                    break;
                }
            }
            else{
                i=0;m++;
            }
        }
    }
}
