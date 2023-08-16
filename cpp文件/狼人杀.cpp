#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
string name;
int n,w;
struct ren{
	int hao;
	int si;
	int shen;
	int flag;
	int shou;
}en[6];
struct p{
	int hao;
	int piao;
}pi[6];
int cnt,ans,r; 
int a,b,c,d;
int main(){
	cout<<"欢迎来到狼人杀"<<endl;
	cout<<"请输入你的名字:";
	cin>>name;
	cout<<"你好啊"<<name<<endl;
	while(1==1){
		for(int i=1;i<=6;i++){
			en[i].si=0;
			en[i].flag=0;
			en[i].shou=0;
			en[i].shen=0;
		} 
		a=0;
		b=0;
		c=0;
		cout<<"请输入你要干什么 1.开始游戏 2.商店 3.退出游戏"<<endl;
		cin>>n;
		if(n==1){
			cout<<"分配身份中"<<endl;
			r=rand()%5+1;
			en[r].shen=1;//狼人
			a=r;
			while(r==a){
				r=rand()%5+1;
			}
			b=r;
			en[b].shen=2;//守卫 
			while(r==a&&r==b){
				r=rand()%5+1;
			}
			c=r;
			en[c].shen=3;//预言家 
			sleep(1);
			cout<<"游戏开始!"<<endl;
			if(en[1].shen==0){
				cout<<"你是贫民"<<endl;
			} 
			else if(en[1].shen==1){
				cout<<"你是狼人"<<endl;
			}
			else if(en[1].shen==2){
				cout<<"你是守卫"<<endl;
			}
			else if(en[1].shen==3){
				cout<<"你是预言家"<<endl;
			}
			else{
				cout<<"程序出现bug"<<endl;
				return 0;
			}
			cout<<"开始游戏"<<endl;
			cout<<"你是1号"<<endl;
			sleep(1);
			while(1==1){
				for(int i=1;i<=6;i++){
				cout<<i<<"号：";
				if(en[i].si==0){
					cout<<"活着"<<endl;
				} 
				else{
					cout<<"死亡"<<endl;
				}
				sleep(0.1);
			}
			cout<<"天黑请闭眼"<<endl;
			cout<<"守卫请睁眼"<<endl;
			sleep(1);
			if(en[1].shen==2){
				cout<<"请输入你要守卫谁?"<<endl;
				cin>>w;
				if(en[w].si==0&&en[w].shen!=2){
					cout<<"守卫成功!"<<endl;
					sleep(1);
				}
				else if(en[w].shen==2){
					cout<<"不能守卫自己!"<<endl;
				}
				else{
					cout<<"该玩家已死亡或者不存在"<<endl;
				}
			}
			else{
				cout<<"守卫请输入你要守卫的人"<<endl;
				if(en[b].si==0){
				r=rand()%5+1;
				en[r].shou=1;
				sleep(1);
				cout<<"守卫请闭眼"<<endl;
				}
				else{
					cout<<"守卫已经死亡"<<endl;
					sleep(1);
				}
			}
			cout<<"狼人请睁眼"<<endl;
			sleep(1);
			if(en[1].shen==1){
				cout<<"请输入你要刀的人的编号:";
				cin>>w;
				if(en[w].si==1||w==1){
					cout<<"错误，不能刀掉你自己或者已经死亡的玩家"<<endl;
					sleep(1);
				}
				else{
					if(en[w].shou==1){
						cout<<"该玩家被守卫保护了"<<endl;
						en[w].shou=0;
					} 
					else{
						cout<<"刀人成功"<<endl;
						en[w].si=1;
						d=w;
					}
				}
			}
			else{
				while(r==a&&en[r].si==1){
					r=rand()%5+1;
				}
				en[r].si=1; 
				d=r; 
				sleep(1); 
				cout<<"狼人请闭眼"<<endl;
			}
			cout<<"预言家请睁眼"<<endl;
			sleep(1);
			if(en[1].shen==3){
				cout<<"请输入你要看到谁的身份:";
				cin>>w;
				if(en[w].si==1){
					cout<<"该玩家已经死亡"<<endl;
				}
				else{
					if(en[w].shen==0){
						cout<<"他是贫民"<<endl;
					}
					else if(en[w].shen==1){
						cout<<"他是狼人!"<<endl;
					}
					else if(en[w].shen==2){
						cout<<"他是守卫"<<endl;
					}
					else{
						cout<<"你是预言家，你这么闲吗?"<<endl;
					}
				}
			}
			else{
				cout<<"请输入你要预言谁"<<endl;
				r=rand()%5+1;
				if(r==3){
					en[c].flag=1;
				}
				sleep(1);
				cout<<"预言家请闭眼"<<endl;
			}
			sleep(1);
			cout<<"天亮了"<<endl;
			if(d==0){
				cout<<"今天是个平安夜!"<<endl;
			} 
			else{
				cout<<d<<"号被狼人干掉了"<<endl;
			}
			d=0;
			for(int i=1;i<=6;i++){
				pi[i].hao=i;
				pi[i].piao=0;
			}
			cout<<"开始投票"<<endl;
			cout<<"温馨小提示，需要清屏吗 1.需要啊 2.不要"<<endl;
			cin>>w;
			if(w==1){
				system("cls");
			} 
			else{
				cout<<"好吧"<<endl;
			}
			cout<<"开始投票"<<endl;
			sleep(1);
			for(int i=1;i<=6;i++){
				en[i].flag=0;
				if(i==1){
					cout<<"请输入你要投给谁:";
					cin>>w;
					if(w<=1||w>6){
						cout<<"错误!"<<endl;
					}
					else{
						cout<<"已经投票"<<endl;
						sleep(1);
						pi[w].piao++;
					}
				}
				else{
					if(en[i].si==0){
					while(r==i||en[r].si==1){
						r=rand()%5+1;
					}
					cout<<i<<"号投给了"<<r<<"号"<<endl;
					pi[r].piao++;
					sleep(1);
					}
				}
			}
			cout<<"投票结束!"<<endl;
			sleep(1);
			cout<<"统计票数中"<<endl;
			for(int i=1;i<=6;i++){
				for(int j=1;j<=6-i;j++){
					if(pi[j].piao<pi[j+1].piao){
						swap(pi[j].piao,pi[j+1].piao);
						swap(pi[j].hao,pi[j+1].hao);
					}
				}
			}
				cout<<pi[1].hao<<"被投出"<<endl;
				if(en[pi[1].hao].shen==1){
					cout<<"他是狼人，好人获胜!"<<endl;
					break;
				}
				else{
					cout<<"他是好人，游戏继续"<<endl;
					en[pi[1].hao].si=1; 
				}
				if(en[1].si==1){
					cout<<"您死亡了"<<endl;
					break;
				}
			}
		}
	}
}
