#include<bits/stdc++.h>
using namespace std;
stack<int>s;//站台C
int n,a[1005];
int t=1;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	//1.遍历出栈序列
	for(int i=1;i<=n;i++){
		//2.检测是否a[i]入栈
		while(t<=a[i]){
			//3.入栈并更新t
			s.push(t);
			t++;
		}//4.判断是否出栈
		if(s.top()==a[i])s.pop();
		else{
			cout<<"NO";
			return 0;
		}
	}cout<<"YES";
	return 0;
}
