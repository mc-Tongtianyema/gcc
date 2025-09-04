#include<bits/stdc++.h>
using namespace std;
char a[50][50];
int vis[50][50];
int n;
int q;
int sx,sy,ex,ey;
int flag;
int fx[4][2]={{-1,0},{0,-1},{1,0},{0,1}};
void dfs(int x,int y){
	if(x==ex && y==ey){
		flag = 1;
		return;
	}for(int i=0;i<4;i++){
		int xx = x+fx[i][0];
		int yy = y+fx[i][1];
		if(xx>=1&&xx<=n&&yy>=1&&yy<=n&&vis[xx][yy]==0&&a[xx][yy]=='.'){
			vis[xx][yy] = 1;
			dfs(xx,yy);
		} 
	}
} 
int main(){
	cin>>q;
	for(int k=1;k<=q;k++){
		cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}cin>>sx>>sy>>ex>>ey;
		flag=0;
		for (int i=1;i<=n;i++){
			for (int j=1;j<=n;j++){
				vis[i][j]=0;
			}
		}if(a[ex][ey]=='#'){
			cout<<"NO"<<endl;
			continue;
		}vis[sx][sy]=1;
		dfs(sx,sy);
		if(flag==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
