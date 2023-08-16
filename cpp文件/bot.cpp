#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;
int a,b,c,d,q,w,s;
double t,f;
char x;
string name,mail,str,mima;
int main(){
	cout<<"请输入你的姓名:";
	cin>>name;
	cout<<"请输入你的邮箱:";
	cin>>mail;
	while(1==1){
		cout<<"请输入你要干什么 1.计算 2.小游戏 3.个人信息 4.数据库（需要提权） 5.记事本 6.退出"<<endl;
		cin>>q;
		if(q==1){
			cout<<"请输入你要干什么 1.整数计算 2.分数计算 3.小数计算"<<endl;
			cin>>w;
			if(w==1){
				cout<<"请输入要计算的算式(乘号是*,除号是/,如:7*4)"<<endl;
				cin>>a>>x>>b;
				if(x=='+'){
					cout<<"结果:"<<a+b<<endl;
				}
				else if(x=='-'){
					cout<<"结果:"<<a-b<<endl;
				}
				else if(x=='*'){
					cout<<"结果:"<<a*b<<endl;
				}
				else if(x=='/'&&b!=0){
					cout<<"结果:"<<a/b<<"。。。。。。。"<<a%b<<endl;
				}
				else{
					cout<<"错误"<<endl;
				}
			}
			else if(w==2){
				cout<<"请输入第一个数字的分母:"<<endl;
				cin>>a;
				cout<<"请输入第一个数字的分子:"<<endl;
				cin>>b;
				cout<<"请输入第二个数字的分母:"<<endl;
				cin>>c;
				cout<<"请输入第二个数字的分子:"<<endl;
				cin>>d;
				cout<<"请输入运算符号（乘号是*，除号是/)"<<endl;
				cin>>x;
				if(x=='+'){
					if(a==c){
						cout<<"结果:"<<a<<"/"<<b+d<<endl;
					}
					else{
						cout<<"结果:"<<a*c<<"/"<<b*c-d*a<<endl; 
					}
				}
				else if(x=='-'){
					if(a==c){
						cout<<"结果:"<<a<<"/"<<b-d<<endl;
					}
					else{
						cout<<"结果:"<<a*c<<"/"<<b*c-a*d<<endl; 
					}
				}
				else if(x=='*'){
					cout<<"结果:"<<a*c<<"/"<<b*d<<endl;
				}
				else if(x=='/'){
					cout<<"结果:"<<a*d<<"/"<<b*c<<endl;
				}
				else{
					cout<<"错误"<<endl;
				}
			}
			else if(w==3){
				cout<<"请输入算式(*是乘号,/是除号,如:5.0-2.3)"<<endl;
				cin>>t>>x>>f;
				if(x=='+'){
					cout<<"结果:"<<t+f<<endl;
				}
				else if(x=='-'){
					cout<<"结果:"<<t-f<<endl;
				}
				else if(x=='*'){
					cout<<"结果:"<<t*f<<endl;
				}
				else if(x=='/'&&f!=0){
					cout<<"结果:"<<t/f<<endl;
				}
				else{
					cout<<"错误"<<endl;
				}
			}
			
		}
		else if(q==2){
		cout<<"请输入你要玩什么小游戏 1.石头剪刀布 2.猜数游戏 3.口算大师 4.文字小游戏"<<endl;
		cin>>w;
		if(w==1){
			d=rand()%2;
			cout<<"请输入你要出什么 1.石头 2.剪刀 3.布"<<endl;
			cin>>a;
			if(d==0){
				cout<<"你输了"<<endl;
			} 
			if(d==1){
				cout<<"你赢了"<<endl;
			}
			if(d==2){
				cout<<"平局"<<endl;
			}
		}
		else if(w==2){
			c=rand()%100;
			cout<<"欢迎来到猜数游戏"<<endl;
			while(true){
				cout<<"请输入你要猜的数字:";
				cin>>a;
				if(a>c){
					cout<<"大了"<<endl; 
				}
				else if(a<c){
					cout<<"小了"<<endl;
				}
				else{
					cout<<"恭喜你，猜对了!"<<endl;
					break;
				}
			}
		}
		else if(w==3){
			cout<<"请输入你要练习几道口算"<<endl;
			cin>>a;
			for(int i=1;i<=a;i++){
				b=rand()%100;
				c=rand()%100;
				d=rand()%1;
				if(d==0){
					cout<<b<<"+"<<c<<"=？";
					cin>>s;
					if(s==b+c){
						cout<<"正确"<<endl;
					}
				}
			}
		}
	}
	else if(q==3){
		cout<<"姓名:"<<name<<endl;
		cout<<"邮箱:"<<mail<<endl;
	}
	else if(q==4){
		cout<<"请输入密码才能解锁数据库:";
		cin>>mima;
		if(mima=="shukudfs"){
			cout<<"欢迎!"<<endl;
			cout<<"请输入要查找的内容 1.存储地址 2.bot版本"<<endl;
			cin>>w;
			if(w==1){
				cout<<"name的存储地址为:"<<&name<<endl;
				cout<<"mail的储存地址为:"<<&mail<<endl;
				cout<<"记事本的存储地址:"<<&str<<endl;
			}
			else if(w==2){
				cout<<"bot版本:"<<"1.0"<<endl; 
			}
		}
		else{
			cout<<"密码错误，权限不足!"<<endl;
		}
	}
	else if(q==5){
		cout<<"请输入你要干什么 1.记事 2.查看"<<endl;
		cin>>w;
		if(w==1){
			cout<<"请输入记事本内容:";
			cin>>str;
			cout<<"Ok"<<endl;
		}
		else{
			cout<<"记事本内容:"<<str<<endl;
		}
	}
	else if(q==6){
		cout<<"再见喽"<<endl;
		return 0;
	}
	else{
		cout<<":/好像没有这个命令"<<endl;
	}
	}
}
