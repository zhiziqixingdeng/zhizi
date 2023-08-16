#include <iostream>
#include <cstdlib>
using namespace std;
string name,shi;
int a,b,c,d;
char x;
struct ci{
	string ying;
	string zhong;
}dan[999999];
int n,w,cnt,flag;
int t,f,s;
int main(){
	cout<<"欢迎来到学习系统，请输入你的名字:";
	cin>>name;
	cout<<"你好啊，"<<name<<"，在这里你可以尽情学习"<<endl;
	while(1==1){
		cout<<"请输入你要学什么 1.数学 2.语文 3.英语 4.其他功能"<<endl;
		cin>>n;
		if(n==1){
			cout<<"请输入你要学什么 1.口算练习 2.分数计算 3.其他"<<endl;
			cin>>w;
			if(w==1){
				cout<<"好的，请输入你要计算几轮:";
				cin>>cnt;
				for(int i=1;i<=cnt;i++){
					a=rand()%100+2;
					b=rand()%a+2;
					c=rand()%3;
					cout<<a;
					if(c==0){
						cout<<"+"<<b<<"=?"<<endl; 
					}
					else if(c==1){
						cout<<"-"<<b<<"=?"<<endl;
					}
					else if(c==2){
						cout<<"x"<<b<<"=？"<<endl;
					}
					else{
						cout<<"除"<<b<<"=?(输入忽略小数的)"<<endl;
					}
					cin>>d;
					if(c==0){
						if(d==a+b){
							cout<<"正确!"<<endl;
							flag++;
						}
						else{
							cout<<"错误哦"<<endl;
						}
					}
					else if(c==1){
						if(d==a-b){
							cout<<"正确!"<<endl;
							flag++;
						}
						else{
							cout<<"错误哦"<<endl;
						}
					}
					else if(c==2){
						if(d==a*b){
							cout<<"正确喽"<<endl;
							flag++;
						}
						else{
							cout<<"错误了"<<endl;
						}
					}
					else{
						if(d==a/b){
							cout<<"正确!"<<endl;
						}
						else{
							cout<<"错误"<<endl;
						}
					}
				}
				cout<<"一共有"<<cnt<<"道题"<<"你做对了"<<flag<<"道"<<endl;
				flag=0;
			}
			else if(w==2){
				cout<<"请输入你要练习几道分数计算题:";
				cin>>cnt;
				for(int i=1;i<=cnt;i++){
					a=rand()%10+1;
					b=rand()%10+1;
					c=a;
					d=rand()%b+1;
					int r=rand()%1;
					if(r==1){
						cout<<a<<"分之"<<b<<"+"<<c<<"分之"<<d<<"=(不需要化简)"<<endl;
						cout<<"请输入分母:"<<endl;
						cin>>t;
						cout<<"请输入分子:"<<endl;
						cin>>f;
						if(t==a&&f==b+d){
							cout<<"正确!"<<endl;
							flag++;
						}
						else{
							cout<<"错误"<<endl;
						}
					}
					else{
						cout<<a<<"分之"<<b<<"-"<<c<<"分之"<<d<<"=(不需要化简)"<<endl;
						cout<<"请输入分母:";
						cin>>t;
						cout<<"请输入分子:";
						cin>>f;
						if(t==a&&f==b-d){
							cout<<"正确!"<<endl;
							flag++;
						}
						else{
							cout<<"错误"<<endl;
						}
					}
				}
			}
			else if(w==3){
				cout<<"请输入你要联系什么 1.猜数 2.求绝对值 3.求阶乘 4.求面积 5.相反数"<<endl;
				cin>>s;
				if(s==1){
					cout<<"生成随机数中"<<endl;
					t=rand()%100;
					cout<<"输入数来猜吧"<<endl;
					while(t!=f){
						cin>>f;
						if(f<t){
							cout<<"小了哦(注意二分查找)"<<endl;
						}
						if(f>t){
							cout<<"大了哦（注意二分查找)"<<endl;
						}
					}
					cout<<"恭喜你猜对了!"<<endl;
				}
				else if(s==2){
					t=rand()%100;
					f=rand()%100;
					cout<<"请输入"<<f<<"相对于"<<t<<"的绝对值"<<endl;
					cin>>a;
					if(t>f){
						flag=t-f;
					}
					else if(t<f){
						flag=t+f;
					}
					else{
						flag=0;
					}
					if(a==flag){
						cout<<"恭喜你，答对了"<<endl;
					}
					else{
						cout<<"答错了哦"<<endl;
					}
				}
				else if(s==3){
					t=rand()%10;
					cout<<"请输入"<<t<<"！的结果:";
					cin>>a;
					flag=1;
					for(int i=1;i<=t;i++){
						flag=flag*i;
					}
					if(a==flag){
						cout<<"恭喜你答对了!"<<endl;
					}
					else{
						cout<<"答错了哦!"<<endl;
					}
				}
				else if(s==5){
					t=rand()%100-50;
					cout<<"请输入"<<t<<"的相反数:";
					cin>>a;
					if(t>0){
						if(a==t-t*2){
							cout<<"正确~"<<endl;
						}
						else{
							cout<<"错误了哦"<<endl;
						}
					}
				}
				else if(s==4){
					a=rand()%100;
					b=rand()%100;
					c=rand()%1;
					if(c==0){
						cout<<"请输入三角型的面积:"<<"底是:"<<a<<"高是:"<<b<<"输入面积:";
						cin>>d;
						if(d==a*b/2){
							cout<<"正确!"<<endl;
						}
						else{
							cout<<"错误哦!"<<endl;
						}
					}
					else{
						for(int i=1;i<=a;i++){
							for(int j=1;j<=b;j++){
								cout<<"*"； 
							}
							cout<<endl; 
						}
						cout<<endl;
						cout<<"请输入这个正方型的面积:";
						cin>>d;
						if(d==a*b){
							cout<<"正确"<<endl;
						}
						else{
							cout<<"错误!"<<endl;
						}
					}
				}
				else{
					cout<<"没有这个选项哦!"<<endl;
				}
			}
		}
	}
}
