#include <iostream>
#include <cstdlib>
using namespace std;
int a,b;
int r,d;
string n;
int main(){
	cout<<"欢迎来到真心话大冒险！"<<endl;
	for(int i=1; ;i++){
		cout<<"请输入一个数字:";
		cin>>d;
		a=rand()%100;
		b=rand()%100;
		if(a>b){
			cout<<"好的，我来问你问题"<<endl;
			r=rand()%2;
			if(r==0){
				cout<<"你最爱吃什么？"<<endl;
				cin>>n;
				cout<<"好的"<<endl;
			}
			if(r==1){
				cout<<"你最爱干什么？"<<endl;
				cin>>n;
				cout<<"好的"<<endl;
			}
			if(r==2){
				cout<<"你认为你的名字好吗？"<<endl;
				cin>>n;
				cout<<"好的"<<endl;
			}
		}
		else if(a<b){
			cout<<"你来问我问题"<<endl;
			cout<<"请输入问题:";
			cin>>n;
			int r=rand()%2;
			cout<<endl<<endl;
			if(r==0){
				cout<<"emmmmmmmm"<<endl;
			}
			else if(r==1){
				cout<<"false!"<<endl; 
			}
			else{
				cout<<"很难回答"<<endl;
			}
		}
		else{
			cout<<"平局！"<<endl;
		}
	}
} 
