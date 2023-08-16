#include <iostream>
#include <cstdlib>
using namespace std;
string a,s;
int t,f,n,r;
char x;
int main(){
	cout<<"请输入你的用户名："<<endl;
	cin>>a;
	cout<<"请输入密码（如果是访客输入10）"<<endl;
	cin>>s;
	if(s=="NIHAO"||s=="ZHIZI"){
		cout<<"欢迎开发者来到这里！"<<endl;
	}
	else{
		cout<<"访客你好！"<<endl;
	}
	cout<<"欢迎来到温暖的通讯系统"<<endl;
	while(1==1){
		r=rand()%100;
		cout<<"请输入你要干什么 1.开发者信息 2.加密信息 3.解密信息 4.发出信息 5.安全退出 6.生成随机数"<<endl;
		cin>>n;
		if(n==2){
			cout<<"请输入要加密的信息"<<endl;
			cin>>a;
			for(int i=1;i<=a.length();i++){
				a[i]=a[i]-2; 
			}
			cout<<"加密后的信息"<<a<<endl;
		}
		else if(n==3){
			cout<<"请输入要解密的信息"<<endl;
			cin>>a;
			for(int i=1;i<=a.length();i++){
				a[i]=a[i]+2;
			}
			cout<<"解密后的信息："<<a<<endl; 
		}
		else if(n==4){
			cout<<"请去hack.chat/?stc"<<endl; 
		}
		else if(n==1){
			cout<<"开发者：质子"<<endl;
			cout<<"版本：1.0"<<endl;
			cout<<"负责机器人：zhizi_bot"<<endl; 
		}
		else if(n==5){
			cout<<"是否要退出？ 1.是 2.否"<<endl;
			int sdf;
			cin>>sdf;
			if(sdf==1){
				return 0;
			}
			else{
				cout<<"好的，不会退出哦"<<endl;
			}
		}
		else{
			cout<<"随机数:"<<r<<endl; 
		}
	}
} 
