#include<bits/stdc++.h>
using namespace std;
/*原问题：求站点1到站点n的最少租金
定状态：dp[i]--站点1到站点i的最少租金
站点1到某个站点j中转，再由站点j去到j得到
dp[i]=min(所有中转可能的最少租金)+后半段租金
     =for(j:2~i-1)min(dp[i],dp[j]+a[i][j])
*/ 
int a[205][205];
int dp[205];
int n;
int main(){
    cin>>n;
    for(int i=1;i<=n-1;i++){
        for(int j=i+1;j<=n;j++){//点i到点j的租金
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
