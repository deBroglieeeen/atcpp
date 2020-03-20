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
  vector<vector<int>> given(3,vector<int>(3));
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      int num;
      cin >> num;
      given.at(i).at(j) = num;
    }

  }

  for (int a = 0; a < 101; a++)
  {
    for (int b = 0; b < 101; b++)
    {
      vector<vector<int>> grid(3,vector<int>(3));
      for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          grid.at(i).at(j) = a
        }
      }
    }

  }


  return 0;
}