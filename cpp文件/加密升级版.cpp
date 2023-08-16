#include <iostream>
using namespace std;
string n,a,v; 
int s,q;
int main(){
	while(true){
	cout<<"欢迎来到质子加密，请说出你要干什么？1.注册(只能有一个账号) 2.登陆 3.退出（不会保留任何账号信息）"<<endl;
	cin>>s;
	if(s==1){
		cout<<"请输入账号名:";
		cin>>n;
		cout<<endl<<"请输入密码：";
		cin>>a;
		cout<<"账号注册完成"<<endl; 
	}
	else if(s==2){
		cout<<"请输入验证码 2+72"<<endl;
		int r;
		cin>>r;
		if(r==74){
			cout<<"恭喜成功！"<<endl;
			cout<<"请输入用户名"<<endl;
			cin>>v;
			if(v==n){
				cout<<"请输入密码"<<endl;
				cin>>v;
				if(v==a){
					cout<<"正确，欢迎进入！"<<endl;
					for(int i=1; ;i++){
						cout<<"hi，请输入你要干什么 1.加密 2.解密 3.退出登陆 4.版权声明"<<endl;
						cin>>q;
						if(q==1){
							cout<<"请输入要加密的英文或者不带音标的拼音:";
							cin>>v;
							for(int j=1;j<=v.length();j++){
								v[j]=v[j]+2;
							}
							cout<<"加密的文字："<<v<<endl;
						}
						else if(q==2){
							cout<<"请输入在本软件加密过的文字：";
							cin>>v;
							for(int j=1;j<=v.length();j++){
								v[j]=v[j]-2;
							}
							cout<<"解密后的文字："<<v<<endl;
						}
						else if(q==3){
							cout<<"好的"<<endl;
							break;
						}
						else if(q==4){
							cout<<"本软件作者质子，请勿将其直接搬运来用于商业用途"<<endl;
						}
						else{
							cout<<"错误！"<<endl;
						}
					} 
				}
				else{
					cout<<"密码错误！"<<endl;
				}
			}
			else{
				cout<<"用户名错误！"<<endl;
			}
		}
		else{
			cout<<"验证码错误，您有可能是机器人！"<<endl;
		}
	}
	else{
		cout<<"再见！"<<endl;
		return 0;
	}
	}
}
