#include <iostream>
#include <cstdlib>
using namespace std;
int a,b;
int r,d;
string n;
int main(){
	cout<<"��ӭ�������Ļ���ð�գ�"<<endl;
	for(int i=1; ;i++){
		cout<<"������һ������:";
		cin>>d;
		a=rand()%100;
		b=rand()%100;
		if(a>b){
			cout<<"�õģ�������������"<<endl;
			r=rand()%2;
			if(r==0){
				cout<<"�����ʲô��"<<endl;
				cin>>n;
				cout<<"�õ�"<<endl;
			}
			if(r==1){
				cout<<"�����ʲô��"<<endl;
				cin>>n;
				cout<<"�õ�"<<endl;
			}
			if(r==2){
				cout<<"����Ϊ������ֺ���"<<endl;
				cin>>n;
				cout<<"�õ�"<<endl;
			}
		}
		else if(a<b){
			cout<<"������������"<<endl;
			cout<<"����������:";
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
				cout<<"���ѻش�"<<endl;
			}
		}
		else{
			cout<<"ƽ�֣�"<<endl;
		}
	}
} 
