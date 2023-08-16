#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
struct pin{
	string ming;
	int liang;
	int hao;
	int gou;
	int jia;
	int lol;
}c[10000];//商品结构 
string sdgf,fang,ff;
int ma;
int n,w,ling,flag,cctv,http,html;
int ping[100000],jun,cnt,temp;//用于统计用户评价 
int main(){
	cout<<"欢迎来到商店系统，该系统由zhizi开发"<<endl;
	cout<<"请输入您商店的名字:";
	cin>>sdgf;
	cout<<"请输入商店的联系方式:";
	cin>>fang;
	cout<<"欢迎!"<<endl;
	while(1==1){
		cout<<"请输入您要干什么 1.添加商品 2.修改商品信息 3.查找商品 4.添加商店推荐商品 5.进入客户端 6.查看评价分数"<<endl;
		cin>>n;
		if(n==1){
			cnt++; 
			cout<<"请输入这个商品的名称:";
			cin>>c[cnt].ming;
			cout<<"请输入这个商品的存货:";
			cin>>c[cnt].liang;
			cout<<"请输入这个商品的编号:";
			cin>>c[cnt].hao;
			cout<<"请输入商品的价格:";
			cin>>c[cnt].jia; 
			cout<<"完成"<<endl;
			http++;
		}
		else if(n==2){
			cout<<"请输入这个商品的编号:";
			cin>>cctv;
			for(int i=1;i<=cctv;i++){
				if(cctv==c[i].hao){
					cout<<"找到商品："<<c[i].ming<<endl;
					cout<<"请输入这个商品是不是您想要更改的 1.是 2.不是"<<endl;
					cin>>w;
					if(w==1){
						cout<<"请输入商品的新名字:";
						cin>>c[i].ming;
						cout<<"请输入商品的新价格:";
						cin>>c[i].jia;
						cout<<"请输入商品的新存货:";
						cin>>c[i].liang;
						cout<<"请输入商品新的编号:";
						cin>>c[i].hao;
						cout<<"好了，完成"<<endl;
					}
					else{
						cout<<"好的，我们继续搜索"<<endl;
					}
				}
			}
			cout<<"搜索结束"<<endl;
		}
		else if(n==3){
			cout<<"请输入商品编号:";
			cin>>w;
			for(int i=1;i<=cnt;i++){
				if(w==c[i].hao){
					cout<<"找到商品:"<<endl;
					cout<<"商品名称:"<<c[i].ming<<endl;
					cout<<"商品价格:"<<c[i].jia<<endl;
					cout<<"商品编号:"<<c[i].hao<<endl;
					cout<<"商品剩余存货:"<<c[i].liang<<endl;
					cout<<"---------------------------"<<endl; 
				}
			}
		}
		else if(n==4){
			cout<<"请输入推荐商品编号：";
			cin>>w;
			for(int i=1;i<=cnt;i++){
				if(w==c[i].hao){
					cout<<"是这个吗:"<<c[i].ming<<"1.是 2.不是"<<endl;
					cin>>cctv;
					if(cctv==1){
						cout<<"该商品已经进入推荐列表"<<endl;
						c[i].lol=1;
					}
					else{
						cout<<"继续搜寻"<<endl;
					}
				}
			}
		}
		else if(n==5){
			cout<<"请输入回到服务端的密码(请6位数字):";
			cin>>ma;
			for(int i=1;i<=100;i++){
				cout<<"  "<<endl; 
			}
			cout<<"欢迎来到"<<sdgf<<"商店"<<endl;
			cout<<"要看看推荐商品吗? 1.看 2.不看"<<endl;
			cin>>cctv;
			if(cctv==1){
				cout<<"推荐商品:";
				for(int j=1;j<=http;j++){
					if(c[j].lol==1){
						cout<<"推荐商品:"<<c[j].ming<<endl;
						cout<<"价格:"<<c[j].jia<<endl;
						cout<<"--------------------------"<<endl;
					}
				}
			} 
			for(int i=1;flag==0;i++){
				while(n!=ma){
					cout<<"请输入您要干什么 1.查看商品列表 2.搜索商品 3.购买商品 4.回到商店端 5.评价商店"<<endl;
					cin>>w;
					if(w==1){
						cout<<"商品列表:"<<endl;
						for(int i=1;i<=http;i++){
							cout<<"商品名称:"<<c[i].ming<<endl;
							cout<<"商品价格:"<<c[i].jia<<endl;
							cout<<"商品编号:"<<c[i].hao<<endl;
						}
					}
					else if(w==2){
						cout<<"请输入商品编号:";
						cin>>cctv;
						for(int i=1;i<=http;i++){
							if(cctv==c[i].hao){
								cout<<"商品："<<c[i].ming<<endl;
								cout<<"价格为"<<c[i].jia<<endl;
								cout<<"目前还剩下"<<c[i].liang<<"存货"<<endl;
							}
						}
					}
					else if(w==3){
						cout<<"请输入需要购买的商品名称:";
						cin>>ff;
						for(int i=1;i<=http;i++){
							if(ff==c[i].ming){
								cout<<"你要购买"<<c[i].ming<<"吗? 1.要 2.不要"<<endl;
								cin>>cctv;
								if(cctv==1&&c[i].liang>=1){
									cout<<"请找到店员"<<endl;
									temp=c[i].liang;
									temp--;
									c[i].liang=temp;
								}
								else if(c[i].liang==0){
									cout<<"这个商品没有了"<<endl;
								}
								else{
									cout<<"好的"<<endl;
								}
							} 
						}
					}
					else if(w==4){
						cout<<"请输入商品端密码:";
						cin>>cctv;
						if(cctv==ma){
							cout<<"好的，欢迎"<<endl;
							break;
						}
						else{
							cout<<"密码错误，权限不足"<<endl;
						}
					}
					else if(w==5){
						cout<<"请输入您对商店的评价（1~10分，输入数字)"<<endl;
						cin>>html;
						if(html>=1&&html<=10){
							cout<<"评价成功!"<<endl;
							cnt++;
							ping[cnt]=html;
							for(int i=1;i<=cnt;i++){
								jun=jun+ping[i];
							}
							jun=jun/cnt;
						}
						else{
							cout<<"超出范围，评价失败"<<endl;
						}
					}
					else{
						cout<<"错误"<<endl;
					}
				}
			} 
		}
		else if(n==6){
			cout<<"评价分数为(最低1，最高10):"<<jun<<endl;
			if(jun<=4){
				cout<<"商店还需要继续加油哦"<<endl;
			}
			else if(jun>5&&jun<=7){
				cout<<"很不错的商店"<<endl;
			}
			else{
				cout<<"这个商店实在是太棒了!"<<endl;
			}
		}
		else{
			cout<<"错误"<<endl;
		}
	}
}
