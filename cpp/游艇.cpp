#include<bits/stdc++.h>
using namespace std;
/*ԭ���⣺��վ��1��վ��n���������
��״̬��dp[i]--վ��1��վ��i���������
վ��1��ĳ��վ��j��ת������վ��jȥ��j�õ�
dp[i]=min(������ת���ܵ��������)+�������
     =for(j:2~i-1)min(dp[i],dp[j]+a[i][j])
*/ 
int a[205][205];
int dp[205];
int n;
int main(){
    cin>>n;
    for(int i=1;i<=n-1;i++){
        for(int j=i+1;j<=n;j++){//��i����j�����
            cin>>a[i][j];
        }
    }for(int i=1;i<=n;i++){
    	dp[i]=a[1][i];
	}for(int i=2;i<=n;i++){
		for(int j=2;j<=i-1;j++){
			dp[i]=min(dp[i],dp[j]+a[j][i]);
		}
	}cout<<dp[n];
    return 0;
}
