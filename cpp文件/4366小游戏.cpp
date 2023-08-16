#include <iostream>
#include <cstdlib>
using namespace std;
int a,r,t,f,s;
string n; 
int main(){
	while(1==1){
		cout<<"欢迎来到4366小游戏，请输入游戏编号开始游戏 1.石头剪刀布 2.猜数游戏 3.数米 4.轰炸机游戏 5.退出"<<endl;
		cin>>s;
		if(s==1){
			cout<<"请输入你要出什么？ 1.石头 2.剪刀 3.布"<<endl;
			cin>>a;
			r=rand()%2+1;
			if(a==1&&r==2||a==2&&r==3||a==3&&r==1){
				cout<<"你赢了!"<<endl; 
			}
			else if(a==1&&r==1||a==2&&r==2||a==3||r==3){
				cout<<"这是一个平局"<<endl;
			}
			else{
				cout<<"你输了"<<endl;
			}
		}
		else if(s==2){
			r=rand()%100;
			cout<<"随机数已经设定好，范围0~100"<<endl;
			while(1){
				cout<<"请输入猜的数"<<endl;
				cin>>a;
				if(a==r){
					cout<<"恭喜你，猜对了!"<<endl; 
				}
				if(a<r){
					cout<<"小了"<<endl;
				}
				if(a>r){
					cout<<"大了"<<endl;
				}
			}
		}
		else if(s==3){
			for(int i=1; ;i++){
				cout<<"请输入你要数几颗米"<<endl;
			cin>>a;
			cout<<"输入一可以数米（数字)"<<endl;
			cin>>t;
			cout<<"数了一颗"<<endl;
			a--;
			if(a==0){
				cout<<"恭喜你，数米数完了"<<endl;
				break;
			} 
			}
		}
		else if(s==4){
			cout<<"请输入轰炸坐标(1~10,如：6 3）:"<<endl;
			t=rand()%10;
			f=rand()%10;
			cin>>r>>a;
			if(r==t&&a==f){
				cout<<"你轰炸到了！"<<endl;
			}
			else{
				cout<<"未能轰炸到"<<endl;
			}
		}
		else{
			cout<<"感谢使用"<<endl;
			return 0;
		}
	}
} 
