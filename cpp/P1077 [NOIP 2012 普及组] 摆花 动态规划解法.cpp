#include<bits/stdc++.h>
using namespace std;
/*
���ر���
��״̬��dp[j]:��i�ֻ�������j��ķ�����
״̬ת�Ʒ��̶��ڵ�i�ֻ�����i~a[i]�в�ͬ�����ķ���
���������������i�ֵķ���+�����i�ֵķ���������������
dp[j]=(dp[j]+dp[j-k])%1000007;
dp[0]=1; 
*/
int n,m;
int a[105],dp[105];//i�ֻ�������j��ķ����� 
int main(){
	cin>>n>>m;
    dp[0]=1;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){//01�����Ƶ� 
		for(int j=m;j>=1;j--){
			//Ҫ�Ž�ȥ������ȱ�������С 
			for(int k=1;k<=min(a[i],j);k++){
				dp[j]=(dp[j]+dp[j-k])%1000007;
			}
		}
	}cout<<dp[m];
	return 0;
}

