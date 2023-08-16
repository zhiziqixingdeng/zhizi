#include <iostream>
using namespace std;
int a,b;
string n,s;
int main(){
	cout<<"欢迎来到小汪聊天室，请输入你的名字";
	cin>>s; 
	cout<<endl<<"在线的用户：小汪，七星灯，天，波特"<<","<<s<<endl;
	for(int i=1; ;i++){
		cout<<"请输入你想说的话";
		cin>>n; 
		cout<<s<<"说了"<<n<<endl;
		if(n=="你好"||n=="大家好"||n=="hi"){
			cout<<"七星灯说了 哈，你好"<<endl;
		}
		if(n>="1"&&n<="9"){
			cout<<"天说了 说的不错"<<endl;
		}
		if(n>="1"&&n<="5"){
			cout<<"小汪提醒您太好了"<<endl; 
		}
		if(n>="a"&&n<="z"){
			cout<<"天说"<<" 你好呀，写的不错，继续加油"<<endl; 
		}
	} 
} 
