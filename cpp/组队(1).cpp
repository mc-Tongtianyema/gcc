#include<bits/stdc++.h>
using namespace std;
//�����������ܳɼ���һ�룬ѧ��������һ��
//��Ʒ�� ѧ��
//��Ʒ�������� ѧ���ķ���
//��Ʒ�ļ�ֵ�� ѧ���ķ���
//01���� 
//dp[j][k]��i��ѧ����ѡ�˲�����j�����Ƿ��ܴ�k�� (k: �ܷ�һ��~1 �ĵ���仯) 
//dp[j][k] = dp[j][k] | dp[j-1][k-a[i]] 
int dp[105][10005];
int n;
int a[105];
int sum;
int main(){	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum +=a[i];
	} 
	sum/=2; //��������
	dp[0][0] = 1;
	for(int i=1;i<=n;i++){
		for(int j=i;j>=1;j--){ //i������ѡj�� 
			for(int k=sum;k>=a[i];k--){
				dp[j][k] = dp[j][k] | dp[j-1][k-a[i]];
			} 
		}
	} 
	for(int k=sum;k>=1;k--){
		if(dp[n/2][k]==1){
			cout<<k;
			return 0;
		}
	}	

	return 0;
}

