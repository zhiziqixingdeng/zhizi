#include <iostream>
#include <cstdlib>
using namespace std;
int a[4];
int a1,b1,c1,a2,b2,c2;
int r,sdf;
string str;
int cnt1,cnt2,cnt3;
int main(){
	while(1==1){
		r=rand()%8+1;
		cout<<"欢迎来到斗地主残局，输入开始可以开始游戏，输入help进入帮助"<<endl;
		cin>>str;
		if(str=="help"){
			cout<<"这个是变种的斗地主，每次的四张牌都是随机的，你的目标是获得9个胜利牌，而对手如果获得9个的话"<<endl;
			cout<<"你会。。。。。。输掉"<<endl;
			cout<<"进入游戏，会有两个npc（机器人）来陪你打牌"<<endl;
			cout<<"在游戏中，只有最基本的比大小，没有其他的，忽略花色"<<endl;
			cout<<"所有牌都会自带一个编号"<<endl;
			cout<<"输入编号出牌"<<endl;
			cout<<"输入不在编号里面的数字可以要不起"<<endl;
			cout<<"但是请不要作弊哦，因为作弊是不好"<<endl;
			cout<<"祝您游戏愉快，我们根本不用实名认证的哦"<<endl;
			cout<<"(小提示：要不起其实几乎没有作用)"<<endl; 
			cout<<"(小提示2：其实最后是看两个数相加起来的，跟原版不一样)"<<endl; 
		}
		else if(str=="开始"){
			while(1==1){
			for(int i=1;i<=4;i++){
			int r=rand()%8+1;
			cout<<i<<"号牌:"<<r<<endl; 
			a[i]=r;
			}
			cout<<"请你先出牌:";
			cin>>a1;
			if(a1==0||a1==1||a1==2||a1==3){
				cout<<"你出了:"<<a[a1]<<endl; 
				a1=a[a1]; 
			}
			else{
				cout<<"你:要不起"<<endl;
			}
			r=rand()%8+1;
			if(r<=a1){
				cout<<"1号:要不起"<<endl;
			}
			else{
				cout<<"1号出了"<<r<<endl;
				b1=r;
			}
			r=rand()%8+1;
			if(r<=a1){
				cout<<"2号：要不起"<<endl;
			}
			else{
				cout<<"2号:"<<r<<endl;
				c1=r;
			}
			for(int i=1;i<=4;i++){
			int r=rand()%8+1;
			cout<<i<<"号牌:"<<r<<endl; 
			a[i]=r;
			}
			cout<<"请输入你要出的牌吧（如果小于前面2，3号选手的牌自动要不起)"<<endl;
			cin>>a2;
			if(a[a2]<c1||a[a2]<b1){
				cout<<"你:要不起"<<endl;
			}
			else{
				cout<<"你出了:"<<a[a2]<<endl;
				a2=a[a2];
			}
			r=rand()%8+1;
			if(r<=a2||r<=c1||r<=a1){
			cout<<"1号：要不起"<<endl;
			}
			else{
				cout<<"1号出了:"<<r<<endl;
				b2=r; 
			}
			r=rand()%8+1;
			if(r<=a2||r<=c1||r<=c2||r<=a1){
				cout<<"2号:要不起"<<endl;
			}
			else{
				cout<<"2号出了:"<<r<<endl;
				c2=r;
			}
			cout<<"本轮结束"<<endl;
			if(a1+a1>c1+c2&&a1+a2>b1+b2){
				cnt1++;
				cout<<"你获胜了"<<endl;
			}
			else if(b1+b2>c1+c2&&b1+b2>a1+a2){
				cnt2++;
				cout<<"对手胜利"<<endl;
			}
			else if(c1+c2>a1+a2&&c1+c2>b1+b2){
				cnt3++;
				cout<<"对手胜利"<<endl;
			}
			else{
				cout<<"平局"<<endl;
			}
			if(cnt1>=9){
				cout<<"你获胜啦！全局获胜！"<<endl;
				break;
			}
			if(cnt2>=9||cnt3>=9){
				cout<<"对手获胜"<<endl;
				break; 
			}
			}
		}
	}
} 

