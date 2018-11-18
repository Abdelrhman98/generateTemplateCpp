#include <bits/stdc++.h>
//#include "template.h"
using namespace std;
typedef long long LL;
#define sfi1(v) scanf("%d",&v)
#define ll long long
#define sfstr(v) scanf("%s", v)
#define sfi2(v1,v2) scanf("%d %d",&v1,&v2)
#define all(v) v.begin(),v.end()
#define srtva(v) sort(all(v))
typedef vector<int>       VI;
#define lp(i,n) FOR(i,0,n)
#define pb push_back

//#include "temo.h"


int main()
{
    int n, k;
    double mn = 9999999999.0, calc;
    LL first;
    sfi1(ll);
    sfstr(str);
    sfi2(k,n);
    all(vec);
    srtva(vec);
    VI vec(k);
    VI sum;
    lp(i, k)
    {
        sfi1(vec[i]);
        if(i<=n)first+=vec[i];
    }
    sum.pb(first);
    lps(i, n, k)
    {
        sum.pb(first+vec[i]);
        calc = sum[i]*1.0/(abs(vec[i]- vec[0])+1)*1.0;
            if(calc < mn)
                mn = calc;
    }
    lp(jj, abs(k-n))
    {
        for(int i=n+jj ,j=0;i<k ; j++, i++)
        {
            int cur = sum[jj] - vec[j];
            cur+=vec[i];
            calc = cur*1.0/(abs(vec[j]- vec[i])+1)*1.0;
            if(calc < mn)
                mn = calc;
        }
    }
    cout<<fixed<<mn;

    return 0;
}

