#include <iostream>
#include <unistd.h>
using namespace std;
struct student{
	string name;
	int bie;
	int hao;
	int ji;
}s[1000];
int n,w,ren;
int flag,jue,shu;
int main(){
	int cnt=0;
	cout<<"欢迎来到学生信息管理系统"<<endl;
	for(int i=1; ;i++){
		cout<<"请输入要干什么 1.添加学生信息 2.搜索学生 3.修改学生信息 4.查看学生整体信息 5.退出"<<endl;
		cin>>n;
		if(n==1){
			cout<<"请输入学生姓名:";
			cin>>s[cnt].name;
			cout<<"请输入学生性别 1.男 2.女 3.其他"<<endl;
			cin>>s[cnt].bie;
			cout<<"请输入学生学号:";
			cin>>s[cnt].hao;
			cout<<"请输入学生成绩:";
			cin>>s[cnt].ji;
			cout<<"添加完成"<<endl;
			cnt++;
		}
		else if(n==2){
			cout<<"请输入学生学号"<<endl;
			cin>>w;
			for(int i=0;i<cnt;i++){
				if(w==s[i].hao){
					cout<<"该学生姓名为:"<<s[i].name;
					cout<<"该学生性别为:";
					if(s[i].bie==1){
						cout<<"男"<<endl;
					}
					else if(s[i].bie==2){
						cout<<"女"<<endl;
					}
					else{
						cout<<"其他"<<endl;
					}
					cout<<"该学生成绩为:";
					cout<<s[i].ji<<endl;
					flag=1; 
				}
			}
			if(flag==0){
				cout<<"未能查找到!"<<endl;
			}
			else{
				cout<<"查找完成"<<endl;
				flag=0;
			}
		}
		else if(n==3){
			cout<<"请输入要修改的学生的学号:";
			cin>>w;
			for(int i=0;i<cnt;i++){
				if(w==s[i].hao){
					cout<<"找到该学生，姓名:"<<s[i].name<<"是您要修改的吗 1.是 2.否"<<endl;
					cin>>jue;
					if(jue==1){
						cout<<"请重新输入该学生的名字:";
						cin>>s[i].name;
						cout<<"请重新输入该学生的学号:";
						cin>>s[i].hao;
						cout<<"请重新输入该学生的性别 1.男 2.女 3.其他"<<endl;
						cin>>s[i].bie;
						cout<<"请重新输入该学生的成绩:";
						cin>>s[i].ji;
						cout<<"完成!"<<endl;
						flag=1;
						ren++;
					}
				}
			}
			if(flag==1){
				cout<<"这次您修改了:"<<ren<<"个学生的信息"<<endl;
				ren=0;
			}
			else{
				cout<<"查找失败!"<<endl;
			}
		}
		else if(n==5){
			cout<<"再见"<<endl;
			return 0;
		}
		else if(n==4){
			cout<<"下面将打印所有学生的信息"<<endl;
			sleep(1);
			for(int i=0;i<cnt;i++){
				cout<<"学生姓名:"<<s[i].name<<endl;
				cout<<"学生性别:";
				if(s[i].bie==1){
					cout<<"男"<<endl;
				}
				else if(s[i].bie==2){
					cout<<"女"<<endl;
				}
				else{
					cout<<"其他"<<endl;
				}
				cout<<"学生学号:"<<s[i].hao<<endl;
				cout<<"学生成绩:"<<s[i].ji<<"分"<<endl;
				cout<<"---------------------------------"<<endl;
				sleep(1);
			}
			cout<<"打印结束"<<endl;
		}
		else{
			cout<<"错误!!!"<<endl;
		}
	}
}
