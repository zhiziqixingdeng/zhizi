#include <iostream>
using namespace std;
struct hua{
	string zhu;
	string hao;
}c[10000];
int n,a,cnt;
int main(){
	for(int i=1; ;i++){
		cout<<"你好，我是通讯录管理系统，请问你要干什么 1.添加联系人 2.查看所有联系人 3.查找联系人 4.退出"<<endl;
		cin>>n;
		if(n==1){
				cout<<"请输入此电话的名字：";
				cin>>c[cnt].zhu;
				cout<<endl<<"请输入此电话的号码:";
				cin>>c[cnt].hao;
				cout<<"添加成功！这个的编号是："<<cnt<<endl; 
		}
		else if(n==2){
			cout<<"以下为通讯录:"<<endl;
			for(int i=1;i<=cnt;i++){
				cout<<"名字："<<c[cnt].zhu<<" "<<"电话号码:"<<c[cnt].hao<<endl;
			}
		}
		else if(n==3){
			cout<<"请输入要查找的人的编号"<<endl;
			cin>>a;
			if(a>cnt){
				cout<<"未找到联系人"<<endl;
			}
			else{
				cout<<"名字："<<c[a].zhu<<"电话号码："<<c[a].hao<<endl;
			} 
		}
		else{
			cout<<"无效的操作"<<endl;
		}
	} 
}
