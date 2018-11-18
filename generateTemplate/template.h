#ifndef TEMPLATE_H_INCLUDED
#define TEMPLATE_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef long double   	  LD;
typedef vector<int>       VI;
typedef vector<LL>        VLL;
typedef vector<LD>       VLD;
typedef vector<double>    VD;
typedef vector< VI >      VVI;
typedef vector< VI >      VVD;
typedef vector<string>    VS;
typedef unsigned long long ULL;
typedef pair<int,int> PII;
typedef vector< PII > VPII;
typedef map<LD,int> mpldi;
#define ll long long
#define all(v) v.begin(),v.end()
#define srtva(v) sort(all(v))
#define srtvd(v) sort(v.rbegin(),v.rend())
#define srtaa(a,n) sort(a,a+n)
#define srtad(a,n) sort(a,a+n),reverse(a,a+n)
#define sfi1(v) scanf("%d",&v)
#define sfi2 (v1,v2) scanf("%d %d",&v1,&v2)
#define sfi3(v1,v2,v3) scanf("%d %d %d",&v1,&v2,&v3)
#define sfi4(v1,v2,v3,v4) scanf("%d %d %d %d",&v1,&v2,&v3,&v4)
#define sfll1(v) scanf("%I64d",&v);
#define sfll2(v1,v2) scanf("%I64d %I64d",&v1,&v2)
#define sfll3(v1,v2,v3) scanf("%I64d %I64d %I64d",&v1,&v2,&v3)
#define sfll4(v1,v2,v3,v4) scanf("%I64d %I64d %I64d %I64d",&v1,&v2,&v3,&v4)
#define sfstr(v) scanf("%s", v)
#define sfch1(ch) scanf("%c",&ch)
#define chr getchar()
#define pfi1(x) printf("%d",x)
#define p2i(x,y) printf("%d %d",x,y)
#define pl(x) printf("%lld",x)
#define p2l(x,y) printf("%lld %lld",x,y)
#define pfstr(ch) printf("%s",ch)
#define pfch(ch) printf("%c",ch)
#define sf scanf
#define pf printf
void PLAY() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	/*cout<<fixed;
	cout<<setprecision(3);
*/}
#define FI freopen("input.txt","r",stdin)
#define FO freopen("out.txt","w",stdout)
#define nl printf("\n")
#define SS stringstream
#define pb push_back
#define mp make_pair
#define fst first
#define sec second
#define sz(v) (int)v.size()
#define ssz(a) strlen(a)
#define debug(x) cout<<#x<<" = { "<<x<<" }\n"
#define FOR(i,s,e) for(int i = s; i < e; i++)
#define FORD(i,e,s) for(int i=e-1,i>=s;i--)
#define lp(i,n) FOR(i,0,n)
#define lpd(i,n) FORD(i,n-1,0)
#define rev(i,s,e) FORD(i,s,e)
#define rep(i,v) FOR(i,0,sz(v))
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
template <typename T>
void print(vector<T> vec){
    rep(i, vec){cout<<vec[i]<<" ";}
    nl;}
void printArr(int arr[], int size){
    lp(i, size){
        pfi1(arr[i]);
        pf(" ");
    }
    nl;
}

#endif // TEMPLATE_H_INCLUDED
