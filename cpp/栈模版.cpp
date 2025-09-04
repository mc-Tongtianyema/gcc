#include<bits/stdc++.h>
using namespace std;
/*
1.头文件：#include<stack>
2.创建栈：stack<类型> s;
3.入栈：s.push(元素);无返回值
4.出栈：s.pop();无返回值
5.获取栈顶元素：变量=s.top();返回栈顶元素
6.判断栈空：变量=s.empty()返回1为空，0不空
7.栈长度：变量=s.size()返回长度
8.栈清空：s.clear();
*/
int a[6],top;//定义栈
void push(int x){//入栈函数
	if(top<5){
		a[++top]=x;
	}return;
}void pop(){//出栈函数
	if(top>0){
		top--;
	}return;
}int getTop(){//显示栈顶元素
	return a[top];
}void clear(){//清空栈
	top=0;
	return;
}
int main(){
	int x;
	for(int i=1;i<=5;i++){
		cin>>x;
		push(x);
	}for(int i=1;i<=3;i++){
		cout<<getTop()<<" ";
		pop();
	}cout<<endl<<getTop();
	return 0;
}
