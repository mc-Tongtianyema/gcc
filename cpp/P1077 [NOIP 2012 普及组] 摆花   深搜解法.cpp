#include<bits/stdc++.h>
using namespace std;
//���ѣ�ö�����зŻ��ķ���
int n,m;
int a[105],dp[105][105];
int dfs(int x,int y){//��x�ֻ�,����y��ķ����� 
	if(y==m)return 1;
	if(x>n||y>m)return 0;//n�ֻ����� �� �����˳���m��  ������ 
	if(dp[x][y]!=0)return dp[x][y];
	int ans=0;//ͳ�Ƶ�ǰ���� 
	for(int i=0;i<=a[x];i++){//�оٷŵ�x�ֻ��������������� 
		ans=(ans+dfs(x+1,y+i))%1000007;
		dp[x][y]=ans;
	}return dp[x][y];
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	cout<<dfs(1,0);
	return 0;
}

