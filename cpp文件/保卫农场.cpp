#include <iostream>
#include <cstdlib>
using namespace std;
struct zhang{
	string name;
	string ma;
}a[2];
int zhi1=10,cnt1=3,flag1=0,cun1=1;
int zhi2,cnt2,flag2,cun2;
int zhi3,cnt3,flag3,cun3;
int zhi4,cnt4,flag4,cun4;
int zhi5,cnt5,flag5,cun5;
int vip,r,r1,r2,r3;
int a1,b2,c3; 
int n,q;
int main(){
	cout<<"�������������:";
	cin>>a[1].name;
	if(a[1].name=="zhizi"){
		cout<<"���������!"<<endl; 
		vip=1;
		zhi5=20;
		cnt5=8;
		cun5=1;
	}
	else{
		cout<<"�ÿ����"<<endl;
	}
	while(true){
		cout<<"��������Ҫ��ʲô 1.���߻��� 2.�鿴������Ϣ 3.ʩ�� 4.�̵� 5.�˳���û�д浵) 6.����ֲ��"<<endl;
		cin>>n;
		if(n==1){
			cout<<"���ֲ���Ѿ�ȫ������!"<<endl;
			r=rand()%100;
			r1=rand()%1;
			r2=rand()%50;
			while(1){
				cout<<"������Ҫ�ĸ�ֲ�﹥���� 1.��������";
				if(cun2!=0){
					cout<<"2.��ľ���"<<endl;
				} 
				if(cun3!=0){
					cout<<"3.ƻ��׷����"<<endl;
				}
				if(cun4!=0){
					cout<<"4.ѣ������"<<endl;
				}
				if(cun5!=0){
					cout<<"5.���տ�"<<endl;
				}
				cin>>q;
				if(q==1&&zhi1>0){
					cout<<"�Է��ܵ��˻���������������18��Ѫ"<<endl;
					r-=18;
				}
				else if(q==2&&cun2!=0&&zhi2>0){
					cout<<"�Է��ܵ��˼������������?��Ѫ"<<endl;
					cnt2=rand()%40;
					r-=cnt2;
				}
				else if(q==3&&cun3!=0&&zhi3>0){
					cout<<"�Է��ܵ�ƻ��׷���ڵĹ���������ƻ��׷����Ѫ����һ��"<<endl;
					r-=zhi3/2;
				}
				else if(q==4&&cnt4!=0&&zhi4>0){
					cout<<"�Է��յ�ѣ�������Ĺ������ܵ�17���˺�"<<endl;
					r-=17;
				}
				else if(q==5&&cnt5!=0&&zhi5>0){
					cout<<"�Է��ܵ����տ��������۵���19��Ѫ"<<endl;
					r-=19;
					cout<<"���տ���������Ѫ��10��"<<endl;
					zhi5+=10;
				}
				else{
					cout<<"ֲ�ﲻ���ڻ���û��Ѫ����"<<endl;
				}
				if(r<=0){
					cout<<"��ʤ���ˣ���ɹ��Ĵ���˵���"<<endl;
					cout<<"���ý��1��������һ����ͭ��2��"<<endl;
					a1++;
					b2++;
					c3+=2;
					break;
				}
				else if(zhi1<=0&&zhi2<=0&&zhi3<=0&&zhi4<=0&&zhi5<=5){
					cout<<"��ʧ���ˣ���δ�ܳɹ���ܵ���"<<endl;
					cout<<"��ֻ����ˣ�1����ң�1��ͭ��"<<endl;
					a1++;
					c3++;
					break; 
				}
				else{
					if(q==1){
						cout<<"���ֲ�ﻨ�������˹�����"<<r2<<"�㹥��"<<endl;
						zhi1-=r2;
					}
					else if(q==2&&flag2==0&&cun2!=0){
						cout<<"������з�������"<<r2<<"��Ѫ"<<endl;
						zhi2-=r2;
					}
					else if(q==2&&flag2==1&&cun2!=0){
						flag2=0;
						cout<<"��ļ��ʹ�õĻ��ܣ��ֵ�ס�˵з��Ĺ���"<<endl;
					}
					else if(q==3&&cun3!=0){
						cout<<"���ֲ��ƻ��׷���ڱ��з�������"<<r2<<"��Ѫ"<<endl;
						zhi3-=r2;
					}
					else if(q==4&&cun4!=0){
						cout<<"���ֲ��������������"<<r2/2<<"��Ѫ"<<endl;
						zhi4-=r2/2; 
					}
					else if(q==5&&cun5!=0){
						cout<<"���տ���������"<<r2<<"��Ѫ"<<endl;
					}
					else{
						cout<<"�������ף�����˫����������"<<endl;
					}
				}
			}
		}
		else if(n==2){
			cout<<"����:"<<a[1].name<<endl;
			cout<<"�ȼ�:";
			if(a[1].name=="zhizi"){
				cout<<"������"<<endl;
			}
			else{
				cout<<"�ÿ�"<<endl;
			}
		}
		else if(n==3){
			cout<<"ʩ����Ҫһ��ͭ�ң��Ƿ�Ҫʩ�ʣ� 1.Ҫ 2.��Ҫ"<<endl;
			cin>>q;
			if(q==1&&c3>=1){
				cout<<"ʩ�ʳɹ���"<<endl;
				c3--;
			}
			else{
				cout<<"δ��ʩ��"<<endl;
			}
		}
		else if(n==4){
			cout<<"��������Ҫ��ʲô�� 1.��� 2.ƻ��׷����"<<endl;
			cin>>q;
			if(q==1&&cun2==0&&a1>=1){
				cout<<"����ɹ�"<<endl;
				cun2=1;
				zhi2=30;
				a1--;
			}
			else if(q==2&&cun3==0&&a1>=1){
				cout<<"����ɹ�"<<endl;
				cun3=1;
				zhi3=50;
				a1--;
			}
			else{
				cout<<"����ʧ��"<<endl;
			}
		}
		else if(n==5){
			return 0;
		}
		else if(n==6){
			if(a1<2){
				cout<<"��Ҳ���!"<<endl; 
			} 
			else{
				cout<<"�ظ��ɹ���"<<endl;
				zhi1=10;
				if(cun2==1){
					zhi2=30;
				}
				if(cun3==1){
					zhi3=50;
				}
				if(cun4==1){
					zhi4=46;
				}
				if(cun5==1){
					zhi5=20;
				}
			}
		}
		}
	}
