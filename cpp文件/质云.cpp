#include <iostream>
#include <cstdlib> 
using namespace std;
string n;
double a,b;
int r;
char y;
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
int main(){
	cout<<"质云:你好啊，我是质云"<<endl;
	while(1==1){
		cout<<"你:";
		cin>>n;
		cout<<"质云:";
		chuli(n); 
	} 
} 
