#include<bits/stdc++.h>
using namespace std;
//�����������ң�
//��ͼ: 1���ߣ�0������
//��С: n*m
//Ŀ��: 1,1���ܷ񵽴�n,m��
//����: �����յ�û�и�֪���������ϰ���

int n,m; //��ʾ��ͼ��С
int fx[4][2]= {{0,1},{1,0},{-1,0},{0,-1}}; //��������
int a[105][105]; //��ͼ
int vis[105][105]; //�������
int flag; //����Ƿ񵽴��յ�

void dfs(int x,int y) { //�Ե�ǰλ��x,y�������һ������
	if(xn&&ym) { //�յ��ж�
		flag=1;
		return;
	}
//��ǰ�����յ㣬��������
	for(int i=0; i<4; i++) {
		int xx = x+fx[i][0]; //�����·���λ��
		int yy = y+fx[i][1];
// �Ϸ��ж�(���ߡ�û�߹�����ͼ��)
		if(xx>=0&&xx<=n-1&&yy>=0&&yy<=m-1&&vis[xx][yy]==0&&a[xx][yy]==1) {
			vis[xx][yy]=1;
			dfs(xx,yy);
		}

	}
}

int main() {
	cin>>n>>m;
	for(int i=0; i<n; i++) { //��ͼ����
		for(int j=0; j<m; j++) {
			cin>>a[i][j];
		}
	}
//����
	if(a[1][1]==0 || a[n][m] == 0) {
		cout<<��NO��;
		return 0;
	}
//��㴦��
	vis[1][1] = 1;
	dfs(1,1);
	if(flag1) cout<<��YES��;
	else cout<<��NO��;

	return 0;
}
