
#include <iostream>
#include <cstdlib>
using namespace std;
string n,a;
int s,d,cnt,ses,t,f,g,h;
void chuli(string x){
	if(x.find("你好")!=std::string::npos||x.find("hi")!=std::string::npos||x.find("您好")!=std::string::npos){
		cout<<"你好，我是汪北海，我来说一下吧，我给你一个方法，就是使用原子炮来攻击质子"<<endl; 
	}
	else if(x.find("sb")!=std::string::npos||x.find("傻逼")!=std::string::npos||x.find("250")!=std::string::npos){
		cout<<"不许骂人啊，你个坏蛋"<<endl;
		cnt=1;
	}
	else{
		cout<<"用原子炮才能打败质子"<<endl;
	}
}
int main(){
	while(1==1){
	cout<<"欢迎来到质子开发的%……&%￥@%*%￥游戏（上一部游戏请在原子的悲惨事件找到）"<<endl;
	cout<<"请输入你的姓名:";
	cin>>a;
	cout<<"你成为了原子，你被干掉后，转身成为了电子，你要开始复仇,请输入你要干什么 1.找到npc 2.闲逛"<<endl;
	cin>>s;
	if(s==2){
		for(int i=1; ;i++){
			cout<<"质子好像找到了你，你要干什么 1.逃跑 2.被吃掉"<<endl;
			cin>>d;
			if(d==1){
				cout<<"你陷入了事件循环，回去吧"<<endl; 
			}
			else{
				cout<<"你被质子吃了"<<endl;
				break;
			}
		}
	}
	else{
		cout<<"你找到了npc，请输入你要说的话：";
		cout<<"你：";
		cin>>n;
		cout<<"汪北海:"; 
		chuli(n);
		if(cnt==1){
			cout<<"因为你骂人，所以你被扔去喂质子了"<<endl;\
			break;
		}
		cout<<"你现在要干什么？ 1.去找原子 2.作死"<<endl;
		cin>>s;
		if(s==1){
			cout<<"原子没有，质子来了，"<<endl;
			break; 
		}
		else{
			cout<<"你成为了原子，你要干什么 1.做一门大炮 2.找质子 3.逃跑"<<endl;
			cin>>s;
			if(s==3){
				cout<<"你重开了一局"<<endl; 
			}
			else if(s==2){
				cout<<"你要使用什么？ 1.打拳 2.逃跑"<<endl;
				cin>>s;
				if(s==1){
					cout<<"你把质子打败了！你成功了！"<<endl;
					cout<<"敬请期待下一部游戏"<<endl;
					 ses=1;
					 break; 
				}
			}
			else{
				cout<<"你把自己改装成了-大炮"<<endl;
				cout<<"你遇到了质子，请输入攻击方位（如 2 8，范围：0~10）"<<endl;
				cin>>t>>f;
				g=rand()%10;
				h=rand()%10;
				if(t==g||h==f){
					cout<<"你成功的打到了质子，质子噶了"<<endl;
					ses=1;
					break;
				}
				else{
					cout<<"你死了，因为你没能打到质子"<<endl;
					break;
				}
			}
		}
	}
	}
	cout<<"敬请期待下一部游戏！"<<endl;
} 
