#include<bits/stdc++.h>
#define int long long
#define vi vector<long long>
#define vvi vector<vector<long long>>
#define pii pair<long long, long long>
#define arr array<int, 3>
#define pb push_back
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nope cout<<"-1\n"
#define ff first
#define ss second
#define endl "\n"
#define all(v) v.begin(), v.end()
#define umap unordered_map
#define uset unordered_set
#define f(i,n) for(int i=0;i<n;i++)
#define r(i,n) for(int i=n-1;i>=0;i--)
#define fs(i,a,n) for(int i=a;i<n;i++)
#define fe(i,n) for(int i=0;i<=n;i++)
#define fse(i,a,n) for(int i=a;i<=n;i++)
#define rse(i,a,n) for(int i=a;i>=n;i--)
#define M 1000000007
using namespace std;
int inf = INT_MAX;
template<class T>void inp(vector<T>&a){for(auto &x:a)cin>>x;}template<class T>
void prefixSum(vector<T>&p, vector<T>&a){p[0]=a[0];for(int i=1;i<p.size();++i)p[i]+=p[i-1]+a[i];}
bool is_prime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
template<class T> void look(vector<T>&a){for(auto &x:a)cout<<x<<' ';cout<<endl;}
template<class T> void look(vector<T>adj[], int&n){fse(i, 1, n){cout<<i<<" -> ";look(adj[i]);}}
string decToBinary(int n){string s="";int i=0;while(n>0){s=to_string(n%2)+s;n=n/2;i++;}return s;}
int max(vector<int>&a){return *max_element(all(a));}
int min(vector<int>&a){return *min_element(all(a));}
int acc(vector<int>&a){return accumulate(all(a),0ll);}
int lcm(int a, int b){return (a / __gcd(a, b)) * b;}
int psum(vi &p, int l, int r){if(l > r || l < 0 || r < 0 || l >= p.size() || r >= p.size())return 0;if(l == 0)return p[r];return p[r] - p[l - 1];}
int mul(int a, int b)
{
	return (a * b) % M;
}
int add(int a, int b)
{
	return (a + b) % M;
}
int sub(int a, int b)
{
	return (a - b + M) % M;
}
int binpow(int a, int b)
{
	a %= M;
	int res = 1;
	while(b)
	{
		if(b & 1)
			res = mul(res, a);
		a = mul(a, a);
		b >>= 1;
	}
	return res;
}
int mdiv(int a, int b)
{
	return mul(a, binpow(b, M - 2));
}
const int N = 2e6;
int fact[N + 1];
void comp()
{
	fact[0] = fact[1] = 1;
	for(int i = 2; i <= N; ++i)
		fact[i] = mul(fact[i - 1], i);
}
int ncr(int n, int r)
{
	int num = fact[n];
	int den = mul(fact[n - r], fact[r]);
	return mdiv(num, den);
}
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
// find_by_order, order_of_key
const auto start_time = std::chrono::high_resolution_clock::now();
void time_taken(){auto end_time = std::chrono::high_resolution_clock::now();std::chrono::duration<double> diff = end_time-start_time;cerr<<"Time Taken : "<<diff.count()<<"\n";}
/*************************************************************************************************/
void solve()
{
	
}
/*************************************************************************************************/
signed main(){ios_base::sync_with_stdio(false);cin.tie(NULL);int t = 1;while(t--)solve();time_taken();}