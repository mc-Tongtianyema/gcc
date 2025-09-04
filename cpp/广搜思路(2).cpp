#include<bits/stdc++.h>
using namespace std;
//广搜模板：
//在一个n*m的地图中，找宝藏，方向上下左右
//0能走，1不能走，2为宝藏 
struct node{
	int x,y; //每个点的信息 
}; 
queue<node> q; //存储所有搜到的点
void bfs(){
	//1.起点入队+处理起点
	q.push({sx,sy});
	//标记起点、起点特判 
	//2.开始广搜
	while(!q.empty()){
		//3. 确定出发点
		node t = q.front();
		q.pop();
		//4. 按照方向一步搜索、搜到的点入队
		for(列举方向){
			if(合法判断){
				标记
				入队 
			}
		} 
	} 
	 
} 

int main(){


	return 0;
}

