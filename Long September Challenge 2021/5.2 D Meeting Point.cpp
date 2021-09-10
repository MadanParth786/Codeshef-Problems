#include<bits/stdc++.h>
using namespace std;
#define ld long double


int test(ld a, ld b, vector<ld>arr_x, vector<ld>arr_y, int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        ld ax= a-arr_x[i];
        ld by= b-arr_y[i];

        if(ax==0 && by==0)
        {
            count+=0;
        }
        else if((ax==0 && by!=0) || (ax!=0 && by==0))
        {
            count++;
        }
        else if(abs(ax)==abs(by))
        {
            count++;
        }
        else   
            count+=2;
    }
    return count;
}


int main()
{
    int t; cin>>t;

    while(t--)
    {
        int n; cin>>n;

        vector<ld>arr_x;
        vector<ld>arr_y;

        ld a, b;

        for(int i=0; i<n; i++)
        {
            ld val; cin>>val;
            arr_x.push_back(val);
        }

        for(int i=0; i<n; i++)
        {
            ld val; cin>>val;
            arr_y.push_back(val);
        }

        int min_r_steps=INT_MAX;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                // find the mean points
                a = (arr_x[i]+ arr_x[j])/2;
                b = (arr_y[i]+ arr_y[j])/2;
                min_r_steps = min(min_r_steps, test(a, b, arr_x, arr_y, n));

                // intersection point between x & y
                a = arr_x[i];
                b = arr_y[j];
                min_r_steps = min(min_r_steps, test(a, b, arr_x, arr_y, n));

                // intersection point between x+y and x-y
                ld ip1 = arr_x[i]+ arr_y[i];
                ld ip2 = arr_x[j]+ arr_y[j];
                a = (ip1+ ip2)/2;
                b = (ip1- ip2)/2;
                min_r_steps = min(min_r_steps, test(a, b, arr_x, arr_y, n));

                // intersection point between x+y and x
                ld ip3 = arr_x[i]+ arr_y[i];
                a = arr_x[j];
                b = ip3-a;
                min_r_steps = min(min_r_steps, test(a, b, arr_x, arr_y, n));

                // intersection point between x+y and y
                ld ip4 = arr_x[i]+ arr_y[i];
                b = arr_y[j];
                a = ip4-b;
                min_r_steps = min(min_r_steps, test(a, b, arr_x, arr_y, n));

                // intersection point between x-y and x
                ld ip5 = arr_x[i]- arr_y[i];
                a = arr_x[j];
                b = a-ip5;
                min_r_steps = min(min_r_steps, test(a, b, arr_x, arr_y, n));

                // intersection point between x-y and y
                ld ip6 = arr_x[i]- arr_y[i];
                b = arr_y[j];
                a = ip6-b;
                min_r_steps = min(min_r_steps, test(a, b, arr_x, arr_y, n));
            }
        }
        
        cout<<min_r_steps<<endl;
    }
    return 0;
}
