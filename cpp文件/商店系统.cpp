#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
struct pin{
	string ming;
	int liang;
	int hao;
	int gou;
	int jia;
	int lol;
}c[10000];//��Ʒ�ṹ 
string sdgf,fang,ff;
int ma;
int n,w,ling,flag,cctv,http,html;
int ping[100000],jun,cnt,temp;//����ͳ���û����� 
int main(){
	cout<<"��ӭ�����̵�ϵͳ����ϵͳ��zhizi����"<<endl;
	cout<<"���������̵������:";
	cin>>sdgf;
	cout<<"�������̵����ϵ��ʽ:";
	cin>>fang;
	cout<<"��ӭ!"<<endl;
	while(1==1){
		cout<<"��������Ҫ��ʲô 1.�����Ʒ 2.�޸���Ʒ��Ϣ 3.������Ʒ 4.����̵��Ƽ���Ʒ 5.����ͻ��� 6.�鿴���۷���"<<endl;
		cin>>n;
		if(n==1){
			cnt++; 
			cout<<"�����������Ʒ������:";
			cin>>c[cnt].ming;
			cout<<"�����������Ʒ�Ĵ��:";
			cin>>c[cnt].liang;
			cout<<"�����������Ʒ�ı��:";
			cin>>c[cnt].hao;
			cout<<"��������Ʒ�ļ۸�:";
			cin>>c[cnt].jia; 
			cout<<"���"<<endl;
			http++;
		}
		else if(n==2){
			cout<<"�����������Ʒ�ı��:";
			cin>>cctv;
			for(int i=1;i<=cctv;i++){
				if(cctv==c[i].hao){
					cout<<"�ҵ���Ʒ��"<<c[i].ming<<endl;
					cout<<"�����������Ʒ�ǲ�������Ҫ���ĵ� 1.�� 2.����"<<endl;
					cin>>w;
					if(w==1){
						cout<<"��������Ʒ��������:";
						cin>>c[i].ming;
						cout<<"��������Ʒ���¼۸�:";
						cin>>c[i].jia;
						cout<<"��������Ʒ���´��:";
						cin>>c[i].liang;
						cout<<"��������Ʒ�µı��:";
						cin>>c[i].hao;
						cout<<"���ˣ����"<<endl;
					}
					else{
						cout<<"�õģ����Ǽ�������"<<endl;
					}
				}
			}
			cout<<"��������"<<endl;
		}
		else if(n==3){
			cout<<"��������Ʒ���:";
			cin>>w;
			for(int i=1;i<=cnt;i++){
				if(w==c[i].hao){
					cout<<"�ҵ���Ʒ:"<<endl;
					cout<<"��Ʒ����:"<<c[i].ming<<endl;
					cout<<"��Ʒ�۸�:"<<c[i].jia<<endl;
					cout<<"��Ʒ���:"<<c[i].hao<<endl;
					cout<<"��Ʒʣ����:"<<c[i].liang<<endl;
					cout<<"---------------------------"<<endl; 
				}
			}
		}
		else if(n==4){
			cout<<"�������Ƽ���Ʒ��ţ�";
			cin>>w;
			for(int i=1;i<=cnt;i++){
				if(w==c[i].hao){
					cout<<"�������:"<<c[i].ming<<"1.�� 2.����"<<endl;
					cin>>cctv;
					if(cctv==1){
						cout<<"����Ʒ�Ѿ������Ƽ��б�"<<endl;
						c[i].lol=1;
					}
					else{
						cout<<"������Ѱ"<<endl;
					}
				}
			}
		}
		else if(n==5){
			cout<<"������ص�����˵�����(��6λ����):";
			cin>>ma;
			for(int i=1;i<=100;i++){
				cout<<"  "<<endl; 
			}
			cout<<"��ӭ����"<<sdgf<<"�̵�"<<endl;
			cout<<"Ҫ�����Ƽ���Ʒ��? 1.�� 2.����"<<endl;
			cin>>cctv;
			if(cctv==1){
				cout<<"�Ƽ���Ʒ:";
				for(int j=1;j<=http;j++){
					if(c[j].lol==1){
						cout<<"�Ƽ���Ʒ:"<<c[j].ming<<endl;
						cout<<"�۸�:"<<c[j].jia<<endl;
						cout<<"--------------------------"<<endl;
					}
				}
			} 
			for(int i=1;flag==0;i++){
				while(n!=ma){
					cout<<"��������Ҫ��ʲô 1.�鿴��Ʒ�б� 2.������Ʒ 3.������Ʒ 4.�ص��̵�� 5.�����̵�"<<endl;
					cin>>w;
					if(w==1){
						cout<<"��Ʒ�б�:"<<endl;
						for(int i=1;i<=http;i++){
							cout<<"��Ʒ����:"<<c[i].ming<<endl;
							cout<<"��Ʒ�۸�:"<<c[i].jia<<endl;
							cout<<"��Ʒ���:"<<c[i].hao<<endl;
						}
					}
					else if(w==2){
						cout<<"��������Ʒ���:";
						cin>>cctv;
						for(int i=1;i<=http;i++){
							if(cctv==c[i].hao){
								cout<<"��Ʒ��"<<c[i].ming<<endl;
								cout<<"�۸�Ϊ"<<c[i].jia<<endl;
								cout<<"Ŀǰ��ʣ��"<<c[i].liang<<"���"<<endl;
							}
						}
					}
					else if(w==3){
						cout<<"��������Ҫ�������Ʒ����:";
						cin>>ff;
						for(int i=1;i<=http;i++){
							if(ff==c[i].ming){
								cout<<"��Ҫ����"<<c[i].ming<<"��? 1.Ҫ 2.��Ҫ"<<endl;
								cin>>cctv;
								if(cctv==1&&c[i].liang>=1){
									cout<<"���ҵ���Ա"<<endl;
									temp=c[i].liang;
									temp--;
									c[i].liang=temp;
								}
								else if(c[i].liang==0){
									cout<<"�����Ʒû����"<<endl;
								}
								else{
									cout<<"�õ�"<<endl;
								}
							} 
						}
					}
					else if(w==4){
						cout<<"��������Ʒ������:";
						cin>>cctv;
						if(cctv==ma){
							cout<<"�õģ���ӭ"<<endl;
							break;
						}
						else{
							cout<<"�������Ȩ�޲���"<<endl;
						}
					}
					else if(w==5){
						cout<<"�����������̵�����ۣ�1~10�֣���������)"<<endl;
						cin>>html;
						if(html>=1&&html<=10){
							cout<<"���۳ɹ�!"<<endl;
							cnt++;
							ping[cnt]=html;
							for(int i=1;i<=cnt;i++){
								jun=jun+ping[i];
							}
							jun=jun/cnt;
						}
						else{
							cout<<"������Χ������ʧ��"<<endl;
						}
					}
					else{
						cout<<"����"<<endl;
					}
				}
			} 
		}
		else if(n==6){
			cout<<"���۷���Ϊ(���1�����10):"<<jun<<endl;
			if(jun<=4){
				cout<<"�̵껹��Ҫ��������Ŷ"<<endl;
			}
			else if(jun>5&&jun<=7){
				cout<<"�ܲ�����̵�"<<endl;
			}
			else{
				cout<<"����̵�ʵ����̫����!"<<endl;
			}
		}
		else{
			cout<<"����"<<endl;
		}
	}
}
