# include <bits/stdc++.h>

using namespace std;

int main()
{
  const int BuyOne = 15;
  int N;
  int Ans;
  cin >> N;
  int Balls = N / 10;
  int M = N % 10;
  if(N < 10 && N < 7){
    Ans = N * BuyOne;
  }else if(N < 10 && N >= 7){
    Ans = 100;
  }else if(M >= 7){
    Ans += Balls * 100 + 100;
  }else if(M < 7 && M != 0){
    Ans += Balls * 100;
    Ans += M * 15;
  }else{
    Ans += Balls * 100;
    Ans += M * 15;
  }
  cout << Ans << endl;
  return 0;
}