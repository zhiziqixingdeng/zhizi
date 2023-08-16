#include <iostream>
#include <cstdlib>
using namespace std;
int a[100][100];
int t,f,r,n,q;
int main(){
	while(1==1){
		cout<<"请输入你要干什么 1.设置宇宙 2.查看宇宙 3.help 4.退出"<<endl;
		cin>>n;
		if(n==1){
			cout<<"请输入你要添加什么？ 1.地球 2.太阳 3.小行星 4.清空某个地方 5.其他行星"<<endl;
			cin>>q;
			if(q==1){
				cout<<"请输入地球坐标（1~100，如 56 57）"<<endl;
				cin>>t>>f;
				a[t][f]=1;
				cout<<"ok"<<endl; 
			}
			else if(q==2){
				cout<<"请输入太阳坐标（1~100 如34 12）"<<endl;
				cin>>t>>f;
				a[t][f]=2;
				cout<<"好了"<<endl;
			}
			else if(q==3){
				cout<<"请输入这颗小行星的坐标（1~100 如2 8）"<<endl;
				cin>>t>>f;
				a[t][f]=3;
				cout<<"好了，OK了"<<endl; 
			}
			else if(q==4){
				cout<<"请输入要清空的地方的坐标（1~100 如6 76）"<<endl;
				cin>>t>>f;
				a[t][f]=0;
				cout<<"已经清空"<<endl;
			}
			else{
				cout<<"请输入要添加的行星的坐标（1~100 如50 23）"<<endl;
				cin>>t>>f;
				a[t][f]=7;
				cout<<"设置好了"<<endl;
			}
		}
		else if(n==2){
			cout<<"一下是你的宇宙（具体说明请看help）："<<endl;
			for(int i=1;i<=100;i++){
				for(int j=1;j<=100;j++){
					cout<<a[i][j];
				}
				cout<<endl;
			}
		}
		else if(n==3){
			cout<<"zhizi_bot:我打算用数字来表示行星，太阳2，地球1，剩下的7，小行星3，没有是0，你可一敬请设置你的宇宙！"<<endl;
		}
		else{
			cout<<"是否要退出 1.是 2.否"<<endl;
			cin>>q;
			if(q==1){
				return 0;
			}
			else{
				cout<<"没有退出"<<endl;
			}
		}
	}
} 
