#include <iostream>
using namespace std;
int n;
int main(){
	cout<<"欢迎来到游戏你好的奇妙冒险"<<endl;
	while(1==1){
		cout<<"你成为了你好，一位最厉害的程序员，还可以复活"<<endl;
		cout<<"有一天，你发现一个质子离开了你的身体，"<<endl;
		cout<<"你非常生气，于是准备去追"<<endl;
		cout<<"请输入你要去哪里 1.下水道 2.微观世界 3.农场"<<endl;
		cin>>n;
		if(n==1){
			cout<<"你被淹死了（精神）"<<endl;
			cout<<"BAD END"<<endl;
		}
		else if(n==2){
			cout<<"你要怎么去？ 1.物理 2.精神"<<endl;
			cin>>n;
			if(n==1){
				cout<<"你把自己打遍全身，结果没有缩小，被自己打死了"<<endl;
				cout<<"BAD END"<<endl; 
			}
			else{
				cout<<"你在精神世界找到了质子，你抓到了他"<<endl;
				cout<<"GOOD END"<<endl; 
			}
		}
		else{
			cout<<"你到了农场，你发现了TP这种食物，十分鲜美，你是否要吃 1.吃 2.不吃 3.啊吧啊吧"<<endl;
			cin>>n;
			if(n==1){
				cout<<"你吃了PT，你觉得非常好吃，于是在这里不想走了，在这里一直吃PT"<<endl;
				cout<<"BAD END"<<endl; 
			}
			else if(n==2){
				cout<<"你被馋死了，于是开始吃质子，你发现了质子，于是把他抓了回来"<<endl;
				cout<<"GOOD END"<<endl;
			}
			else{
				cout<<"你因为装傻，于是找来了PT的打，你要去哪里逃跑 1.森林 2.河流"<<endl;
				cin>>n;
				if(n==1){
					cout<<"PT生在森林，于是把你抓住了"<<endl;
					cout<<"BAD END"<<endl; 
				}
				else{
					cout<<"PT不会游泳，你要去哪里找质子？ 1.在这里 2.PT里"<<endl;
					cin>>n;
					if(n==1){
						cout<<"质子就在你身边，你抓到了质子"<<endl;
						cout<<"GOOD END"<<endl;
					}
					else{
						cout<<"你被PT吃了"<<endl;
						cout<<"BAD END"<<endl; 
					}
				}
			}
		}
	}
} 
