#include<bits/stdc++.h>
using namespace std;
int q,w;
int n,m;
int flag=0;
int fx[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
int a[150][150];
int vis[150][150];
void dfs(int x,int y){
	if(x==q&&y==w){
		flag=1;
		return;
	}
    for(int i=0;i<8;i++){
		int xx=x+fx[i][0];
		int yy=y+fx[i][1];
		if(xx>=1&&xx<=n&&yy>=1&&yy<=m&&vis[xx][yy]==0&&a[xx][yy]!=1){
			vis[xx][yy]=1;
			dfs(xx,yy);
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
    cin>>q>>w;
	if(a[1][1]==1||a[q][w]==1){
		cout<<"NO";
		return 0;
	}
    vis[1][1]=1;
	dfs(1,1);
	if(flag==1)cout<<"YES";
	else cout<<"NO";
	return 0;
}
