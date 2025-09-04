#include<bits/stdc++.h>
using namespace std;
queue<char> q; //存人
string s;
int main(){
	cin>>s;
	for(int i=0;i<s.size();i++){
		q.push(s[i]); 
	}
	//模拟报数过程
	while(!q.empty()){   //1628    6000
		//1.报数1：输出+出队
		cout<<q.front(); 
		q.pop(); 
		//2.报数2：入队+出队
		q.push(q.front());
		q.pop();	
	} 

	return 0;
}

