#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <unistd.h>
using namespace std;
string str,name,jishi;
int n;
int a,b,c,d,cnt,flag,sss,ans;
char y;
double h[1000];
struct ju{
	string biao;
	string rong;
	int flag1;
}ju[10000];
void chuli(string x){
	if(x.find("你好")!=std::string::npos||x.find("hi")!=std::string::npos||x.find("您好")!=std::string::npos||x.find("ello")!=std::string::npos){
		cout<<"你好啊，我是po_oq，由zhizi开发的机器人"<<endl;
	}
	else if(x.find("再见")!=std::string::npos||x.find("bye")!=std::string::npos){
		cout<<"再见喽"<<endl;
	}
	else if(x.find("计算")!=std::string::npos){
		cout<<"请输入你要什么类型的计算 1.整数 2.分数"<<endl;
		cin>>n;
		if(n==1){
			cout<<"请输入算式(*是乘号，/是除号,如:7*8)"<<endl;
			cin>>a>>y>>b;
			if(y=='+'){
				cout<<"结果:"<<a+b<<endl;
			}
			else if(y=='-'){
				cout<<"结果:"<<a-b<<endl;
			}
			else if(y=='*'){
				cout<<"结果:"<<a*b<<endl;
			}
			else if(y=='/'&&b!=0){
				cout<<"结果:"<<a/b<<endl;
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
			cout<<"请输入运算符号(*是乘号，/是除号):";
			cin>>y;
			if(y=='+'){
				if(a==c){
					cout<<"结果:"<<a<<"/"<<b+d<<endl;
				}
				else{
					cout<<"结果:"<<a*c<<"/"<<b*c+a*d<<endl;
				}
			}
			else if(y=='-'){
				if(a==c){
					cout<<"结果:"<<a<<"/"<<b-d<<endl;
				}
				else{
					cout<<"结果:"<<a*c<<"/"<<b*c-a*d<<endl;
				}
			}
			else if(y=='*'){
				cout<<"结果:"<<a*c<<"/"<<b*d<<endl; 
			}
			else if(y=='/'){
				cout<<"结果:"<<a*d<<"/"<<b*c;
			}
			else{
				cout<<"错误"<<endl; 
			}
		}
	}
	else if(x.find("计时")!=std::string::npos){
		cout<<"请输入需要计时的时间(秒):";
		cin>>a;
		sleep(a);
		cout<<"计时完成"<<endl;
	}
	else if(x.find("游戏")!=std::string::npos||x.find("game")!=std::string::npos){
		cout<<"欢迎来到猜数游戏"<<endl;
		cout<<"输入数来猜，范围0~100"<<endl;
		d=rand()%100;
		while(a!=d){
			cin>>a;
			if(a>d){
				cout<<"大了"<<endl;
			}
			if(a<d){
				cout<<"小了"<<endl;
			}
		}
		cout<<"恭喜你，猜对了!"<<endl;
	}
	else if(x.find("古诗")!=std::string::npos||x.find("故事")!=std::string::npos){
		int r=rand()%4;
		if(r==0){
			cout<<"我来！床前明月光，疑是地上霜，举头望明月，低头思故乡"<<endl;
		}
		else if(r==1||r==2){
			cout<<"锄禾日当午，汗滴禾下土!"<<endl;
		}
		else if(r==3){
			cout<<"晴空一鹤排云上，便引诗情到碧霄"<<endl; 
		}
		else{
			cout<<"红雨随心翻作浪，青山着意化为桥"<<endl; 
		}
	}
	else if(x.find("c++")!=std::string::npos||x.find("编程")!=std::string::npos||x.find("java")!=std::string::npos){
		cout<<"编程语言?我也学"<<endl;
	}
	else if(x.find("数学")!=std::string::npos){
		cout<<"我会一些特殊的数学，来看看你需要哪个 1.平方面积（正方) 2.求绝对值 3.换算(时间) 4.三角形面积 5.排序"<<endl;
		cin>>n;
		if(n==1){
			cout<<"请输入需要平面还是立方呢 1.平面 2.立方"<<endl;
			cin>>c;
			if(c==1){
				cout<<"请输入长和宽(用空格隔开):";
				cin>>a>>b;
				cout<<"面积:"<<a*b<<endl;
			}
			else if(c==2){
				cout<<"请输入要求绝对值的数字:";
				cin>>a;
				cout<<"结果:"<<abs(a)<<endl;
			}
			else if(c==3){
				cout<<"请输入秒数:";
				cin>>a;
				sss=c;
				b=0;
				c=0;
				d=0;
				for(int i=1;a<3600;i++){
					a=a/3600;
					b++;
				}
				for(int i=1;a<60;i++){
					a=a/60;
					c++;
				}
				d=a;
				cout<<"时间为"<<b<<"小时"<<c<<"分"<<d<<"秒"<<endl;
				c=sss;
			}
			else if(c==4){
				cout<<"请输入你要什么类型的 1.平面 2.立方"<<endl;
				cin>>n;
				if(n==1){
					cout<<"请输入底和高(之间用空格隔开，底先输入):";
					cin>>a>>b;
					cout<<"结果:"<<a*b/2<<endl;
				}
				else{
					cout<<"请输入底和高(之间用空格隔开，底先输入):";
					cin>>a>>b;
					cout<<"体积:"<<a*b/3<<endl; 
				}
			}
			else if(c==5){
				cout<<"请输入需要多少个数排序:";
				cin>>n;
				for(int i=1;i<=n;i++){
					cout<<"请输入第"<<i<<"个数:";
					cin>>h[i];
				}
				sort(h+1,h+n+1);
				cout<<"排序后的:"; 
				for(int i=1;i<=n;i++){
					cout<<h[i]<<" ";
				}
				cout<<endl;
			}
		}
	}
	else if(x.find("记事")!=std::string::npos){
		cout<<"请输入你要干什么 1.查看记事 2.写记事（会覆盖掉以前的)"<<endl;
		cin>>n;
		if(n==1){
			cout<<"记事内容:";
			if(jishi!=""){
				cout<<jishi<<endl;
			}
			else{
				cout<<"暂时还没有记事哦"<<endl;
			}
		}
		else if(n==2){
			cout<<"请输入记事内容:";
			cin>>jishi;
			cout<<"记事完成"<<endl;
		}
		else{
			cout<<"错误"<<endl;
		}
	}
	else if(x.find("抽奖")!=std::string::npos){
		cout<<"开始抽奖，请输入1"<<endl;
		cin>>n;
		if(n==1){
			cout<<"抽奖中"<<endl;
			int r=rand()%2;
			sleep(2);
			cout<<"奖品:";
			if(r==1){
				cout<<"一本书"<<endl;
			}
			else{
				cout<<"你猜"<<endl; 
			}
		}
		else{
			cout<<"没有开始抽奖"<<endl;
		}
	}
	else if(x.find("帮助")!=std::string::npos||x.find("help")!=std::string::npos){
		cout<<"输入包含一下词语的句子:"<<endl;
		cout<<"抽奖，记事，数学，计算，故事，古诗，游戏，game，你好，再见，hi,数据"<<endl;
		cout<<"可以遇到惊喜"<<endl; 
	}
	else if(x.find("数据")!=std::string::npos){
		cout<<"欢迎来到数据库,请输入你要干什么 1.创建数据 2.查看数据 3.查看数据列表"<<endl;
		cin>>n;
		if(n==1){
			ans++;
			cout<<"请输入这份数据的标题"<<endl;
			cin>>ju[ans].biao;
			cout<<"请输入这份数据的内容:"<<endl;
			cin>>ju[ans].rong;
			cout<<"创建数据完成，他的编号是"<<ans<<endl;
			ju[ans].flag1=1;
		}
		else if(n==2){
			cout<<"请输入这份数据的编号:";
			cin>>n;
			if(ju[n].flag1==1){
				cout<<"表题:"<<ju[n].biao<<endl;
				cout<<"内容:"<<ju[n].rong<<endl;
			}
			else{
				cout<<"错误"<<endl;
			}
		}
		else if(n==3){
			cout<<"数据表单:"<<endl;
			sleep(1);
			for(int i=1;i<=ans;i++){
				cout<<"名称:"<<ju[i].biao<<" "<<"编号:"<<i<<endl;
			}
		} 
	}
	else{
		cout<<"对不起，我好像听不懂，可以输入帮助查看帮助o"<<endl;
	}
}
int main(){
	cout<<"你好，我是po_oq，请问您叫?";
	cin>>name;
	cout<<"你好啊，"<<name<<endl;
	cout<<"zhizi温馨提示：输入帮助可以获得帮助"<<endl;
	while(1==1){
		cout<<"你:";
		cin>>str;
		cout<<"po_oq；";
		chuli(str);
	}
}
