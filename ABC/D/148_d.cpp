# include <bits/stdc++.h>
# define REP(i,a,b) for (int i = (int)(a); i < (int)(b); i++)
# define rep(i,n) REP(i,0,n)
# define rrep(i,n) for (int i = (int)(n - 1); i >= 0; i--)
# define sort(v) sort(v.begin(),v.end())
# define rsort(v) reverse(v.begin(),v.end())
# define all(v) v.begin() ,v.end()
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int N;

int main()
{
  cin >> N;
  vector<int> bricks(N);
  rep(i,N){
    int a;
    cin >> a;
    bricks.at(i) = a;
  }
  int check = 1;
  rep(i,N){
    if(bricks.at(i) == check){
      check++;
    }
  }

  if(check == 1){
    cout << -1 << endl;
    return 0;
  }
  cout << N + 1 -check << endl;
}