#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
string name;
int n,w;
struct ren{
	int hao;
	int si;
	int shen;
	int flag;
	int shou;
}en[6];
struct p{
	int hao;
	int piao;
}pi[6];
int cnt,ans,r; 
int a,b,c,d;
int main(){
	cout<<"��ӭ��������ɱ"<<endl;
	cout<<"�������������:";
	cin>>name;
	cout<<"��ð�"<<name<<endl;
	while(1==1){
		for(int i=1;i<=6;i++){
			en[i].si=0;
			en[i].flag=0;
			en[i].shou=0;
			en[i].shen=0;
		} 
		a=0;
		b=0;
		c=0;
		cout<<"��������Ҫ��ʲô 1.��ʼ��Ϸ 2.�̵� 3.�˳���Ϸ"<<endl;
		cin>>n;
		if(n==1){
			cout<<"���������"<<endl;
			r=rand()%5+1;
			en[r].shen=1;//����
			a=r;
			while(r==a){
				r=rand()%5+1;
			}
			b=r;
			en[b].shen=2;//���� 
			while(r==a&&r==b){
				r=rand()%5+1;
			}
			c=r;
			en[c].shen=3;//Ԥ�Լ� 
			sleep(1);
			cout<<"��Ϸ��ʼ!"<<endl;
			if(en[1].shen==0){
				cout<<"����ƶ��"<<endl;
			} 
			else if(en[1].shen==1){
				cout<<"��������"<<endl;
			}
			else if(en[1].shen==2){
				cout<<"��������"<<endl;
			}
			else if(en[1].shen==3){
				cout<<"����Ԥ�Լ�"<<endl;
			}
			else{
				cout<<"�������bug"<<endl;
				return 0;
			}
			cout<<"��ʼ��Ϸ"<<endl;
			cout<<"����1��"<<endl;
			sleep(1);
			while(1==1){
				for(int i=1;i<=6;i++){
				cout<<i<<"�ţ�";
				if(en[i].si==0){
					cout<<"����"<<endl;
				} 
				else{
					cout<<"����"<<endl;
				}
				sleep(0.1);
			}
			cout<<"��������"<<endl;
			cout<<"����������"<<endl;
			sleep(1);
			if(en[1].shen==2){
				cout<<"��������Ҫ����˭?"<<endl;
				cin>>w;
				if(en[w].si==0&&en[w].shen!=2){
					cout<<"�����ɹ�!"<<endl;
					sleep(1);
				}
				else if(en[w].shen==2){
					cout<<"���������Լ�!"<<endl;
				}
				else{
					cout<<"��������������߲�����"<<endl;
				}
			}
			else{
				cout<<"������������Ҫ��������"<<endl;
				if(en[b].si==0){
				r=rand()%5+1;
				en[r].shou=1;
				sleep(1);
				cout<<"���������"<<endl;
				}
				else{
					cout<<"�����Ѿ�����"<<endl;
					sleep(1);
				}
			}
			cout<<"����������"<<endl;
			sleep(1);
			if(en[1].shen==1){
				cout<<"��������Ҫ�����˵ı��:";
				cin>>w;
				if(en[w].si==1||w==1){
					cout<<"���󣬲��ܵ������Լ������Ѿ����������"<<endl;
					sleep(1);
				}
				else{
					if(en[w].shou==1){
						cout<<"����ұ�����������"<<endl;
						en[w].shou=0;
					} 
					else{
						cout<<"���˳ɹ�"<<endl;
						en[w].si=1;
						d=w;
					}
				}
			}
			else{
				while(r==a&&en[r].si==1){
					r=rand()%5+1;
				}
				en[r].si=1; 
				d=r; 
				sleep(1); 
				cout<<"���������"<<endl;
			}
			cout<<"Ԥ�Լ�������"<<endl;
			sleep(1);
			if(en[1].shen==3){
				cout<<"��������Ҫ����˭�����:";
				cin>>w;
				if(en[w].si==1){
					cout<<"������Ѿ�����"<<endl;
				}
				else{
					if(en[w].shen==0){
						cout<<"����ƶ��"<<endl;
					}
					else if(en[w].shen==1){
						cout<<"��������!"<<endl;
					}
					else if(en[w].shen==2){
						cout<<"��������"<<endl;
					}
					else{
						cout<<"����Ԥ�Լң�����ô����?"<<endl;
					}
				}
			}
			else{
				cout<<"��������ҪԤ��˭"<<endl;
				r=rand()%5+1;
				if(r==3){
					en[c].flag=1;
				}
				sleep(1);
				cout<<"Ԥ�Լ������"<<endl;
			}
			sleep(1);
			cout<<"������"<<endl;
			if(d==0){
				cout<<"�����Ǹ�ƽ��ҹ!"<<endl;
			} 
			else{
				cout<<d<<"�ű����˸ɵ���"<<endl;
			}
			d=0;
			for(int i=1;i<=6;i++){
				pi[i].hao=i;
				pi[i].piao=0;
			}
			cout<<"��ʼͶƱ"<<endl;
			cout<<"��ܰС��ʾ����Ҫ������ 1.��Ҫ�� 2.��Ҫ"<<endl;
			cin>>w;
			if(w==1){
				system("cls");
			} 
			else{
				cout<<"�ð�"<<endl;
			}
			cout<<"��ʼͶƱ"<<endl;
			sleep(1);
			for(int i=1;i<=6;i++){
				en[i].flag=0;
				if(i==1){
					cout<<"��������ҪͶ��˭:";
					cin>>w;
					if(w<=1||w>6){
						cout<<"����!"<<endl;
					}
					else{
						cout<<"�Ѿ�ͶƱ"<<endl;
						sleep(1);
						pi[w].piao++;
					}
				}
				else{
					if(en[i].si==0){
					while(r==i||en[r].si==1){
						r=rand()%5+1;
					}
					cout<<i<<"��Ͷ����"<<r<<"��"<<endl;
					pi[r].piao++;
					sleep(1);
					}
				}
			}
			cout<<"ͶƱ����!"<<endl;
			sleep(1);
			cout<<"ͳ��Ʊ����"<<endl;
			for(int i=1;i<=6;i++){
				for(int j=1;j<=6-i;j++){
					if(pi[j].piao<pi[j+1].piao){
						swap(pi[j].piao,pi[j+1].piao);
						swap(pi[j].hao,pi[j+1].hao);
					}
				}
			}
				cout<<pi[1].hao<<"��Ͷ��"<<endl;
				if(en[pi[1].hao].shen==1){
					cout<<"�������ˣ����˻�ʤ!"<<endl;
					break;
				}
				else{
					cout<<"���Ǻ��ˣ���Ϸ����"<<endl;
					en[pi[1].hao].si=1; 
				}
				if(en[1].si==1){
					cout<<"��������"<<endl;
					break;
				}
			}
		}
	}
}
