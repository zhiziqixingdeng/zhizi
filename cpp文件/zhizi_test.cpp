#include <iostream>
#include <cstdlib>
using namespace std;
string n,a,m;
int r,cnt;
void chuli(string x){
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
		cnt++;
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
int main(){
	cout<<"你好，请问如何称呼？"<<endl;
	cout<<"你:";
	cin>>a;
	cout<<"zhizi_test:你好啊"<<"，"<<a<<endl;
	while(1==1){
		cout<<"你:";
		cin>>n;
		cout<<endl;
		cout<<"zhizi_test:";
		chuli(n);
		cout<<endl;
		if(cnt==2){
		cout<<"已经开启防卫模式，您已被踢出-汪北海"<<endl;
		return 0;
		}
	} 
} 
