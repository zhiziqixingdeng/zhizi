#include <iostream>
using namespace std;
int n,cnt;
int main(){
	cout<<"欢迎来到游戏：折磨质子（上一部是原子的胜利之歌），这个是由质子开发的（瑟瑟发抖）"<<endl;
	cout<<"质子：啊，救命啊，我错了！"<<endl; 
	while(1==1){
		cout<<"请输入要折磨质子的方式 1.电击 2.挠痒痒 3.扇巴掌 4.变性（谨慎选择）5.停止折磨"<<endl;
		cin>>n;
		if(n==1){
			cout<<"质子：啊啊啊啊啊，我受不了了！啊"<<endl;
			cout<<"质子痛苦值+3"<<endl;
			cnt+=3;
		}
		if(n==2){
			cout<<"质子：哈哈哈，痒死，哈哈哈哈，痒死我啦"<<endl;
			cout<<"质子痛苦值+1"<<endl; 
			cnt++;
		}
		if(n==3){
			cout<<"质子：啊呦"<<endl;
			cout<<"质子痛苦值+1"<<endl;
			cnt++; 
		}
		if(n==4){
			cout<<"质子：你干嘛啊！！！！！！！！！"<<endl;
			cout<<"质子痛苦值+10"<<endl;
			cnt+=10;
		}
		if(n==5){
			cout<<"质子：啊吧啊吧，求求饶了我吧"<<endl;
			cout<<"质子痛苦值总数："<<cnt<<endl;
			break; 
		}
	}
	cout<<"真正的程序员质子：我为什么要开发这个”游戏“"<<endl;
}
