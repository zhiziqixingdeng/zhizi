#include <iostream>
using namespace std;
int a,b,c,d;
double t,f;
int n;
char x;
int main(){
	while(true){
		cout<<"欢迎来到计算器，请输入你要什么类型的计算 1.整数计算 2.分数计算 3.小数计算 4.百分比 5.退出 "<<endl;
		cin>>n;
		if(n==1){
			cout<<"请输入数字和符号（*是乘，/是除，如:5 * 1)"<<endl;
			cin>>a>>x>>b;
			if(x=='+'){
				cout<<"结果："<<a+b<<endl;
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
				cout<<"错误"<<endl;
			}
		}
		else if(n==2){
			cout<<"请输入第一个数的分母"<<endl;
			cin>>a;
			cout<<"请输入第一个数的分子"<<endl;
			cin>>b;
			cout<<"请输入第二个数的分母"<<endl;
			cin>>c;
			cout<<"请输入第二个数的分子"<<endl;
			cin>>d;
			cout<<"请输入运算符号(*是乘，/是除)"<<endl;
			cin>>x;
			if(x=='+'){
				if(a==c){
					cout<<"结果"<<a<<"/"<<b+d<<endl; 
				}
				else{
					cout<<"结果:"<<a*c<<"/"<<b*c+d*a<<endl; 
				}
			}
			else if(x=='-'){
				if(a==c){
					cout<<"结果"<<a<<"/"<<b-d<<endl; 
				}
				else{
					cout<<"结果:"<<a*c<<"/"<<b*c-d*a<<endl; 
				}
			}
			else if(x=='*'){
				cout<<"结果:"<<a*c<<"/"<<b*d<<endl;
			}
			else if(x=='/'){
				cout<<"结果:"<<a*d<<"/"<<b*c;
			}
			else{
				cout<<"错误"<<endl;
			}
		}
		else if(n==3){
			cout<<"请输入数字和符号（*是乘，/是除，如:5.0 * 1.5)"<<endl;
			cin>>t>>x>>f;
			if(x=='+'){
				cout<<"结果："<<t+f<<endl;
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
		else if(n==5){
			cout<<"确定要退出吗？ 1.退出 2.不退出"<<endl;
			cin>>d;
			if(d==1){
				return 0;
			}
			else{
				cout<<"未能退出"<<endl;
			}
		}
		else if(n==4){
			cout<<"请输入百分比数"<<endl;
			cin>>a;
			cout<<"请输入要百分之几"<<endl;
			cin>>b;
			c=a/100*b;
			cout<<"结果:"<<c<<endl;
		}
	} 
}
