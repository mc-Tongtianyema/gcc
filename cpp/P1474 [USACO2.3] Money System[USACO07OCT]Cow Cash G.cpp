/*
��ȫ����--����
��Ʒ������
����������Ҫ�յĽ��N
��Ʒ��������ÿ�ֻ��ҵ����
ԭ���⣺V�ֻ��Ҵչ�nԪ�ķ�����
1.��״̬��dp[j]:i�ֻ��ң��չ�jԪ�ķ�����
2.���ߣ�2��ѡ���õ�i�����Ҵ�jԪ�����õ�i�����Ҵ�jԪ
״̬ת�Ʒ��̣�dp[j]=dp[j]+dp[j-v[i]];
���ڷ��������⣬һ����ʼ��:dp[0]=1; 
*/
#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[35];
long long dp[10005];
int main(){
	dp[0]=1; 
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=m;i++){
		for(int j=a[i];j<=n;j++){
			dp[j]=dp[j]+dp[j-a[i]];
		}
	}cout<<dp[n];
	return 0;
}

