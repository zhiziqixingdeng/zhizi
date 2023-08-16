#include <iostream>
#include <cstdlib>
using namespace std;
struct shu{
	string name;
	int flag;
	string banshe;
	string zhe;
}s[100000];
int n,w,a,cnt;
string c;
int main(){
	cout<<"欢迎来到图书管理系统"<<endl;
	while(1==1){
		cout<<"请输入你要干什么 1.添加图书 2.修改图书 3.搜索图书 4.图书列表 5.客户端进入"<<endl;
		cin>>n;
		if(n==1){
			cnt++;
			cout<<"请输入这本书的名字:";
			cin>>s[cnt].name;
			cout<<"请输入这本书的出版社:";
			cin>>s[cnt].banshe;
			cout<<"请输入这本书的作者:";
			cin>>s[cnt].zhe;
			cout<<"完成,这本书编号为:"<<cnt<<endl;
		}
		else if(n==2){
			cout<<"请输入这本书的编号:";
			cin>>w;
			cout<<"请重新输入这本书的名字:";
			cin>>s[w].name;
			cout<<"请输入这本书的出版社:";
			cin>>s[w].banshe;
			cout<<"请输入这本书的作者:";
			cin>>s[w].zhe;
			cout<<"修改完成"<<endl;
		
		}
		else if(n==3){
			cout<<"请输入这本书的名字:";
			cin>>
		}
	}
}
