#include <iostream>
#include <cstdlib>
using namespace std;
string n,s,name,da,http;
int a,b,c,bot,f,r;
void bot1(string q){
	if(q=="���"){
		cout<<"hi"<<endl;
	}
	else if(q=="�ټ�"){
		cout<<"�ټ�"<<endl;
	}
	else{
		cout<<da<<endl;
	}
}
void bot2(int w){
	 if(w==1){
	 	cout<<"�������������ҿ��԰�����������ˣ��磺7 4��"<<endl;
	 	cin>>a>>b;
	 	cout<<"���:"<<a*b<<endl; 
	 }
	 else if(w==2){
	 	cout<<"������3�������ҿ��Լ�����������������������磺5 6 3��"<<endl;
	 	cin>>a>>b>>c;
	 	cout<<"��������������"<<a*b*c<<endl;
	}
	else if(w==3){
		cout<<"�������Ƽ���awa,uwu,qwq,(*_*),(*7%)?"<<endl; 
	}
	else{
		cout<<"δ֪����"<<endl;
	}
}
void bot3(string x){
	if(x.find("���")!=std::string::npos||x.find("����")!=std::string::npos||x.find("hi")!=std::string::npos||x.find("Hi")!=std::string::npos){
		r=rand()%1;
		if(r==0){
			cout<<"��ã�"<<endl;
		}
		else{
			cout<<"hi yoooooooo"<<endl;
		}
	}
	else if(x.find("Ц��")!=std::string::npos||x.find("����")!=std::string::npos){
		r=rand()%1;
		if(r==0){
			cout<<"Ҫ��������һ����"<<endl;
		}
		else{
			cout<<"����ҽ���"<<endl;
		}
	}
	else if(x.find("��ǰ")!=std::string::npos){
		cout<<"�������ܳ��õ��°�"<<endl; 
	}
	else if(x.find("����")!=std::string::npos||x.find("����˭")!=std::string::npos){
		r=rand()%1;
		if(r==0){
			cout<<"����zhizi_test"<<endl; 
		}
		else{
			cout<<"�ҵ����ֽ���zhizi_test"<<endl; 
		}
	}
	else if(x.find("������")!=std::string::npos){
		cout<<"em,�����ҵ�����"<<endl;
		cout<<"�����������"<<endl;
		cout<<"zhizi_bot:�㲻Ҫ���ң�"<<endl; 
	}
	else if(x.find("����")!=std::string::npos){
		cout<<"�Ұ��ù㷺���м���������пƻ�С˵��"<<endl; 
	}
	else if(x.find("����")!=std::string::npos||x.find("help")!=std::string::npos){
		cout<<"���ֲ�����������ˣ�ΪʲôҪ�а�����"<<endl; 
	}
	else if(x.find("��Ϊ")!=std::string::npos){
		cout<<"��Ϊ���ԣ���ѧ����"<<endl; 
	}
	else if(x.find("250")!=std::string::npos||x.find("ɵ��")!=std::string::npos||x.find("sb")!=std::string::npos){
		cout<<"�벻Ҫ����лл�����򲻺���˵����"<<endl;
	}
	else if(x.find("awa")!=std::string::npos||x.find("uwu")!=std::string::npos){
		cout<<"awa��qwq��"<<endl;
	}
	else if(x.find("c++")!=std::string::npos){
		cout<<"�Һ����Ӷ���c++��"<<endl;
	}
	else if(x.find("6")!=std::string::npos){
		cout<<"9"<<endl;
	}
	else if(x.find("hhh")!=std::string::npos||x.find("yyds")!=std::string::npos){
		cout<<"xswl"<<endl;
	}
	else if(x.find("���Ը�ʲô")!=std::string::npos||x.find("���Ը�ɶ")!=std::string::npos){
		cout<<"�ҿ��Ժ�������"<<endl; 
	}
	else if(x.find("������ʶ")!=std::string::npos){
		cout<<"����������Ϊ���ǻ�ȡ�����ǣ�������ʵ����Ϊ��������������������Ҳ�������ǻ۵�����"<<endl;
	}
	else if(x.find("����")!=std::string::npos){
		cout<<"�ҵ�������������"<<endl; 
	}
	else if(x.find("�԰�")!=std::string::npos){
		cout<<"���ԶԶ�"<<endl; 
	}
	else if(x.find("����")!=std::string::npos){
		cout<<"��ϲ������"<<endl; 
	}
	else if(x.find("����")!=std::string::npos){
		cout<<"��嫵����氡��"<<endl; 
	}
	else if(x.find("�ټ�")!=std::string::npos){
		cout<<"�ٻأ�"<<endl;
	}
	else if(x.find("em")!=std::string::npos){
		cout<<"e���Ҳ�֪����"<<endl;
	}
	else{
		r=rand()%3;
		if(r==0){
			cout<<"�Ҳ�����"<<endl;
		}
		else if(r==1){
			cout<<"awa!"<<endl; 
		}
		else if(r==2){
			cout<<"�ø��"<<endl; 
		}
		else if(r==3){
			cout<<"emmmmm"<<endl; 
		}
	}
}
void chuli(string x){
	if(x=="awa"){
		cout<<"������Ҫ�ظ������֣�";
		cin>>a;
		cout<<"�ظ���"<<a<<endl;
	}
	else if(x=="out"){
		cout<<"������Ҫ���������"<<endl; 
		cin>>s;
		cout<<s<<endl; 
	}
	else if(x=="+-"){
		cout<<"�����������������Խ�����Ӻ����"<<endl;
		cin>>a>>b;
		cout<<"�ӷ���"<<a+b;
		cout<<"����:"<<a-b;
	}
	else if(x=="hi"){
		cout<<"awa��uwu��qwq"<<endl; 
	}
	else if(x=="for"){
		for(int i=1;i<=100;i++){
			cout<<"1"<<endl;
		}
	}
	else if(x=="rand"){
		b=rand()%1000;
		cout<<"�������"<<b;
	}
	else if(x=="bot"){
		cout<<"������bot���ƣ�";
		cin>>name;
		cout<<"��������Ҫ�Ŀ�ܣ�1.��� 2.���� 3.zhizi_test"<<endl;
		cin>>b;
		if(b==1){
			cout<<"�Ѿ�ѡ������˿��"<<endl;
			bot=1;
			cout<<"������Ĭ�ϻش�";
			cin>>da;
			cout<<"����"<<endl;
		}
		else if(b==2){
			cout<<"ok"<<endl;
			bot=2; 
		}
		else{
			cout<<"���ˣ��Ѿ����"<<endl;
			bot=3;
		}
	}
	else if(x=="zbot"){
		cout<<"���ڵ�����Ļ�����"<<endl;
		if(bot==1){
			for(int i=1;i<=10;i++){
			cout<<"��:";
			cin>>http;
			cout<<"������:";
			bot1(http);
			}
		}
		if(b==2){
			for(int i=1;i<=10;i++){
			cout<<"��������Ҫ��ʲô 1.�˷������� 2.��������� 3.������"<<endl;
			cin>>f;
			bot2(f);
			}
		}
		if(bot==3){
			for(int i=1;i<=10;i++){
			cout<<"��:";
			cin>>http;
			cout<<"������:"; 
			bot3(http);
			}
		}
	}
	else if(x=="help"){
		cout<<"��ã���ӭ��������"<<endl;
		cout<<"����awa�����ظ�����"<<endl;
		cout<<"����out�����ظ�����κ��ַ�"<<endl;
		cout<<"����hi�о�ϲ��"<<endl; 
		cout<<"����for����ѭ�����100��1"<<endl;
		cout<<"����rand��ȡ�����"<<endl;
		cout<<"����bot���������Լ��Ļ����ˣ�"<<endl;
		cout<<"����zbot�������㴴���Ļ����˰ɣ�"<<endl;
	}
	else{
		cout<<"δ֪����"<<endl;
	}
}
int main(){
	cout<<"��ӭ�������µ�z++���ԣ�����������ڿ����У��ǻ���c++�����ģ����ʺ��������֣�����help���Խ��д���̳�"<<endl;
	while(1==1){
		cout<<"���������"<<endl;
		cin>>n;
		chuli(n);
	}
}
