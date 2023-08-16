#include <iostream>
#include <cstdlib>
using namespace std;
int cnt,qian,a,b,c,d,g;
char x;
string n,ma,str;
int s,r;
struct hao{
	string name;
	string mail;
}h[3];
int cundang,cundang2,shu;
int main(){
	cout<<"请输入姓名:";
	cin>>h[1].name;
	cout<<"请输入邮箱/手机号:";
	cin>>h[1].mail;
	cout<<"欢迎!，我是zhihelp366"<<endl;
	while(1==1){
		cout<<"请输入你要干什么 1.计算 2.摸鱼小游戏 3.不会聊天的聊天机器人 4.记事本 5.退出 6.数据库（要密码）"<<endl;
		cin>>s;
		if(s==1){
			cout<<"请输入你要什么类型的计算 1.整数计算 2.分数计算"<<endl;
			cin>>r;
			if(r==1){
				cout<<"请输入算式（*是乘号，/是除号，如:1*0)"<<endl;
				cin>>a>>x>>b;
				if(x=='+'){
					cout<<"结果；"<<a+b<<endl;
				}
				else if(x=='-'){
					cout<<"结果:"<<a-b<<endl;
				}
				else if(x=='*'){
					cout<<"结果:"<<a*b<<endl;
				}
				else if(x=='/'&&b!=0){
					cout<<"结果:"<<a/b<<"......"<<a%b<<endl;
				}
				else{
					cout<<"错误"<<endl;
				}
			}
			else{
				cout<<"请输入第一个数的分母:";
				cin>>a;
				cout<<"请输入第一个数的分子:";
				cin>>b;
				cout<<"请输入第二个数的分母:";
				cin>>c;
				cout<<"请输入第二个数的分子:";
				cin>>d;
				cout<<"请输入符号（*是乘号，/是除号)"<<endl;
				cin>>x;
				if(x=='+'){
					if(a==c){
						cout<<"结果:"<<a<<"/"<<b+d<<endl;
					}
					else{
						cout<<"结果:"<<a*c<<"/"<<b*c+d*a<<endl;
					}
				}
				else if(x=='-'){
					if(a==c){
						cout<<"结果:"<<a<<"/"<<b-d<<endl;
					}
					else{
						cout<<"结果:"<<a*c<<"/"<<b*c-d*a<<endl;
					}
				}
				else if(x=='*'){
					cout<<"结果:"<<a*c<<"/"<<b*d<<endl;
				}
				else if(x=='/'){
					cout<<"结果:"<<a*d<<"/"<<b*c<<endl;
				}
				else{
					cout<<"错误"<<endl;
				}
			} 
		}
		else if(s==2){
			cout<<"请输入你要玩什么 1.猜数游戏 2.经商模拟器(有存档)"<<endl;
			cin>>r;
			if(r==1){
				cout<<"已经生成随机数，请来猜数字吧!"<<endl;
				shu=rand()%100;
				while(1==1){
					cin>>a;
					if(a==shu){
						cout<<"恭喜你猜对了啊"<<endl;
						break;
					}
					else if(a<shu){
						cout<<"小了"<<endl;
					}
					else{
						cout<<"大了"<<endl;
					}
				}
			}
			else{
				cout<<"请输入你有存档吗？ 1.有 2.没有"<<endl;
				cin>>d;
				if(d==1){
					cout<<"请输入存档码1:";
					cin>>cundang;
					cnt=cundang;
					cout<<"请输入存档码2:";
					cin>>cundang2;
					cout<<"好了"<<endl;
					qian=cundang2;
				}
				else{
					cout<<"没问题，已经为你开启新游戏"<<endl;
				}
				cout<<"你开始经商"<<endl;
				while(1==1){
					cout<<"请输入你要卖什么 1.玩具 2.游戏"<<endl;
					cin>>c;
					qian+=5;
					cout<<"你赚了5块钱，你现在有:"<<qian<<"块钱"<<endl;
					cnt++;
					if(cnt%3==0){
						cout<<"有客户说你很好，于是给你了:"<<cnt/3<<"块钱"<<endl;
						qian+=cnt/3;
					}
					if(cnt%5==0){
						cout<<"有人说你是良心商家，你说:1.没错 2.我还有需要改进的地方";
						cin>>b;
						if(b==1){
							cout<<"客户说:希望你继续加油"<<endl;
						}
						else{
							cout<<"客户说:你很谦虚，要不我来投资你8块钱"<<endl;
							qian+=8;
						}
					}
					if(cnt%7==0){
						cout<<"客户对你很满意，你获得了10块钱!"<<endl;
						qian+=10;
					}
					if(cnt==50){
						cout<<"你要继续玩吗:1.要 2.不要"<<endl;
						cin>>g;
						if(g==1){
							cout<<"继续"<<endl;
						}
						else{
							cout<<"存档1号码:"<<cnt<<endl;
							cout<<"存档2号码:"<<qian<<endl;
						}
					}
				}
			}
		}
		else if(s==3){
			cout<<"ih"<<endl;
			cout<<"人工智障:";
			for(int i=1;i<=7;i++){
				cout<<"你:";
				cin>>n;
				if(n=="你好"){
					cout<<"你也好"<<endl;
				}
				else if(n=="几点了"){
					cout<<"几点"<<endl;
				}
				else{
					cout<<"啊吧啊吧"<<endl;
				}
			}
		}
		else if(s==4){
			cout<<"请输入你要干什么 1.看记事本 2.写记事"<<endl;
			cin>>a;
			if(a==1){
				cout<<"记事本:"<<str<<endl;
			}
			else{
				cout<<"请输入内容:";
				cin>>str;
				cout<<"ok"<<endl; 
			}
		}
		else if(s==5){
			cout<<"感谢使用"<<endl;
			return 0;
		}
		else if(s==6){
			cout<<"请输入密码:";
			cin>>ma;
			if(ma=="0929NIHAOZHIZI++"){
				cout<<"欢迎"<<endl;
				cout<<"请输入你要干什么 1.查看本程序变量储存地址 2.bot版本"<<endl;
				cin>>g;
				if(g==1){
					cout<<"name:"<<h[1].name<<endl;
					cout<<"abcd:"<<&a<<&b<<&c<<&d<<endl;
				}
				else{
					cout<<"版本:2.0"<<endl; 
				}
			}
		}
	}
}
