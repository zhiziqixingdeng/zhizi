#include <iostream>
#include <cstdlib> 
using namespace std;
int r,n,s;
int main(){
	for(int i=1; ;i++){
		cout<<"你好，我是sa，请问你要干什么 1.计算器 2.猜数游戏 3.数字炸弹 4.退出"<<endl;
	cin>>n;
	if(n==1){
		cout<<"请输入算式（乘号是*，除号是/)"<<endl;
		int a,b;
		char x;
		cin>>a>>x>>b;
		if(x=='+'){
			cout<<a+b<<endl;
		}
		else if(x=='-'){
			cout<<a-b<<endl;
		}
		else if(x=='*'){
			cout<<a*b<<endl;
		}
		else if(x=='/'&&b!=0){
			cout<<a/b<<"......"<<a%b<<endl;;
		}
		else{
			cout<<"除数不能是零或者运算符号错误"<<endl;
		}
	}
	else if(n==2){
		r=rand()%100;
		cout<<"欢迎来到系统自带的猜数游戏！uwu!"<<endl;
		cout<<"请输入数来猜数吧！"<<endl;
		int d;
		for(int i=1; ;i++){
			cin>>d;
			if(d>r){
				cout<<"大了"<<endl;
			}
			if(d<r){
				cout<<"小了"<<endl;
			}
			if(d==r){
				cout<<"恭喜你！猜对了！"<<endl;
				break;
			}
		}
	}
	if(n==3){
		int g;
		r=rand()%10;
		cout<<"欢迎来到数字炸弹！awa!(范围在10以内，有可以必胜的BUG哦！)"<<endl;
		for(int i=1; ;i++){
			cout<<"请你输入数字"<<endl;
			cin>>g;
			if(g==r){
				cout<<"你踩到了炸弹！"<<endl;
				break;
			}
			else{
				s=rand()%100;
				if(s==r){
					cout<<"我猜到了炸弹，我输了！"<<endl;
					break;
				}
				else{
					cout<<"很幸运，我们都没踩到炸弹"<<endl;
				}
			}
		}
	}
	if(n==4){
		cout<<"再见，欢迎再次使用sa系统！"<<endl;
		return 0;
	}
	}
}
