#include <iostream>
#include <cstdlib>
using namespace std;
int a,b,c,d,as,r;
int n;
string name,str,mail;
char x;
int fenshu(int t,int f){
	for(int i=1; ;i++){
		if(t==f){
			return f;
		}
		else{
			if(t>f){
				for(int j=1;j<f;j++){
					if(t%i==0&&f%i==0){
						t=i;
						f=i;
						return i;
					}
				}
			}
			if(t<f){
				for(int j=1;j<t;i++){
					if(t%i==0&&f%i==0){
						f=i;
						t=i;
						return i;
					}
				}
			}
		}
	} 
}
int main(){
	cout<<"你好啊，我是晴天，请问您叫？"<<endl;
	cin>>name;
	cout<<"需要邮箱才可以，如果想要匿名请输入123456@qq.com"<<endl;
	cin>>mail;
	cout<<"欢迎啊！"<<endl;
	while(1==1){
		cout<<"请输入你要干什么？ 1.计算 2.分数计算 3.获取一个随机数 4.每日一言 5.记事本 6.查看自己的记事本 7.版本信息 8.退出 9.随机颜文字"<<endl;
		cin>>n;
		if(n==1){
			cout<<"请输入数字和运算符（乘号是*，除号是/，如：1+1）"<<endl;
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
				cout<<"结果:"<<a/b<<endl; 
			}
			else{
				cout<<"除数不能是0或者符号错误了！"<<endl; 
			}
		}
		else if(n==2){
			cout<<"目前仅支持加法减法，请输入+还是-"<<endl;
			cin>>x;
			if(x=='+'){
				cout<<"请输入第一个数的分母:";
				cin>>a;
				cout<<"请输入第一个数的分子:";
				cin>>b;
				cout<<"请输入第二个数的分母:";
				cin>>c;
				cout<<"请输入第二个数的分子:";
				cin>>d;
				while(1==1){
				if(a==c){
				cout<<"结果:"<<a<<"分之"<<b+d<<endl; 
				break;
				}
				else{
					as=fenshu(a,c);
					b=as*b;
					d=as*d;
					cout<<"结果:"<<a<<"分之"<<b+d<<endl; 
				}
				}
			}
			else{
				cout<<"目前减法仅支持同分母(因为质子懒)"<<endl;
				cout<<"请输入分母"<<endl;
				cin>>a;
				cout<<"请输入第一个分子："<<endl;
				cin>>b;
				cout<<"请输入第二个分子"<<endl;
				cin>>c;
				cout<<"结果："<<a<<"分之"<<b-c<<endl; 
			}
		}
		else if(n==3){
			r=rand();
			cout<<"随机数:"<<r<<endl; 
		}
		else if(n==4){
			r=rand()%2;
			if(r==0){
				cout<<"逆水行舟，不进则退"<<endl;
			} 
			else{
				cout<<"前进前进，不择手段的前进！"<<endl;
			}
		}
		else if(n==5){
			cout<<"请输入记事本内容"<<endl;
			cin>>str;
			cout<<"ok"<<endl;
		}
		else if(n==6){
			cout<<"记事本内容:"<<str<<endl;
		}
		else if(n==7){
			cout<<"版本信息:"<<endl;
			cout<<"作者:"<<"质子"<<endl;
			cout<<"版本：1.0"<<endl; 
		}
		else if(n==8){
			cout<<"感谢使用"<<endl;
			return 0;
		}
		else if(n==9){
			r=rand()%2;
			if(r==0){
				cout<<"(*_*)"<<endl; 
			}
			else if(r==1){
				cout<<"（&——0）"<<endl;
			}
			else{
				cout<<"AWA"<<endl;
			}
		}
	} 
}
