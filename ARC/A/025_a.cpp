# include <bits/stdc++.h>
# define rep(i,n) for (int i = 0; i < n; i++)
# define sort(v) sort(v.begin(),v.end())
# define rsort(v) reverse(v.begin(),v.end())
# define all(v) v.begin() ,v.end()
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
const long long INF = 1LL << 60;

vector<int> D(7);
vector<int> J(7);
int ans = 0;
int main()
{
  rep(i,7){
    cin >> D[i];
  }
  rep(j,7){
    cin >> J[j];
  }
  rep(k,7){
    if(D[k] >= J[k]){
      ans += D[k];
    }else{
      ans += J[k];
    }
  }
  cout << ans << endl;
}