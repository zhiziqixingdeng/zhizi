#include <iostream>
using namespace std;
string n,a,v; 
int s,q;
int main(){
	while(true){
	cout<<"��ӭ�������Ӽ��ܣ���˵����Ҫ��ʲô��1.ע��(ֻ����һ���˺�) 2.��½ 3.�˳������ᱣ���κ��˺���Ϣ��"<<endl;
	cin>>s;
	if(s==1){
		cout<<"�������˺���:";
		cin>>n;
		cout<<endl<<"���������룺";
		cin>>a;
		cout<<"�˺�ע�����"<<endl; 
	}
	else if(s==2){
		cout<<"��������֤�� 2+72"<<endl;
		int r;
		cin>>r;
		if(r==74){
			cout<<"��ϲ�ɹ���"<<endl;
			cout<<"�������û���"<<endl;
			cin>>v;
			if(v==n){
				cout<<"����������"<<endl;
				cin>>v;
				if(v==a){
					cout<<"��ȷ����ӭ���룡"<<endl;
					for(int i=1; ;i++){
						cout<<"hi����������Ҫ��ʲô 1.���� 2.���� 3.�˳���½ 4.��Ȩ����"<<endl;
						cin>>q;
						if(q==1){
							cout<<"������Ҫ���ܵ�Ӣ�Ļ��߲��������ƴ��:";
							cin>>v;
							for(int j=1;j<=v.length();j++){
								v[j]=v[j]+2;
							}
							cout<<"���ܵ����֣�"<<v<<endl;
						}
						else if(q==2){
							cout<<"�������ڱ�������ܹ������֣�";
							cin>>v;
							for(int j=1;j<=v.length();j++){
								v[j]=v[j]-2;
							}
							cout<<"���ܺ�����֣�"<<v<<endl;
						}
						else if(q==3){
							cout<<"�õ�"<<endl;
							break;
						}
						else if(q==4){
							cout<<"������������ӣ�������ֱ�Ӱ�����������ҵ��;"<<endl;
						}
						else{
							cout<<"����"<<endl;
						}
					} 
				}
				else{
					cout<<"�������"<<endl;
				}
			}
			else{
				cout<<"�û�������"<<endl;
			}
		}
		else{
			cout<<"��֤��������п����ǻ����ˣ�"<<endl;
		}
	}
	else{
		cout<<"�ټ���"<<endl;
		return 0;
	}
	}
}
