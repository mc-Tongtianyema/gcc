#include<bits/stdc++.h>
/*����
ԭ���⣺N�����裬M������������������
��״̬��dp[i][j]--��i�����j������������
״̬���̣�dp[i][j]=min(ͬ�����ǰ��,�������ǰ��)+a[i][j] 
*/
using namespace std;
int a[2005][2005];//3*10^7
int dp[2005][2005];
int n,m;
int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }for(int j=1;j<=n;j++){
        for(int i=1;i<=m;i++){
            dp[i][j]=min(dp[i][j-1],dp[i-1][j-1])+a[i][j];
        }dp[0][j]=dp[m][j];
    }//�������һ�У��������� 
	int mn=0x3f3f3f3f;//2147483647
    for(int i=1;i<=m;i++){
        mn=min(mn,dp[i][n]);
    }cout<<mn;
    return 0;
}
