#include<bits/stdc++.h>
using namespace std;
//ԭ���⣺   N+1�����У�M���ڴﵽ����Сƣ�Ͷ�
//��״̬��dp[i][j]��i�����У�j���ڵ������Сƣ�Ͷ�
//״̬ת�Ʒ��̣�dp[i][j] = min(��Ϣ������Ϣ)
//dp[i][j] = min(dp[i][j-1]��dp[i-1][j-1] +  a[i]*b[j])
//
//��ʼ��1��dp[i][j] ��ʼ�����
//��ʼ��2��
//��0���г���
//dp[0][1] = 0
//dp[0][2] = 0

int a[1005],b[1005];
int dp[1005][1005]; 
int n,m;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=m;i++) cin>>b[i];
	memset(dp,0x3f,sizeof(dp));
	for(int i=0;i<=m;i++) dp[0][i] = 0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			dp[i][j] = min(dp[i][j-1],dp[i-1][j-1] +  a[i]*b[j]);
		}
	}
	cout<<dp[n][m];
	return 0;
}

