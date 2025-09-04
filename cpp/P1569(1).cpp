#include<bits/stdc++.h>
using namespace std;
//原问题: n头奶牛能最多几组
//定状态：dp[i] :  以第i头牛结尾时的最大组数dp[i];
//    s[i] :       以第i头牛结尾时的理智和s[i];(前缀和) 
//1. 初始化： 看每个元素的前缀和，>=0，则1， 否则0
//2. 状态转移方程： 对于第i个元素，依次遍历1~i-1个元素，将整个序列分成
// 2部分求解，前一部分已知为dp[i],那么只需看后一部分的元素和是否>=0
//后一部分元素和： s[i]-s[j] 
//if(s[i]-s[j]>=0) dp[i] = max(dp[i],dp[j]+1);

//最终答案： dp[n] 
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
		//求dp[i]
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

