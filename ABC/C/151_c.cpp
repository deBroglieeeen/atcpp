# include <bits/stdc++.h>
# define rep(i,n) for (int i = 0; i < n; i++)
# define sort(v) sort(v.begin(),v.end())
# define rsort(v) reverse(v.begin(),v.end())
# define all(v) v.begin() ,v.end()
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
const long long INF = 1LL << 60;
// I should have prepared two vectors
int main()
{
  int N;
  int M;
  cin >> N >> M;
  int ac_counter = 0;
  int wa_counter = 0;
  vector<int> WA(105000);
  vector<bool> AC(105000);
  for(int i = 1; i < N; i++ ){
    WA.at(i) = 0;
    AC.at(i) = false;
  }
  while(M--){
    int p; string r;
    cin >> p >> r;
    if(AC.at(p)) continue;
    if(r == "AC"){
      ac_counter++;
      AC.at(p) = true;
      wa_counter += WA.at(p);
    }else{
      //wa_counter += 1;
      WA.at(p)++;
    }
  }
  cout << ac_counter << " " << wa_counter << endl;
  return 0;
}