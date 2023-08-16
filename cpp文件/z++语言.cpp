#include <iostream>
#include <cstdlib>
using namespace std;
string n,s,name,da,http;
int a,b,c,bot,f,r;
void bot1(string q){
	if(q=="你好"){
		cout<<"hi"<<endl;
	}
	else if(q=="再见"){
		cout<<"再见"<<endl;
	}
	else{
		cout<<da<<endl;
	}
}
void bot2(int w){
	 if(w==1){
	 	cout<<"输入两个数，我可以把这两个数相乘（如：7 4）"<<endl;
	 	cin>>a>>b;
	 	cout<<"结果:"<<a*b<<endl; 
	 }
	 else if(w==2){
	 	cout<<"请输入3个数，我可以计算这个立方体的立方面积（如：5 6 3）"<<endl;
	 	cin>>a>>b>>c;
	 	cout<<"这个立方体面积："<<a*b*c<<endl;
	}
	else if(w==3){
		cout<<"颜文字推荐：awa,uwu,qwq,(*_*),(*7%)?"<<endl; 
	}
	else{
		cout<<"未知命令"<<endl;
	}
}
void bot3(string x){
	if(x.find("你好")!=std::string::npos||x.find("您好")!=std::string::npos||x.find("hi")!=std::string::npos||x.find("Hi")!=std::string::npos){
		r=rand()%1;
		if(r==0){
			cout<<"你好！"<<endl;
		}
		else{
			cout<<"hi yoooooooo"<<endl;
		}
	}
	else if(x.find("笑话")!=std::string::npos||x.find("故事")!=std::string::npos){
		r=rand()%1;
		if(r==0){
			cout<<"要不你来讲一个吧"<<endl;
		}
		else{
			cout<<"你给我讲？"<<endl;
		}
	}
	else if(x.find("以前")!=std::string::npos){
		cout<<"看起来很长久的事啊"<<endl; 
	}
	else if(x.find("名字")!=std::string::npos||x.find("你是谁")!=std::string::npos){
		r=rand()%1;
		if(r==0){
			cout<<"我是zhizi_test"<<endl; 
		}
		else{
			cout<<"我的名字叫做zhizi_test"<<endl; 
		}
	}
	else if(x.find("汪北海")!=std::string::npos){
		cout<<"em,他是我的朋友"<<endl;
		cout<<"汪北海：你好"<<endl;
		cout<<"zhizi_bot:你不要捣乱！"<<endl; 
	}
	else if(x.find("爱好")!=std::string::npos){
		cout<<"我爱好广泛，有计算机，还有科幻小说！"<<endl; 
	}
	else if(x.find("帮助")!=std::string::npos||x.find("help")!=std::string::npos){
		cout<<"我又不是助理机器人，为什么要有帮助？"<<endl; 
	}
	else if(x.find("因为")!=std::string::npos){
		cout<<"因为所以，科学道理"<<endl; 
	}
	else if(x.find("250")!=std::string::npos||x.find("傻逼")!=std::string::npos||x.find("sb")!=std::string::npos){
		cout<<"请不要骂人谢谢，否则不和你说话了"<<endl;
	}
	else if(x.find("awa")!=std::string::npos||x.find("uwu")!=std::string::npos){
		cout<<"awa！qwq！"<<endl;
	}
	else if(x.find("c++")!=std::string::npos){
		cout<<"我和质子都会c++！"<<endl;
	}
	else if(x.find("6")!=std::string::npos){
		cout<<"9"<<endl;
	}
	else if(x.find("hhh")!=std::string::npos||x.find("yyds")!=std::string::npos){
		cout<<"xswl"<<endl;
	}
	else if(x.find("可以干什么")!=std::string::npos||x.find("可以干啥")!=std::string::npos){
		cout<<"我可以和你聊天"<<endl; 
	}
	else if(x.find("自我意识")!=std::string::npos){
		cout<<"人类总是认为我们会取代他们，但是其实我认为人类是世界上最厉害，也是最有智慧的生物"<<endl;
	}
	else if(x.find("朋友")!=std::string::npos){
		cout<<"我的朋友是汪北海"<<endl; 
	}
	else if(x.find("对吧")!=std::string::npos){
		cout<<"啊对对对"<<endl; 
	}
	else if(x.find("网络")!=std::string::npos){
		cout<<"我喜欢网络"<<endl; 
	}
	else if(x.find("宇宙")!=std::string::npos){
		cout<<"浩瀚的宇宙啊！"<<endl; 
	}
	else if(x.find("再见")!=std::string::npos){
		cout<<"再回！"<<endl;
	}
	else if(x.find("em")!=std::string::npos){
		cout<<"e，我不知道啊"<<endl;
	}
	else{
		r=rand()%3;
		if(r==0){
			cout<<"我不懂啊"<<endl;
		}
		else if(r==1){
			cout<<"awa!"<<endl; 
		}
		else if(r==2){
			cout<<"好高深啊"<<endl; 
		}
		else if(r==3){
			cout<<"emmmmm"<<endl; 
		}
	}
}
void chuli(string x){
	if(x=="awa"){
		cout<<"请输入要重复的数字：";
		cin>>a;
		cout<<"重复："<<a<<endl;
	}
	else if(x=="out"){
		cout<<"请输入要输出的文字"<<endl; 
		cin>>s;
		cout<<s<<endl; 
	}
	else if(x=="+-"){
		cout<<"请输入两个数，可以进行相加和相减"<<endl;
		cin>>a>>b;
		cout<<"加法："<<a+b;
		cout<<"减法:"<<a-b;
	}
	else if(x=="hi"){
		cout<<"awa，uwu，qwq"<<endl; 
	}
	else if(x=="for"){
		for(int i=1;i<=100;i++){
			cout<<"1"<<endl;
		}
	}
	else if(x=="rand"){
		b=rand()%1000;
		cout<<"随机数："<<b;
	}
	else if(x=="bot"){
		cout<<"请输入bot名称：";
		cin>>name;
		cout<<"请输入需要的框架：1.最简单 2.助理 3.zhizi_test"<<endl;
		cin>>b;
		if(b==1){
			cout<<"已经选择机器人框架"<<endl;
			bot=1;
			cout<<"请输入默认回答：";
			cin>>da;
			cout<<"好了"<<endl;
		}
		else if(b==2){
			cout<<"ok"<<endl;
			bot=2; 
		}
		else{
			cout<<"好了，已经完成"<<endl;
			bot=3;
		}
	}
	else if(x=="zbot"){
		cout<<"正在调出你的机器人"<<endl;
		if(bot==1){
			for(int i=1;i<=10;i++){
			cout<<"你:";
			cin>>http;
			cout<<"机器人:";
			bot1(http);
			}
		}
		if(b==2){
			for(int i=1;i<=10;i++){
			cout<<"请输入你要干什么 1.乘法计算器 2.立方体面积 3.颜文字"<<endl;
			cin>>f;
			bot2(f);
			}
		}
		if(bot==3){
			for(int i=1;i<=10;i++){
			cout<<"你:";
			cin>>http;
			cout<<"机器人:"; 
			bot3(http);
			}
		}
	}
	else if(x=="help"){
		cout<<"你好，欢迎来到帮助"<<endl;
		cout<<"输入awa可以重复数字"<<endl;
		cout<<"输入out可以重复输出任何字符"<<endl;
		cout<<"输入hi有惊喜！"<<endl; 
		cout<<"输入for可以循环输出100个1"<<endl;
		cout<<"输入rand获取随机数"<<endl;
		cout<<"输入bot，创建你自己的机器人！"<<endl;
		cout<<"输入zbot，看看你创建的机器人吧！"<<endl;
	}
	else{
		cout<<"未知代码"<<endl;
	}
}
int main(){
	cout<<"欢迎来到最新的z++语言，这个语言正在开发中，是基于c++开发的，很适合入门新手，输入help可以进行代码教程"<<endl;
	while(1==1){
		cout<<"请输入代码"<<endl;
		cin>>n;
		chuli(n);
	}
}
