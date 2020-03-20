# include <bits/stdc++.h>
# define rep(i,n) for (int i = 0; i < n; i++)
# define sort(v) sort(v.begin(),v.end())
# define rsort(v) reverse(v.begin(),v.end())
# define all(v) v.begin() ,v.end()
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
const long long INF = 1LL << 60;

ll X;

bool is_prime(ll n)
{
  if(n == 1){
    return false;
  }
  int k = ceil(sqrt(n));
  //cout << k << " " << typeid(k).name() << endl;
  rep(i,k){
    //cout << i << endl;
    if(i == 0 || i == 1){

    }
    else if(n % i == 0){
      return false;
    }
  }
  return true;
}

int main()
{
  cin >> X;
  if(X == 2 || X == 3 || X == 5){
    cout << X << endl;
  }
  else if(is_prime(X)){
    cout << X << endl;
    //cout << "come come" << endl;
  }else{
    while(true){
      X += 1;
      if(is_prime(X)){
        cout << X << endl;
        //cout << "is coming" << endl;
        return 0;
      }
    }
  }
  return 0;
}