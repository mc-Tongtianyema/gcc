#include<bits/stdc++.h>
using namespace std;
//方向：上下左右；
//地图: 1能走，0不能走
//大小: n*m
//目标: 1,1点能否到达n,m点
//特殊: 起点和终点没有告知，不会是障碍物

int n,m; //表示地图大小
int fx[4][2]= {{0,1},{1,0},{-1,0},{0,-1}}; //方向数组
int a[105][105]; //地图
int vis[105][105]; //标记数组
int flag; //标记是否到达终点

void dfs(int x,int y) { //以当前位置x,y，检测下一步搜索
	if(xn&&ym) { //终点判断
		flag=1;
		return;
	}
//当前不是终点，继续搜索
	for(int i=0; i<4; i++) {
		int xx = x+fx[i][0]; //计算新方向位置
		int yy = y+fx[i][1];
// 合法判断(能走、没走过、地图内)
		if(xx>=0&&xx<=n-1&&yy>=0&&yy<=m-1&&vis[xx][yy]==0&&a[xx][yy]==1) {
			vis[xx][yy]=1;
			dfs(xx,yy);
		}

	}
}

int main() {
	cin>>n>>m;
	for(int i=0; i<n; i++) { //地图输入
		for(int j=0; j<m; j++) {
			cin>>a[i][j];
		}
	}
//特判
	if(a[1][1]==0 || a[n][m] == 0) {
		cout<<“NO”;
		return 0;
	}
//起点处理
	vis[1][1] = 1;
	dfs(1,1);
	if(flag1) cout<<“YES”;
	else cout<<“NO”;

	return 0;
}
