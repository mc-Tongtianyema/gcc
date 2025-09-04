#include<bits/stdc++.h>
using namespace std;
//排队问题 
//思路： 将所有人入队，然后模拟报数过程即可
queue<int> q; //存人
int n; //n个人
int a[105]; //存储输入的编号 
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		q.push(a[i]); 
	}
	//模拟报数过程
	while(!q.empty()){   //1628    6000
		//1.报数1：输出+出队
		cout<<q.front()<<" "; 
		q.pop(); 
		//2.报数2：入队+出队
		q.push(q.front());
		q.pop();	
	} 

	return 0;
}

