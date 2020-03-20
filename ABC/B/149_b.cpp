# include <bits/stdc++.h>
# define rep(i,n) for (int i = 0; i < n; i++)
# define sort(v) sort(v.begin(),v.end())
# define rsort(v) reverse(v.begin(),v.end())
# define all(v) v.begin() ,v.end()
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
const long long INF = 1LL << 60;

ll A,B,K;

int main()
{
  cin >> A >> B >> K;
  if(A < K){
    auto rest = K - A;
    A = 0;
    if(B < rest){
      cout << 0 << " " << 0 << endl;
    }else{
      B -= rest;
      cout << A << " " << B << endl;
    }
  }else{
    A -= K;
    cout << A << " " << B << endl;
  }
}