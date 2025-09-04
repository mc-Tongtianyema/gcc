#include<bits/stdc++.h>
using namespace std;
int top,a[15];
int main(){
	stack<int> s;
	int n,x;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		s.push(x);
	}for(int i=1;i<=n;i++){
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}
