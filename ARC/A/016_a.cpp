# include <bits/stdc++.h>
# define rep(i,n) for (int i = 0; i < n; i++)
# define sort(v) sort(v.begin(),v.end())
# define rsort(v) reverse(v.begin(),v.end())
# define all(v) v.begin() ,v.end()
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
  int N; int M;
  cin >> N >> M;
  vector<int> erased_numbers(N);
  for (int i = 0; i < N; i++)
  {
    //erased_numbers.at(i) = i + 1;
    if(i + 1 != M){
      cout << i + 1 << endl;
      break;
    }
  }


}