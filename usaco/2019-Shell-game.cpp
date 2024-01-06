#include <bits/stdc++.h>

using namespace std;
#define mp make_pair
#define mt make_tuple
#define ff first
#define ss second
using namespace std;
template <typename T>
using matrix = vector<vector<T>>;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const ll INFL = (1LL<<62)-1;
const int INF = (1<<30)-1;
const double EPS = 1e-7;
const int MOD = 1e9 + 7;
const int MAXN = 110;
vector<int> shell_pos(3);
void solve();

int32_t main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	solve();
}

void solve(){
		freopen("shell.in", "r", stdin);
	int n; cin >> n;
		int ans = 0;
	for(int i = 1; i <= 3; ++i)
		shell_pos[i] = i;

	vector<int> counter(3);

	for(int i = 0; i < n; i++){
		int a, b, g;
		cin >> a >> b >> g;
		swap(shell_pos[a], shell_pos[b]);
		counter[shell_pos[g]]++;

	}

	ans = max({counter[1], counter[2], counter[3]});

freopen("shell.out", "w", stdout);
	cout << ans << "\n";

}
