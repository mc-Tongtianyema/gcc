#include<bits/stdc++.h>
using namespace std;
//ԭ����: nͷ��ţ����༸��
//��״̬��dp[i] :  �Ե�iͷţ��βʱ���������dp[i];
//    s[i] :       �Ե�iͷţ��βʱ�����Ǻ�s[i];(ǰ׺��) 
//1. ��ʼ���� ��ÿ��Ԫ�ص�ǰ׺�ͣ�>=0����1�� ����0
//2. ״̬ת�Ʒ��̣� ���ڵ�i��Ԫ�أ����α���1~i-1��Ԫ�أ����������зֳ�
// 2������⣬ǰһ������֪Ϊdp[i],��ôֻ�迴��һ���ֵ�Ԫ�غ��Ƿ�>=0
//��һ����Ԫ�غͣ� s[i]-s[j] 
//if(s[i]-s[j]>=0) dp[i] = max(dp[i],dp[j]+1);

//���մ𰸣� dp[n] 
int a[1005],s[1005]; 
int dp[1005]; 
int n;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[i] = s[i-1]+a[i];
		if(s[i]>=0) dp[i] = 1;
	}
	for(int i=1;i<=n;i++){
		//��dp[i]
		for(int j=1;j<=i-1;j++){
			if(s[i]-s[j]>=0&&s[i]>=0){
				dp[i] = max(dp[i],dp[j]+1);
			}
		} 
	}
	if(dp[n]>0) cout<<dp[n];
	else cout<<"Impossible";



	return 0;
}

