#include<bits/stdc++.h>
using namespace std;
struct node{
	int x,y,step;
};
queue<node>q;
char a[105][105];
int n;
int fx[8][2]={{0,1},{1,0},{0,-1},{-1,0},{1,1},{1,-1},{-1,1},{-1,-1}};
int f;
int vis[105][105];
int ex,ey;
int ans;
void bfs(){
	q.push({1,1,0});
	vis[1][1]=1;
	while(!q.empty()){
		node t=q.front();
		q.pop();
		if(t.x==ex&&t.y==ey){
			ans=t.step;
			f=1;
			break;
		}for(int i=0;i<8;i++){
			int xx=t.x+fx[i][0];
			int yy=t.y+fx[i][1];
			if(xx>=1&&xx<=n&&yy>=1&&yy<=n&&vis[xx][yy]==0&&a[xx][yy]!='*'){
				vis[xx][yy]=1;
				q.push({xx,yy,t.step});
			}
		}
	}
}
int main(){
	
	return 0;
}
