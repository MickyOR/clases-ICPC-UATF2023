/*
               __
              / _)
     _.----._/ /
    /         /
 __/ (  | (  |
/__.-'|_|--|_|
*/
#include <bits/stdc++.h>
 //#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <bits/extc++.h>
typedef long long ll;
#define int long long
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define all(a) (a).begin(), (a).end()
#define clr(a, h) memset(a, (h), sizeof(a))
#define f first
#define s second
#define fore(i, b, e) for (int i = (int) b, o_o = e; i < (int) o_o; ++i)
#define forr(i, b, e) for (int i = (int) b, o_o = e; i < (int) o_o; ++i)
#define deb(x) cerr << "# " << (#x) << " = " << (x) << endl;
#define sz(x) (int) x.size()
#define endl '\n'
// int in(){int r=0,c;for(c=getchar();c<=32;c=getchar());if(c=='-') return -in();for(;c>32;r=(r<<1)+(r<<3)+c-'0',c=getchar());return r;}

using namespace std;
#define cin std::cin
#define cout std::cout
#define cerr std::cerr
//using namespace __gnu_pbds;
//#pragma GCC target ("avx2")
//#pragma GCC optimization ("O3")
//#pragma GCC optimization ("unroll-loops")

typedef pair < int, int > ii;
typedef vector < int > vi;
typedef vector < ii > vii;
typedef vector < ll > vll;
typedef vector < vi > vvi;
typedef vector < vii > vvii;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
//find_by_order kth largest  order_of_key <
//mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
const int INF = numeric_limits < int > ::max() / 4;
const double PI = acos(-1);

const int maxN = 1e5 + 5;
vector<int> g[maxN];
vector<bool> vis(maxN, false);
int m; // maxima cantidad de gatos seguidos
int res;
vector<int> tieneGato(maxN);

void dfs(int u, int gatos) {
  if (gatos > m) return;
  vis[u] = true;
  bool hoja = true;
  for (int v : g[u]) {
    if (!vis[v]) {
      hoja = false;
      if (tieneGato[v]) dfs(v, gatos + 1);
      else dfs(v, 0);
    }
  }
  if (hoja) res++;
}

signed main() {
  std::ios::sync_with_stdio(false); cin.tie(0);
  int n;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> tieneGato[i];
  }
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;
    u--; v--;
    g[u].pb(v);
    g[v].pb(u);
  }
  res = 0;
  dfs(0, tieneGato[0]);
  cout << res << endl;
  return 0;
}
// Sunrise, Parabellum