/*
�����������ܳɼ���һ�룬ѧ��������һ��
��Ʒ��ѧ��
��Ʒ��������ѧ���ķ���
��Ʒ�ļ�ֵ��ѧ���ķ���
01���� 
1.��״̬:i��ѧ�����Ƿ��ܴ�k��(k:�ܷ�һ��~1�ĵ���仯)
dp[j][k]=dp[j][k]|dp[j-1][j-a[i]];*/
#include<bits/stdc++.h>
using namespace std;
int dp[105][10005];
int n;
int a[105];
int sum;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}sum/=2;//��������
	dp[0][0]=1;
	for(int i=1;i<=n;i++){
		for(int j=i;j>=1;j--){//i������ѡj�� 
			for(int k=sum;k>=a[i];k--){
				dp[j][k]=dp[j][k]|dp[j-1][j-a[i]];
			}
		} 
	}for(int i=sum;i>=1;i--){
		if(dp[n/2][i]==1){
			cout<<i;
			return 0;
		}
	}
	return 0;
}

