#include <iostream>
using namespace std;
struct hu{
	string name;
	string mi;
	int cai;
	int li=10;
	int qian; 
}a[100];
int n,s,b,cnt;
int main(){
	for(int i=1; ;i++){
		cout<<"欢迎来到农场游戏！请问你要干什么？1.登陆 2.退出"<<endl;
		cin>>n;
		if(n==1){
			cout<<"请输入账号名"<<endl;
			cin>>a[1].name;
			cout<<"请输入密码"<<endl;
			cin>>a[1].mi;
			cout<<"正确！"<<endl;
			while(1==1){
				cout<<"请问你要干什么 1.收菜 2.吃东西 3.买东西 4.退出游戏 5.个人属性 6.农场样子查看"<<endl;
				cin>>s;
				if(s==1&&a[1].li>0){
					cout<<"你的菜增加了1"<<endl;
					a[1].cai+2;
					a[1].li--; 
					a[1].qian++; 
				}
				else if(s==2){
					cout<<"请问你要吃什么 1.胡萝卜 2.白菜 3.米饭"<<endl;
					cin>>b;
					if(b==1){
						cout<<"你吃了胡萝卜！"<<endl;
						a[1].cai--;
						a[1].li++; 
					}
					else if(n==2){
						cout<<"你吃了白菜!"<<endl;
						a[1].cai--;
						a[1].li++; 
					}
					else{
						cout<<"你吃了米饭"<<endl;
						a[1].li++;
					}
				}
				else if(s==3){
					cout<<"你现在可以拿钱买东西，你要买什么？ 1.1点体力 2.一颗蔬菜"<<endl;
					cin>>b;
					if(b==1&&a[1].qian>0){
						cout<<"ok"<<endl;
						a[1].li++;
						a[1].qian--;
					}
					else if(b==2&&a[1].qian>0){
						cout<<"ok"<<endl;
						a[1].cai++;
						a[1].qian--;
					}
					else{
						cout<<"操作错误或者钱数不够"<<endl;
					}
				}
				else if(s==4){
					cout<<"再见！"<<endl;
					return 0;
				}
				else if(s==5){
					cout<<"名字:"<<a[1].name<<endl;
					cout<<"菜的数量:"<<a[1].cai<<endl;
					cout<<"体力:"<<a[1].li<<endl;
					cout<<"钱的数量:"<<a[1].qian<<endl; 
				}
				else if(s==6){
					cout<<"你的农场的样子："<<endl;
					cout<<"*******_***********"<<endl;
					cout<<"*      s   m       * "<<endl;
					cout<<"&&&&&&&&&&&&&&&&&&&&"<<endl;
					cout<<"********************"<<endl; 
				}
				else{
					cout<<"无效操作"<<endl;
				}
			}
		}
		if(n==2){
			cout<<"退出了"<<endl;
			return 0; 
		}
	} 
}
