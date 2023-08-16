#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <cmath>
#include <windows.h>
#include <unistd.h>
using namespace std;
struct hao{
	string name;
	int vip;
}s[3];
int a,b,c,d,r;
string shi;
struct shuju{
	string biaoti;
	string rong;
	string ma;
	int cun; 
}cv[100];
int ruan1,ruan2,ruan3,ruan4,ruan5,n,w,cnt;
char x,y;
void chuli(string x){
	if(x.find("你好")!=std::string::npos||x.find("hi")!=std::string::npos||x.find("Hi")!=std::string::npos||x.find("您好")!=std::string::npos){
		r=rand()%1;
		if(r==0){
			cout<<"你好，我是质云"<<endl;
		}
		else{
			cout<<"hi！"<<endl; 
		}
	}
	else if(x.find("计算")!=std::string::npos){
		cout<<"已经开启计算器了"<<endl;
		cout<<"请输入两个数和一个运算符号（*是乘号，/是除号，如：3 * 4)"<<endl;
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
			cout<<"余数已经忽略"<<endl;
		}
		else{
			cout<<"除数不能是0或者符号错误"<<endl;
		}
	}
	else if(x.find("职业")!=std::string::npos||x.find("爱好")!=std::string::npos){
		cout<<"我的长处在计算机+数学，基本上简简单单"<<endl; 
	}
	else if(x.find("古诗")!=std::string::npos){
		r=rand()%2;
		if(r==0){
			cout<<"锄禾日当午，汗滴禾下土，谁知盘中餐，粒粒皆辛苦。"<<endl; 
		}
		else if(r==1){
			cout<<"我家洗砚池头书，多多花开淡墨痕，不要人夸好颜色，只留清气满乾坤"<<endl;
		}
		else{
			cout<<"要不让你来一首？"<<endl;
		}
	}
	else if(x.find("不好")!=std::string::npos||x.find("好")!=std::string::npos){
		r=rand()%1;
		if(r==0){
			cout<<"我尊重你的选择"<<endl;
		}
		else{
			cout<<"我同意你的选择"<<endl;
		}
	}
	else if(x.find("砖家")!=std::string::npos){
		r=rand()%1;
		if(r==0){
			cout<<"《砖家》"<<endl;
		}
		else{
			cout<<"砖家的近义词是叫兽"<<endl;
		}
	}
	else if(x.find("如果")!=std::string::npos){
		cout<<"啊这，世界上没有如果"<<endl; 
	}
	else if(x.find("宇宙")!=std::string::npos){
		cout<<"啊，浩瀚的宇宙啊"<<endl; 
	}
	else if(x.find("书")!=std::string::npos){
		cout<<"书是人类进步的阶梯！我爱看三体！"<<endl; 
	}
	else if(x.find("国家")!=std::string::npos){
		cout<<"我是中国人"<<endl; 
	}
	else if(x.find("沙比")!=std::string::npos||x.find("傻逼")!=std::string::npos||x.find("煞笔")!=std::string::npos||x.find("操你妈")!=std::string::npos){
		r=rand()%2;
		if(r==0){
			cout<<"请不要骂人，谢谢配合"<<endl;
		}
		else if(r==1){
			cout<<"出口成章"<<endl;
		}
		else{
			cout<<"我也是服了你这个人了"<<endl;
		}
	}
	else if(x.find("是")!=std::string::npos){
		cout<<"是什么我不想回答"<<endl; 
	}
	else if(x.find("弱智")!=std::string::npos){
		cout<<"我不希望听到这个词语"<<endl; 
	}
	else if(x.find("小猫")!=std::string::npos){
		r=rand()%1;
		if(r==0){
			cout<<"啊，小猫很可爱的"<<endl;
		} 
		else{
			cout<<"我觉得小猫挺不错"<<endl;
		}
	}
	else if(x.find("创造者")!=std::string::npos){
		r=rand()%1;
		if(r==0){
			cout<<"我的创造者是小质子"<<endl;
		}
		else{
			cout<<"我的创造者是一个微观粒子-质子"<<endl;
		}
	}
	else if(x.find("自杀")!=std::string::npos){
		cout<<"生活如此美好，为何要想不开呢？"<<endl; 
	}
	else if(x.find("help")!=std::string::npos||x.find("帮助")!=std::string::npos){
		cout<<"只能说一个：输入计算可以让我帮你计算"<<endl; 
	}
	else if(x.find("天气")!=std::string::npos||x.find("时间")!=std::string::npos){
		r=rand()%1;
		if(r==0){
			cout<<"自己看看好吗"<<endl;
		}
		else{
			cout<<"自己看！我不想看！"<<endl;
		}
	}
	else if(x.find("计时")!=std::string::npos){
		cout<<"我不会计时啊"<<endl; 
	}
	else if(x.find("游戏")!=std::string::npos||x.find("game")!=std::string::npos){
		cout<<"我们来玩猜数游戏吧"<<endl;
		cout<<"我想到了一个100以内的书，请你来猜"<<endl;
		r=rand()%100;
		while(1==1){
			cout<<"请输入你要猜的数：";
			cin>>a;
			if(a<r){
				cout<<"小了"<<endl;
			}
			else if(a>r){
				cout<<"大了"<<endl;
			}
			else{
				cout<<"猜对了！"<<endl;
				break;
			}
		}
	}
	else if(x.find("机器人")!=std::string::npos||x.find("机器")!=std::string::npos){
		cout<<"我是机器人吗"<<endl; 
	}
	else if(x.find("qq")!=std::string::npos||x.find("QQ")!=std::string::npos){
		cout<<"我没有qq"<<endl;
	}
	else if(x.find("微信")!=std::string::npos){
		cout<<"哦，想要我微信，没门"<<endl; 
	}
	else if(x.find("质子")!=std::string::npos){
		cout<<"质子是我的创造者"<<endl; 
	}
	else if(x.find("作文")!=std::string::npos){
		cout<<"作文要的字数真的很多啊"<<endl; 
	}
	else if(x.find("yyds")!=std::string::npos||x.find("YYDS")!=std::string::npos){
		cout<<"永远的神？"<<endl;
	}
	else if(x.find("666")!=std::string::npos){
		cout<<"999"<<endl; 
	}
	else if(x.find("考试")!=std::string::npos||x.find("测试")!=std::string::npos){
		cout<<"完了，zhizi_bot忘记复习了，我得去叫他一下awa"<<endl; 
	}
	else if(x.find("生病")!=std::string::npos){
		cout<<"生病可是很难受的啊"<<endl; 
	}
	else{
		r=rand()%2;
		if(r==0){
			cout<<"质云不懂"<<endl; 
		}
		else if(r==1){
			cout<<"我好像听不懂啊"<<endl; 
		}
		else{
			cout<<"不懂。。。"<<endl;
		}
	}
}
string acd;
int main(){
	cout<<"请输入你的名字:";
	cin>>s[1].name;
	if(s[1].name=="zhizi"){
		cout<<"欢迎开发者！"<<endl;
		s[1].vip=1;
	}
	else{
		cout<<"用户您好"<<endl;
	}
	while(1==1){
		cout<<"请输入你要打开哪个文件夹 1.计算工具 2.小游戏 3.计时器 4.应用商店 ";
			cout<<"5.AI小助手 ";
			cout<<"6.记事本 ";
			cout<<"7.谁是卧底 ";
			cout<<"8.小数据库 ";
			cout<<"9.电子趣味打印机 ";
		cout<<endl;
		cout<<"提示：输入数字前面的编号就可以打开哦"<<endl;
		cin>>n;
		if(n==1){
			cout<<"进入了计算文件夹"<<endl;
			cout<<"请输入需要哪个软件 1.整数计算 2.分数计算"<<endl;
			cin>>w;
			if(w==1){
				cout<<"请输入两个数字和运算符(*是乘号，/是除号，比如说：6*7)"<<endl;
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
					cout<<"结果:"<<a/b<<"。。。。。。"<<a%b<<endl;
				}
				else{
					cout<<"错误"<<endl;
				}
			}
			else{
				cout<<"请输入第一个数的分母:";
				cin>>a;
				cout<<"请输入第二个数的分母:";
				cin>>b;
				cout<<"请输入第一个数的分子:";
				cin>>c;
				cout<<"请输入第2个数的分子:";
				cin>>d;
				cout<<"请输入运算符号（*是乘号,/是除号)"<<endl;
				cin>>x;
				if(x=='+'){
					if(a==b){
						cout<<"结果:"<<a<<"/"<<d+c<<endl;
					}
					else{
						cout<<"结果:"<<a*b<<"/"<<a*c+d*b<<endl;
					}
				}
				
			}
		}
		else if(n==2){
			cout<<"请输入你要玩什么游戏 1.猜数游戏 2.随机事件"<<endl;
			cin>>w;
			if(w==1){
				cout<<"范围是：0~100"<<endl;
				cout<<"输入数字来猜"<<endl; 
				r=rand()%100;
				while(a!=r){
					if(a<r){
						cout<<"小了"<<endl;
					}
					if(a>r){
						cout<<"大了"<<endl;
					}
				}
				cout<<"结果:"<<"恭喜你，猜对了"<<endl;
			}
			else{
				cout<<"输入1可以经行随机任务"<<endl;
				cin>>a;
				if(a==1){
					r=rand()%3;
					if(r==0){
						cout<<"喝一杯水"<<endl;
					}
					else if(r==2){
						cout<<"吃面包或者摸鱼3分钟"<<endl;
					}
					else{
						cout<<"没有哦"<<endl;
					}
				}
				else{
					cout<<"您取消了任务获得"<<endl;
				}
			}
		}
		else if(n==3){
			cout<<"请输入你要计时多少秒"<<endl;
			cin>>a;
			sleep(a);
			cout<<"计时完成"<<endl; 
		}
		else if(n==4){
			cout<<"请输入你要下载什么 1.AI小助手 2.记事本 3.谁是卧底 4.小数据库 5.趣味打字机"<<endl;
			cin>>w;
			if(w==1){
				cout<<"下载完成"<<endl;
				ruan1==1;
			}
			else if(w==2){
				cout<<"下载完成"<<endl;
				ruan2=1;
			} 
			else if(w==3){
				cout<<"下载完成"<<endl;
				ruan3=1;
			}
			else if(w==4){
				cout<<"下载完成"<<endl;
				ruan4=1;
			}
			else if(w==5){
				cout<<"下载完成"<<endl;
				ruan5=1;
			}
			else{
				cout<<"错误"<<endl;
			}
		}
		else if(n==5){
			cout<<"你好，我是聊天机器人"<<endl;
			cout<<"我们可以聊天10轮"<<endl;
			for(int i=1;i<=10;i++){
				cout<<"你:";
				cin>>acd;
				cout<<"质云:";
				chuli(acd);
			}
		}
		else if(n==6){
			cout<<"请输入你要干什么 1.写记事 2.看记事本"<<endl;
			cin>>w;
			if(w==1){
				cout<<"请输入记事本内容"<<endl;
				cin>>shi;
				cout<<"ok"<<endl;
			}
			else{
				cout<<"记事本:"<<shi<<endl;
			}
		}
		else if(n==7){
			cout<<"请输入要几号剧本 1.食物 2.饮料（更多剧本准备推出中)"<<endl;
			cin>>w;
			if(w==1){
				cout<<"一号玩家是：汉堡"<<endl;
				cout<<"第二位玩家是:"<<"三明治"<<endl;
				cout<<"第三位玩家是:汉堡"<<endl;
			} 
			else{
				cout<<"正在推出中"<<endl;
			}
		}
		else if(n==8){
			cout<<"欢迎来到数据库，请输入你要干什么 1.添加数据 2.编号寻找数据 3.显示全部数据"<<endl;
			cin>>w;
			if(w==1){
				cout<<"请输入数据名称:";
				cin>>cv[cnt].biaoti;
				cout<<"请输入数据内容:";
				cin>>cv[cnt].rong;
				cout<<"请输入访问密码:";
				cin>>cv[cnt].ma;
				cout<<"数据添加完成，编号:"<<cnt<<endl;
				cv[cnt].cun=1;
				cnt++;
			}
			else if(w==2){
				cout<<"请输入编号:";
				cin>>r;
				cout<<"请输入访问密码:";
				cin>>acd;
				if(acd==cv[r].ma&&cv[r].cun==1){
					cout<<"正在为您呈现数据:";
					cout<<"标题:"<<cv[r].biaoti;
					cout<<"内容:"<<cv[r].rong;
					cout<<"内容输出完毕"<<endl;
				}
				else{
					cout<<"错误"<<endl;
				}
			}
			else{
				for(int i=0;i<cnt;i++){
					cout<<"数据编号:"<<i<<endl;
					cout<<"标题:"<<cv[i].biaoti<<endl;
					cout<<"内容:"<<cv[i].rong<<endl;
					cout<<"-----------分割线-----------"<<endl;
				}
			}
		}
		else if(n==9){
			cout<<"请输入你要趣味打字什么:"<<endl;
			cin>>acd;
			cout<<"开始喽" <<endl;
			for(int i=1;i<=acd.length();i++){
				cout<<acd[i];
				sleep(100);
			}
			cout<<"趣味打字完成"<<endl;
		}
		else{
			cout<<"错误!"<<endl;
		}
	}
}
