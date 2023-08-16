#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
int a,b,c,d,s[100];
string name,mail,qian,jishi,ming;
char x;
int main(){
	cout<<"请输入姓名:";
	cin>>name;
	cout<<"请输入邮箱:";
	cin>>mail;
	cout<<"请输入个性签名:";
	cin>>qian;
	cout<<"好的"<<endl;
	while(true){
		cout<<"请输入命令，如果需要请输入help"<<endl;
		cin>>ming;
		if(ming=="help"){
			cout<<"输入jishi可以添加记事本内容，输入jishiz可以查看记事内容"<<endl;
			cout<<"输入zhishu可以开始判断质数"<<endl;
			cout<<"输入abs可以求一个数的绝对值"<<endl;
			cout<<"输入suan可以快速开启计算器"<<endl;
			cout<<"输入rand可以获取随机数"<<endl;
			cout<<"输入sort可以对一段数字进行排序"<<endl;
			cout<<"输入game可以开启猜数小游戏"<<endl; 
		}
		else if(ming=="jishi"){
			cout<<"请输入记事本内容:";
			cin>>jishi;
			cout<<"好了"<<endl;
		} 
		else if(ming=="jishiz"){
			cout<<"记事本内容:"<<jishi<<endl;
		}
		else if(ming=="zhishu"){
			cout<<"请输入需要判断的自然数"<<endl;
			cin>>a;
			if(a<=1){
				cout<<"这个数不是质数"<<endl;
				b=1;
			} 
			for(int i=2;i<a;i++){
					if(a%i==0){
						cout<<"这个数不是质数"<<endl;
						b=1; 
					}
			}
			if(b==0){
				cout<<"这个数是质数！"<<endl;
			}
		}
		else if(ming=="abs"){
			cout<<"请输入要判断绝对值的数:";
			cin>>c;
			d=abs(c);
			cout<<"绝对值:"<<d<<endl;
		}
		else if(ming=="suan"){
			cout<<"请输入两个自然数和一个运算符（*是乘号，/是除号，如：3 / 1)"<<endl;
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
				cout<<"结果:"<<a/b<<"......"<<a%b<<endl;
			}
			else{
				cout<<"符号错误或者除数不能为零"<<endl;
			}
		}
		else if(ming=="rand"){
			a=rand();
			cout<<"随机数:"<<a<<endl;
		}
		else if(ming=="sort"){
			cout<<"请输入排序数的个数:";
			cin>>b;
			cout<<"请输入排序的数（如：2 6 7）"<<endl;
			for(int i=1;i<=b;i++){
				cin>>s[i];
			}
			sort(s+1,s+b+1);
			cout<<"排序结果：";
			for(int i=1;i<=b;i++){
				cout<<s[i]<<" ";
			}
			cout<<endl;
		}
		else if(ming=="game"){
			cout<<"欢迎来到猜数游戏"<<endl;
			cout<<"请输入数来猜（100以内）"<<endl;
			a=rand()%100;
			for(int i=1; ;i++){
				cin>>d;
				if(d>a){
					cout<<"大了"<<endl;
				}
				if(d<a){
					cout<<"小了"<<endl;
				}
				if(d==a){
					cout<<"恭喜你，答对了！！！"<<endl;
					break;
				}
			}
		}
		else{
			cout<<"未知命令"<<endl;
		}
	}
}
