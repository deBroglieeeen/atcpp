# include <bits/stdc++.h>
# define rep(i,n) for (int i = 0; i < n; i++)
# define all(v) v.begin() ,v.end()
using namespace std;
using ll = long long;


int main()
{
  int N;
  cin >> N;
  vector<int> B(N);
  rep(i,N){
    cin >> B[i];
  }
  vector<int> ans;
  while (B.size() > 0){
    int z = -1;
    rep(i,B.size()){
      if(B[i] == i + 1){
        z = i + 1;
      }
    }
    if(z == -1){
      cout << -1 << endl;
      return 0;
    }
    B.erase(B.begin() + z - 1);
    ans.push_back(z);
  }
  reverse(all(ans));
  rep(i,ans.size()){
    cout << ans[i] << endl;
  }

  return 0;
}