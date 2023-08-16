#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <cmath> 
using namespace std;
int a,b,c,d,w,flag,html;
char x;
string n;
string name;
string shi,str,sss;
int qing,ans,hhh;
bool tt; 
char tu[7][7];
struct wen{
	string ming;
	string rong;
}m[1000];
struct ju{
	string wen;
}ju[1000];
int t,f,r,ssdds;
int red=1,blue=2;
int main(){
	cout<<"欢迎使用nol std系统"<<endl;
	sleep(1);
	system("cls");
	cout<<"请输入你的名字:";
	cin>>name;
	cout<<"欢迎使用该系统!"<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"NOL std"<<endl;
		cout<<"***********************"<<endl;
		cout<<"输入数字来打开"<<endl;
		cout<<"================================"<<endl;
		cout<<"1.记事本    2.新建文件   3.游戏"<<endl;
		cout<<"  4.cmd   5.帮助   6.科学计算器     机主名字:"<<name<<endl;
		cout<<" 7.百度浏览器    8.每日一言    9.小说开心   今日心情:";
		if(qing==1){
			cout<<"开心!"<<endl;
		}
		else if(qing==2){
			cout<<"难过"<<endl;
		}
		else if(qing==3){
			cout<<"内卷"<<endl;
		}
		else{
			cout<<"其他"<<endl;
		}
		cout<<"   10.计时器   11.文件夹  12.画图   "<<endl;
		cout<<"     13.记录心情   14.电脑管家"<<endl;	
		cout<<"==================================="<<endl;
		cin>>n;
		if(n=="1"){
			cout<<"请输入你要 1.查看计时 2.写记事"<<endl;
			cin>>w;
			if(w==1){
				if(shi==""){
					cout<<"抱歉，您还没有书写记事哦"<<endl;
				} 
				else{
					cout<<"记事:"<<shi<<endl;
				}
			}
			else if(w==2){
				cout<<"请输入记事内容:";
				cin>>shi;
				cout<<"记事完成!"<<endl;
			}
			else{
				cout<<"错误!"<<endl;
			}
		}
		else if(n=="2"){
			ans++;
			cout<<"请输入该文件标题:";
			cin>>m[ans].ming;
			cout<<"请输入内容:";
			cin>>m[ans].ming;
			cout<<"文件创建完成!"<<endl;
		}
		else if(n=="3"){
		cout<<"输入数来猜(0~100)"<<endl;
				a=rand()%100;
				while(b!=a){
					if(a>b){
						cout<<"大了"<<endl;
					}
					if(a<b){
						cout<<"小了"<<endl;
					}
				}
				cout<<"猜对了!"<<endl;
			}
		else if(n=="4"){
			cout<<"请输入命令:";
			cin>>str;
			if(str=="help"){
				cout<<"输入start可以打开文件"<<endl;
				cout<<"暂时还没有更多功能"<<endl; 
			}
			else if(str=="start"){
				cout<<"请输入这个文件的文件名:";
				cin>>sss;
				for(int i=1;i<=ans;i++){
					if(sss==m[i].ming){
						cout<<"文件标题:";
						cout<<m[i].ming<<endl;
						cout<<"文件内容:";
						cout<<m[i].rong<<endl;
						cout<<"=====================";
						sleep(1);
					}
					cout<<"打开结束"<<endl;
				}
			}
			else{
				cout<<"错误"<<endl;
			}
		}
		else if(n=="5"){
			cout<<"输入数字来使用"<<endl;
			cout<<"打开软件后都会有提示"<<endl;
			sleep(1);
			system("cls");
		}
		else if(n=="6"){
			cout<<"请输入你要什么类型的计算 1.整数 2.分数 3.百分比 4.绝对值"<<endl;
			cin>>w;
			if(w==1){
				cout<<"请输入两个整数和一个运算符（*是乘号，/是除号,比如说:6*9):";
				cin>>a>>x>>b;
				if(x=='+'){
					cout<<"结果:"<<a+b<<endl;
				}
				else if(x=='-'){
					cout<<"结果:"<<a-b<<endl;
				}
				else if(x=='*'){
					cout<<"结果:"<<a*b<<endl;
				} 
				else if(x=='/'&&b!=0){
					cout<<"结果:"<<a/b;
					if(a%b==0){
						cout<<endl;
					} 
					else{
						cout<<"......"<<a%b<<endl;
					}
				}
				else{
					cout<<"错误"<<endl;
				}
			}
			else if(w==2){
				cout<<"请输入第一个分数的分母:";
				cin>>a;
				cout<<"请输入第一个分数的分子:";
				cin>>b;
				cout<<"请输入第二个分数的分母:";
				cin>>c;
				cout<<"请输入第二个数的分子:";
				cin>>d;
				cout<<"请输入运算符(*是乘号,/是除号):"<<endl;
				cin>>x;
				if(x=='+'){
					if(a==c){
						cout<<"结果:"<<a<<"分之"<<b+d<<endl;
					}
					else{
						cout<<"结果:"<<a*c<<"分之"<<b*c+a*d<<endl;
					}
				}
				else if(x=='-'){
					if(a==c){
						cout<<"结果:"<<a<<"分之"<<b-d<<endl;
					}
					else{
						cout<<"结果:"<<a*c<<"分之"<<b*c-a*d<<endl;
					}
				}
				else if(x=='*'){
					cout<<"结果:"<<a*c<<"分之"<<b*d<<endl;
				}
				else if(x=='/'){
					cout<<"结果:"<<a*d<<"分之"<<b*c<<endl; 
				}
				else{
					cout<<"错误"<<endl;
				}
			}
			else if(w==3){
				cout<<"请输入总值:";
				cin>>a;
				cout<<"请输入需要百分之几:";
				cin>>b;
				cout<<"计算中"<<endl;
				sleep(1);
				c=a/100;
				cout<<"结果:"<<b*c<<endl;
			}
			else if(w==4){
				cout<<"请输入基准:";
				cin>>a;
				cout<<"请输入需要求绝对值的数:";
				cin>>b;
				if(b==a){
					cout<<"0"<<endl; 
				}
				else if(b<a){
					cout<<a-b;
				}
				else{
					cout<<a+b<<endl;
				}
			}
			else{
				cout<<"输入错误"<<endl;
			}
		}
		else if(n=="7"){
			system("start https://www.baidu.com/");
	}
		else if(n=="8"){
			cout<<"请输入获取方式 1.系统自带 2.自定义"<<endl;
			cin>>w;
			if(w==1){
				a=rand()%2;
				if(a==0){
					cout<<"逆水行舟，不进则退"<<endl;
				}
				else if(a==1){
					cout<<"锄禾日当午，汗滴禾下土"<<endl;
				}
				else{
					cout<<"聪明出于勤奋，天才在于积累。"<<endl;
				}
			}
			else if(w==2){
				cout<<"请输入你要干什么 1.查看名句 2.输入名句"<<endl;
				cin>>hhh;
				if(hhh==1){
					if(ans==0){
						cout<<"您还没有设置名句"<<endl;
					}
					else{
						while(a!=0){
						a=rand()%ans;
					}
					cout<<ju[a].wen<<endl;
					}
				}
				else if(hhh==2){
					cout<<"请输入名句内容:";
					ans++;
					cin>>ju[ans].wen;
					cout<<"完成!"<<endl;
				}
				else{
					cout<<"错误"<<endl;
				} 
			}
		}
		else if(n=="9"){
			cout<<"开始搜索小说"<<endl;
			system("start http://www.qidian.com");
		}
		else if(n=="10"){
			cout<<"请输入你要计时几个小时:";
			cin>>a;
			cout<<"请输入你要计时几个分钟:";
			cin>>b;
			cout<<"请输入你要计时几秒:";
			cin>>c;
			d=a*3600+b*60+c;
			sleep(d);
			cout<<"计时完成"<<endl; 
		}
		else if(n=="11"){
			cout<<"下面是你的文件"<<endl;
			for(int i=1;i<=ans;i++){
				cout<<i<<":"<<m[ans].ming;
			}
			sleep(1);
			cout<<"请输入你要打开的文件:";
			cin>>a;
			if(a>ans||a<=0){
				cout<<"错误!"<<endl;
			}
			else{
				cout<<"文件标题:"<<m[a].ming;
				cout<<"文件内容:"<<endl;
				cout<<m[a].rong<<endl;
			}
		}
		else if(n=="12"){
			cout<<"欢迎来到正方形画图"<<endl;
			cout<<"请输入长:";
			cin>>a;
			cout<<"请输入宽:";
			cin>>b;
			cout<<"请输入需要打印的图形:";
			cin>>x;
			cout<<"请输入是实心还是空心 1.实心 2.空心"<<endl;
			cin>>c;
			cout<<"生成的图形:";
			sleep(1);
			for(int i=1;i<=a;i++){
				for(int j=1;j<=b;j++){
					if(c==1){
						cout<<x;
					}
					else{
						if(i==1||j==1){
							cout<<x;
						}
						else{
							cout<<" "; 
						}
					}
				}
				cout<<endl;
			} 
		}
		else if(n=="13"){
			cout<<"请输入你的心情 1.开心 2.难过 3.内卷:";
			cin>>qing;
			if(qing!=1||qing!=2||qing!=3){
				cout<<"错误!"<<endl;
				qing=0;
			} 
			else{
				cout<<"ok"<<endl;
			}
		}
		else if(n=="14"){
			cout<<"请输入你要 1.关机 2.刷新"<<endl;
			cin>>w;
			if(w==1){
				system("shutdown -s -t 3");
			} 
			else if(w==2){
				sleep(1);
				system("cls");
			} 
			else{
				cout<<"错误"<<endl;
			}
		}
	}
}
