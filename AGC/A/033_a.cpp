#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define all(v) v.begin() ,v.end()
using namespace std;
using ll = long long;

struct st {int x, y, cnt;};
int H,W;
int vs[1000][1000];
queue<st> que;
int ans;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

int main()
{
  cin >> H >> W;
  rep(i,H) rep(j,W){
    char c;
    cin >> c;
    if (c == '#'){
      que.push({i,j,0});
      vs[i][j] = 1;
    }
  }

  while(!que.empty()){
    int x = que.front().x,y = que.front().y,cnt = que.front().cnt; que.pop();
    ans = max(ans,cnt);
    rep(i,4){
      int nx = x + dx[i],ny = y + dy[i];
      if (nx < 0 || ny < 0 || nx >= H || ny >= W || vs[nx][ny]) continue;
      que.push({nx,ny,cnt+1});
      vs[nx][ny] = 1;
    }
  }
  cout << ans << endl;
  return 0;
}