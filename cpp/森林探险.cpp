#include<bits/stdc++.h>
using namespace std;
struct node{
	int x,y;
}; 
queue<node> q;
int w,h; //w�У�h��
int fx[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
int vis[25][25];
char a[25][25];
int cnt; //ͳ���ѵ���ʯͷ 
int sx,sy;
void bfs(){
	//1.�������
	vis[sx][sy] = 1;
	q.push({sx,sy});
	cnt++;
	//2. ����
	while(!q.empty()){
		//3. ��ȡ�����㣬���ŷ���һ����ɢ 
		node t = q.front();
		q.pop(); 
		for(int i=0;i<4;i++){
			int xx = t.x + fx[i][0];
			int yy = t.y + fx[i][1];
			if(xx>=1&&xx<=h&&yy>=1&&yy<=w&&a[xx][yy]!='#'&&vis[xx][yy]==0){
				vis[xx][yy]=1;
				q.push({xx,yy});
				cnt++;
			}
		}
	} 
}
int main(){
	while(cin>>w>>h){
		if(w==0 && h==0) break;
		for(int i=1;i<=h;i++){
			for(int j=1;j<=w;j++){
				cin>>a[i][j];
				if(a[i][j] == '@'){
					sx = i;
					sy = j;
				}
			}
		}
		cnt = 0;
		memset(vis,0,sizeof(vis)); 
		//����
		bfs();
		cout<<cnt<<endl;	
	} 
	return 0;
}

