#include <iostream>
#include <cstdlib>
using namespace std;
int a[4];
int a1,b1,c1,a2,b2,c2;
int r,sdf;
string str;
int cnt1,cnt2,cnt3;
int main(){
	while(1==1){
		r=rand()%8+1;
		cout<<"��ӭ�����������о֣����뿪ʼ���Կ�ʼ��Ϸ������help�������"<<endl;
		cin>>str;
		if(str=="help"){
			cout<<"����Ǳ��ֵĶ�������ÿ�ε������ƶ�������ģ����Ŀ���ǻ��9��ʤ���ƣ�������������9���Ļ�"<<endl;
			cout<<"��ᡣ�������������"<<endl;
			cout<<"������Ϸ����������npc�������ˣ����������"<<endl;
			cout<<"����Ϸ�У�ֻ��������ıȴ�С��û�������ģ����Ի�ɫ"<<endl;
			cout<<"�����ƶ����Դ�һ�����"<<endl;
			cout<<"�����ų���"<<endl;
			cout<<"���벻�ڱ����������ֿ���Ҫ����"<<endl;
			cout<<"�����벻Ҫ����Ŷ����Ϊ�����ǲ���"<<endl;
			cout<<"ף����Ϸ��죬���Ǹ�������ʵ����֤��Ŷ"<<endl;
			cout<<"(С��ʾ��Ҫ������ʵ����û������)"<<endl; 
			cout<<"(С��ʾ2����ʵ����ǿ���������������ģ���ԭ�治һ��)"<<endl; 
		}
		else if(str=="��ʼ"){
			while(1==1){
			for(int i=1;i<=4;i++){
			int r=rand()%8+1;
			cout<<i<<"����:"<<r<<endl; 
			a[i]=r;
			}
			cout<<"�����ȳ���:";
			cin>>a1;
			if(a1==0||a1==1||a1==2||a1==3){
				cout<<"�����:"<<a[a1]<<endl; 
				a1=a[a1]; 
			}
			else{
				cout<<"��:Ҫ����"<<endl;
			}
			r=rand()%8+1;
			if(r<=a1){
				cout<<"1��:Ҫ����"<<endl;
			}
			else{
				cout<<"1�ų���"<<r<<endl;
				b1=r;
			}
			r=rand()%8+1;
			if(r<=a1){
				cout<<"2�ţ�Ҫ����"<<endl;
			}
			else{
				cout<<"2��:"<<r<<endl;
				c1=r;
			}
			for(int i=1;i<=4;i++){
			int r=rand()%8+1;
			cout<<i<<"����:"<<r<<endl; 
			a[i]=r;
			}
			cout<<"��������Ҫ�����ưɣ����С��ǰ��2��3��ѡ�ֵ����Զ�Ҫ����)"<<endl;
			cin>>a2;
			if(a[a2]<c1||a[a2]<b1){
				cout<<"��:Ҫ����"<<endl;
			}
			else{
				cout<<"�����:"<<a[a2]<<endl;
				a2=a[a2];
			}
			r=rand()%8+1;
			if(r<=a2||r<=c1||r<=a1){
			cout<<"1�ţ�Ҫ����"<<endl;
			}
			else{
				cout<<"1�ų���:"<<r<<endl;
				b2=r; 
			}
			r=rand()%8+1;
			if(r<=a2||r<=c1||r<=c2||r<=a1){
				cout<<"2��:Ҫ����"<<endl;
			}
			else{
				cout<<"2�ų���:"<<r<<endl;
				c2=r;
			}
			cout<<"���ֽ���"<<endl;
			if(a1+a1>c1+c2&&a1+a2>b1+b2){
				cnt1++;
				cout<<"���ʤ��"<<endl;
			}
			else if(b1+b2>c1+c2&&b1+b2>a1+a2){
				cnt2++;
				cout<<"����ʤ��"<<endl;
			}
			else if(c1+c2>a1+a2&&c1+c2>b1+b2){
				cnt3++;
				cout<<"����ʤ��"<<endl;
			}
			else{
				cout<<"ƽ��"<<endl;
			}
			if(cnt1>=9){
				cout<<"���ʤ����ȫ�ֻ�ʤ��"<<endl;
				break;
			}
			if(cnt2>=9||cnt3>=9){
				cout<<"���ֻ�ʤ"<<endl;
				break; 
			}
			}
		}
	}
} 

