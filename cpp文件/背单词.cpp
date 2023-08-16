#include <iostream>
#include <cstdlib>
using namespace std;
string a,b,c,d,e,f,g,h;
string n; 
string name;
int main(){
	cout<<"欢迎来到由汪北海管理的背单词系统，请输入你的名字:";
	cin>>name;
	cout<<endl<<"欢迎"<<name<<endl;
	cout<<"请输入你要背的第一个单词:";
	cin>>a;
	cout<<endl<<"请输入你要背的第2个单词:";
	cin>>b; 
	cout<<endl<<"请输入你要背的第3个单词:";
	cin>>c; 
	cout<<endl<<"请输入你要背的第4个单词:";
	cin>>d;
	cout<<endl<<"请输入你要背的第1个单词的中文:";
	cin>>e;
	cout<<endl<<"请输入你要背的第2个单词的中文:";
	cin>>f;
	cout<<endl<<"请输入你要背的第3个单词的中文:";
	cin>>g;
	cout<<endl<<"请输入你要背的第4个单词的中文:";
	cin>>h;
	cout<<"ok"<<endl;
	for(int i=1;i<=40;i++){
		cout<<endl;
	}
	while(1==1){
		int r=rand()%3;
		if(r==0){
			cout<<"请输入"<<a<<"的中文意思"<<endl;
			cin>>n;
			if(n==e){
				cout<<"正确"<<endl;
			}
			else{
				cout<<"错误，真正意思是:"<<e<<endl;; 
			}
		}
		else if(r==1){
			cout<<"请输入"<<b<<"的中文意思"<<endl;
			cin>>n;
			if(n==f){
				cout<<"正确"<<endl;
			}
			else{
				cout<<"错误，真正意思是:"<<f<<endl;; 
			}
		}
		else if(r==2){
			cout<<"请输入"<<c<<"的中文意思"<<endl;
			cin>>n;
			if(n==g){
				cout<<"正确"<<endl;
			}
			else{
				cout<<"错误，真正意思是:"<<g<<endl;; 
			}
		}
		else if(r==3){
			cout<<"请输入"<<d<<"的中文意思"<<endl;
			cin>>n;
			if(n==h){
				cout<<"正确"<<endl;
			}
			else{
				cout<<"错误，真正意思是:"<<h<<endl;; 
			}
		}
	}
}
