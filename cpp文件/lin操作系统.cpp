#include <iostream>
#include <cstdlib>
using namespace std;
int r,s,q,w;
string name,mail,str,id,qian,sss,asdf;
void chuli(string x){
	if(x.find("你好")!= std::string::npos||x.find("hi")!= std::string::npos||x.find("Hi")!= std::string::npos){
		cout<<"你好啊，我是聊天机器人"<<endl;
	}
	else if(x.find("怎么")!= std::string::npos||x.find("请问")!= std::string::npos||x.find("怎么办")!= std::string::npos||x.find("问")!= std::string::npos){
		r=rand()%2; 
		if(r==0){
			cout<<"应该是这样吧......"<<endl; 
		}
		if(r==2){
			cout<<"很难回答"<<endl;
		}
		if(r==1){
			cout<<"可能是这样的吧"<<endl;
		}
	}
	else if(x.find("啊")!= std::string::npos||x.find("吧")!= std::string::npos||x.find("6")!= std::string::npos||x.find("9")!= std::string::npos){
		r=rand()%2;
		if(r==0){
			cout<<"emmm"<<endl;
		}
		else{
			cout<<"阿哲"<<endl; 
		}
	}
	else{
		r=rand()%2;
		if(r==0){
			cout<<"我好像听不懂啊"<<endl;
		}
		else{
			cout<<"我不懂"<<endl;
		}
	}
}
int main(){
	cout<<"请输入用户名:";
	cin>>name;
	cout<<"请输入您的ID:";
	cin>>id;
	cout<<"欢迎"<<name<<endl;
	while(1==1){
		r=rand()%9;
		cout<<"请输入你要干什么？ 1.获取随机数字 2.随机纯数字邮箱 3.猜数游戏 4.第二剪贴板 5.提权 6.查看剪贴板"<<endl;
		if(q==1){
			cout<<"管理专用:7.更改ID 8.聊天机器人简单版 9.制作签名 10.查看签名"<<endl;
		}
		cin>>s;
		if(s==1){
			cout<<"随机数字:"<<r<<endl; 
		}
		if(s==2){
			cout<<"请输入@后面的:";
			cin>>mail;
			cout<<"随即邮箱:"; 
			for(int i=1;i<=14;i++){
				r=rand()%9;
				cout<<r;
			}
			cout<<"@"<<mail<<endl;
		}
		if(s==3){
			cout<<"输入数字来猜数!"<<endl;
			while(1==1){
				cout<<"请输入数字:";
				cin>>w;
				if(w>r){
					cout<<"大了"<<endl;
				}
				if(w<r){
					cout<<"小了"<<endl;
				}
				if(w==r){
					cout<<"恭喜你！猜对了！"<<endl;
				}
			}
		}
		if(s==4){
			cout<<"请输入内容"<<endl;
			cin>>str;
			cout<<"好了！"<<endl;
		}
		if(s==5){
			cout<<"请输入提权密码:";
			cin>>sss;
			if(sss=="/sudo-awa-qwq"){
				cout<<"提权成功！"<<endl;
				q=1;
				
			} 
		}
		if(s==6){
			cout<<"剪贴板:"<<str<<endl;
		}
		if(s==7&&q==1){
			cout<<"请输入新的id"<<endl;
			cin>>id;
			cout<<"更改成功!"<<endl; 
		}
		if(s==7&&q==0){
			cout<<"权限不足"<<endl; 
		}
		if(s==8&&q==1){
			cout<<"聊天机器人:你好"<<endl;
			for(int i=1;i<=10;i++){
				cout<<"你:";
				cin>>asdf;
				cout<<"机器人:"; 
				chuli(asdf);
			}
			cout<<"机器人:再见喽！"<<endl;
		}
		if(s==8&&q==0){
		cout<<"权限不足"<<endl; 
		}
		if(s==9&&q==1){
			cout<<"请输入签名:";
			cin>>qian;
			cout<<"好了"<<endl; 
		}
		if(s==9&&q==0){
			cout<<"权限不足"<<endl; 
		}
		if(s==10&&q==1){
			cout<<"你的签名:"<<qian<<endl; 
		}
			if(s==10&&q==0){
			cout<<"权限不足"<<endl; 
		}
	}
} 
