#include <iostream>
#include <cstdlib>
using namespace std;
int a[100][100];
int t,f,r,n,q;
int main(){
	while(1==1){
		cout<<"��������Ҫ��ʲô 1.�������� 2.�鿴���� 3.help 4.�˳�"<<endl;
		cin>>n;
		if(n==1){
			cout<<"��������Ҫ���ʲô�� 1.���� 2.̫�� 3.С���� 4.���ĳ���ط� 5.��������"<<endl;
			cin>>q;
			if(q==1){
				cout<<"������������꣨1~100���� 56 57��"<<endl;
				cin>>t>>f;
				a[t][f]=1;
				cout<<"ok"<<endl; 
			}
			else if(q==2){
				cout<<"������̫�����꣨1~100 ��34 12��"<<endl;
				cin>>t>>f;
				a[t][f]=2;
				cout<<"����"<<endl;
			}
			else if(q==3){
				cout<<"���������С���ǵ����꣨1~100 ��2 8��"<<endl;
				cin>>t>>f;
				a[t][f]=3;
				cout<<"���ˣ�OK��"<<endl; 
			}
			else if(q==4){
				cout<<"������Ҫ��յĵط������꣨1~100 ��6 76��"<<endl;
				cin>>t>>f;
				a[t][f]=0;
				cout<<"�Ѿ����"<<endl;
			}
			else{
				cout<<"������Ҫ��ӵ����ǵ����꣨1~100 ��50 23��"<<endl;
				cin>>t>>f;
				a[t][f]=7;
				cout<<"���ú���"<<endl;
			}
		}
		else if(n==2){
			cout<<"һ����������棨����˵���뿴help����"<<endl;
			for(int i=1;i<=100;i++){
				for(int j=1;j<=100;j++){
					cout<<a[i][j];
				}
				cout<<endl;
			}
		}
		else if(n==3){
			cout<<"zhizi_bot:�Ҵ�������������ʾ���ǣ�̫��2������1��ʣ�µ�7��С����3��û����0�����һ��������������棡"<<endl;
		}
		else{
			cout<<"�Ƿ�Ҫ�˳� 1.�� 2.��"<<endl;
			cin>>q;
			if(q==1){
				return 0;
			}
			else{
				cout<<"û���˳�"<<endl;
			}
		}
	}
} 
