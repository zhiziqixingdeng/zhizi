#include <iostream>
#include <cstdlib>
using namespace std;
struct zhang{
	string name;
	string ma;
}a[2];
int zhi1=10,cnt1=3,flag1=0,cun1=1;
int zhi2,cnt2,flag2,cun2;
int zhi3,cnt3,flag3,cun3;
int zhi4,cnt4,flag4,cun4;
int zhi5,cnt5,flag5,cun5;
int vip,r,r1,r2,r3;
int a1,b2,c3; 
int n,q;
int main(){
	cout<<"请输入你的名字:";
	cin>>a[1].name;
	if(a[1].name=="zhizi"){
		cout<<"开发者你好!"<<endl; 
		vip=1;
		zhi5=20;
		cnt5=8;
		cun5=1;
	}
	else{
		cout<<"访客你好"<<endl;
	}
	while(true){
		cout<<"请输入你要干什么 1.打走坏蛋 2.查看个人信息 3.施肥 4.商店 5.退出（没有存档) 6.疗伤植物"<<endl;
		cin>>n;
		if(n==1){
			cout<<"你的植物已经全部上阵!"<<endl;
			r=rand()%100;
			r1=rand()%1;
			r2=rand()%50;
			while(1){
				cout<<"请输入要哪个植物攻击？ 1.花生射手";
				if(cun2!=0){
					cout<<"2.橡木坚果"<<endl;
				} 
				if(cun3!=0){
					cout<<"3.苹果追击炮"<<endl;
				}
				if(cun4!=0){
					cout<<"4.眩晕土豆"<<endl;
				}
				if(cun5!=0){
					cout<<"5.向日葵"<<endl;
				}
				cin>>q;
				if(q==1&&zhi1>0){
					cout<<"对方受到了花生三连击，减掉18滴血"<<endl;
					r-=18;
				}
				else if(q==2&&cun2!=0&&zhi2>0){
					cout<<"对方受到了坚果攻击，减掉?滴血"<<endl;
					cnt2=rand()%40;
					r-=cnt2;
				}
				else if(q==3&&cun3!=0&&zhi3>0){
					cout<<"对方受到苹果追击炮的攻击，减掉苹果追击炮血量的一半"<<endl;
					r-=zhi3/2;
				}
				else if(q==4&&cnt4!=0&&zhi4>0){
					cout<<"对方收到眩晕土豆的攻击，受到17点伤害"<<endl;
					r-=17;
				}
				else if(q==5&&cnt5!=0&&zhi5>0){
					cout<<"对方受到向日葵攻击，扣掉了19滴血"<<endl;
					r-=19;
					cout<<"向日葵还增加了血量10滴"<<endl;
					zhi5+=10;
				}
				else{
					cout<<"植物不存在或者没有血量了"<<endl;
				}
				if(r<=0){
					cout<<"你胜利了！你成功的打败了敌人"<<endl;
					cout<<"你获得金币1个，银币一个，铜币2个"<<endl;
					a1++;
					b2++;
					c3+=2;
					break;
				}
				else if(zhi1<=0&&zhi2<=0&&zhi3<=0&&zhi4<=0&&zhi5<=5){
					cout<<"你失败了，你未能成功打败敌人"<<endl;
					cout<<"你只获得了，1个金币，1个铜币"<<endl;
					a1++;
					c3++;
					break; 
				}
				else{
					if(q==1){
						cout<<"你的植物花生被敌人攻击了"<<r2<<"点攻击"<<endl;
						zhi1-=r2;
					}
					else if(q==2&&flag2==0&&cun2!=0){
						cout<<"坚果被敌方攻击了"<<r2<<"滴血"<<endl;
						zhi2-=r2;
					}
					else if(q==2&&flag2==1&&cun2!=0){
						flag2=0;
						cout<<"你的坚果使用的护盾，抵挡住了敌方的攻击"<<endl;
					}
					else if(q==3&&cun3!=0){
						cout<<"你的植物苹果追击炮被敌方攻击了"<<r2<<"滴血"<<endl;
						zhi3-=r2;
					}
					else if(q==4&&cun4!=0){
						cout<<"你的植物土豆被攻击了"<<r2/2<<"滴血"<<endl;
						zhi4-=r2/2; 
					}
					else if(q==5&&cun5!=0){
						cout<<"向日葵被攻击了"<<r2<<"滴血"<<endl;
					}
					else{
						cout<<"由于作弊，所以双方此轮作废"<<endl;
					}
				}
			}
		}
		else if(n==2){
			cout<<"名字:"<<a[1].name<<endl;
			cout<<"等级:";
			if(a[1].name=="zhizi"){
				cout<<"开发者"<<endl;
			}
			else{
				cout<<"访客"<<endl;
			}
		}
		else if(n==3){
			cout<<"施肥需要一个铜币，是否要施肥？ 1.要 2.不要"<<endl;
			cin>>q;
			if(q==1&&c3>=1){
				cout<<"施肥成功！"<<endl;
				c3--;
			}
			else{
				cout<<"未能施肥"<<endl;
			}
		}
		else if(n==4){
			cout<<"请输入你要买什么？ 1.坚果 2.苹果追击炮"<<endl;
			cin>>q;
			if(q==1&&cun2==0&&a1>=1){
				cout<<"购买成功"<<endl;
				cun2=1;
				zhi2=30;
				a1--;
			}
			else if(q==2&&cun3==0&&a1>=1){
				cout<<"购买成功"<<endl;
				cun3=1;
				zhi3=50;
				a1--;
			}
			else{
				cout<<"购买失败"<<endl;
			}
		}
		else if(n==5){
			return 0;
		}
		else if(n==6){
			if(a1<2){
				cout<<"金币不足!"<<endl; 
			} 
			else{
				cout<<"回复成功！"<<endl;
				zhi1=10;
				if(cun2==1){
					zhi2=30;
				}
				if(cun3==1){
					zhi3=50;
				}
				if(cun4==1){
					zhi4=46;
				}
				if(cun5==1){
					zhi5=20;
				}
			}
		}
		}
	}
