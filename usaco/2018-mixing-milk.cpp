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
void solve();

int32_t main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	solve();
}
void solve(){
  freopen("mixmilk.in", "r", stdin);
vector <int> capacity(3);
vector<int> pous(3);
  for(int i = 0; i < 3; i++){
    cin >> capacity[i];
    cin >> pous[i];
  }
  int pou = 0;

  for(int i =0; i < 100; i++){
     int from = pou;  
    int to = (pou + 1) % 3;  

    int pour_amount = min(pous[from], capacity[to] - pous[to]);

    pous[from] -= pour_amount;
    pous[to] += pour_amount;

    pou = (pou + 1) % 3;  
  }


  freopen("mixmilk.out", "w", stdout);
  for(int i = 0; i < 3; i++)
    cout << pous[i] << "\n";
}