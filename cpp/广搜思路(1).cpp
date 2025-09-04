#include<bits/stdc++.h>
using namespace std;
struct node{
	int x,y; //点的信息 
}; 
queue<node> q; //搜到的每个点 
char a[105][105]; //地图 
int n,m; //地图大小  
int fx[4][2] = {{0,1},{1,0},{0,-1},{-1,0}}; //方向数组
int f; // 标记是否找到宝藏
int vis[105][105]; //标记数组

void bfs(){ //广搜函数 
	//1.处理起点 
	q.push({1,1});
	vis[1][1] = 1; 
	//2.开始广搜
	while(!q.empty()){
		//3.拿出队首，作为起点。一步扩散，搜到的入队
		node t = q.front(); 
		q.pop();
		//特判终点
		if(a[t.x][t.y]=='*'){
			f = 1; 
			break;
		} 
		for(int i=0;i<4;i++){ //列举方向 
			int xx = t.x + fx[i][0]; //计算新点坐标 
			int yy = t.y + fx[i][1];
			if(xx>=1&&xx<=n&&yy>=1&&yy<=m&&vis[xx][yy]==0&&a[xx][yy]!='#'){
				vis[xx][yy]=1;
				q.push({xx,yy});
			}
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
	//特判
	if(a[1][1] == '#'){
		cout<<"NO";
		return 0; 
	} 
	bfs();  //开始广搜 
	//输出结果 
	if(f==1){
		cout<<"YES";
	}else{
		cout<<"NO";
	} 
	
	return 0;
}

