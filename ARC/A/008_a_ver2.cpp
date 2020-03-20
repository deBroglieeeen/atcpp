# include <bits/stdc++.h>
using namespace std;

int main()
{
  int i,price = 0,n;
  cin >> n;
  while(n >= 10){
    price += 100;
    n -= 10;
  }
  if(n < 7) price += 15 * n;
  else price += 100;
  cout << price << endl;
  return 0;
}