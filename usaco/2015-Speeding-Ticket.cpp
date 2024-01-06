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
  setIO("speeding");
  solve();
}


void solve(){
  int n, m; cin >> n >> m;
  vector<int> road(100, 0);
  int ans = 0;
  int pos = 0;
  for(int i = 0; i < n; i++){
    int length, speed; cin >> length >> speed;
   for (int j = pos; j < pos + length; j++) {
            road[j] = speed;
        }
        pos += length;
  }
 
  
  
pos = 0;

for(int i = 0; i < m; i++){
  int length, speed;
  cin >> length >> speed;

   for (int j = pos; j < pos + length; j++) {
            ans = max(ans, speed - road[j]);
  
        }

        pos += length;
}

  cout << ans << "\n";
}