#include <iostream>
#include <cstdlib>
using namespace std;
int n;
struct sd {
    string name = "���";
    int li = 10;
    int ren = 100000;
    string qi;
} a[10];
struct di {
    int s;
    string qi;
} q[10];
int main() {
    for (int i = 1;; i++) {
    	a[1].ren+100;
    	a[1].ren+1000;
    	a[1].li+100; 
        cout << "��ӭ�����ڰ�ɭ����Ϸ! ������Ҫ��ʲô�� 1.�鿴�Լ�de���� 2.����ս����ս 3.�鿴��ϵ 4.�鿴������Ϣ 5.�˳� 6.����" << endl;
        cin >> n;
        if (n == 1) {
            cout << "�������������" << endl;
            cout << "  ***   " << endl;
            cout << " *****  " << endl;
            cout << "----------" << endl;
            cout << "*   (i f)=    *" << endl;
            cout << "***************" << endl;
        }
        else if (n == 2) {
            cout << "����ƥ�����" << endl;
            cout << "ƥ��ɹ������֣��������" << endl;
            for (int j = 1;; j++) {
                int r = rand() % 2;
                if (r == 0) {
                    q[1].qi = "δ֪����";
                }
                else if (r == 1) {
                    q[1].qi = "��ײ";
                }
                else {
                    q[1].qi = "����";
                }
                int std = rand() % 10000;
                q[1].s = std;
                cout << "����ʹ����" << q[1].qi<<endl;
                cout << "�������" << q[1].s << "��Ѫ" << endl;
                a[1].ren -= q[1].s;
                if (a[1].ren <= 0) {
                    cout << "��ʧ����" << endl;
                    break;
                }
                cout << "��Ҫʹ��ʲô������ 1.��� 2.�˵� " << endl;
                int a;
                cin >> a;
                int cnt = 1;
                if (a == 1) {
                	int p=rand()%1000000;
                    cout << "���ּ�����"<<p<<"��Ѫ" <<endl;
                    q[1].s-=p;
                    cout<<"****��"<<endl;
					cout<<"******"<<endl;
					cout<<"����**"<<endl;
					cout<<"������"<<endl; 
                }
                else if (a == 2) {
                    cout << "���ּ�����10��Ѫ" << endl;
                    q[1].s -= 10;
                    cout<<"(huew)"<<endl;
                }
                else {
                    cout << "��û��ʹ������" << endl;
                    cout<<"��"<<endl;
                }
                if (q[1].s <= 0) {
                    cout << "����ʧ����" << endl;
                    cout<<"ehof"<<endl;
                    cout<<"           (&"<<endl;
                    cout<<"yie    "<<endl; 
                    break;
                }
            }
        }
        else if (n == 3) {
            cout << "�����ڵ���ϵΪ��2734����ϵ" << endl;
        }
        else if (n == 4) {
            cout << "����" << a[1].name << endl;
            cout << "ս��" << a[1].li << endl;
            cout << "������" << a[1].ren << endl;
        }
        else if (n == 5) {
            cout << "�ټ�" << endl;
            return 0;
        }
        else if (n == 6) {
            cout << "����������" << endl;
            cin >> a[1].name;
            cout << "ok" << endl;
        }
    }
}
