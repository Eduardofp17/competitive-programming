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

void solve();
void setIO(string filename = ""){
 	if (filename.size()) {
		freopen((filename + ".in").c_str(), "r", stdin);
		freopen((filename + ".out").c_str(), "w", stdout);
	}
}
int32_t main(){
  cin.tie(nullptr)->sync_with_stdio(false);
  setIO("lostcow");
  solve();
}


void solve(){
  int x, y; cin >> x >> y;
  int fact = 1;
  int ans = 0;
  int oldX = x;
  int original = x;
    while (true)
    {
    oldX = x;
    x = original;
    x+= fact;
    if((oldX <= y && y <= x) || (x <= y && y <= oldX)){
      ans += abs(y-oldX);
      break;
    }
    ans += abs(x-oldX);
    fact *= -2;         
    }
    
  cout << ans << "\n";
}