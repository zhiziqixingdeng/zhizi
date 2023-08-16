#include <iostream>
#include <cstdlib>
using namespace std;
int n;
struct sd {
    string name = "玩家";
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
        cout << "欢迎来到黑暗森林游戏! 请问你要干什么？ 1.查看自己de星球 2.宇宙战舰大战 3.查看星系 4.查看文明信息 5.退出 6.改名" << endl;
        cin >> n;
        if (n == 1) {
            cout << "下面是你的星球" << endl;
            cout << "  ***   " << endl;
            cout << " *****  " << endl;
            cout << "----------" << endl;
            cout << "*   (i f)=    *" << endl;
            cout << "***************" << endl;
        }
        else if (n == 2) {
            cout << "正在匹配对手" << endl;
            cout << "匹配成功！对手：随机文明" << endl;
            for (int j = 1;; j++) {
                int r = rand() % 2;
                if (r == 0) {
                    q[1].qi = "未知武器";
                }
                else if (r == 1) {
                    q[1].qi = "冲撞";
                }
                else {
                    q[1].qi = "死线";
                }
                int std = rand() % 10000;
                q[1].s = std;
                cout << "对手使用了" << q[1].qi<<endl;
                cout << "你减少了" << q[1].s << "点血" << endl;
                a[1].ren -= q[1].s;
                if (a[1].ren <= 0) {
                    cout << "你失败了" << endl;
                    break;
                }
                cout << "你要使用什么武器？ 1.随机 2.核弹 " << endl;
                int a;
                cin >> a;
                int cnt = 1;
                if (a == 1) {
                	int p=rand()%1000000;
                    cout << "对手减少了"<<p<<"点血" <<endl;
                    q[1].s-=p;
                    cout<<"****（"<<endl;
					cout<<"******"<<endl;
					cout<<"（（**"<<endl;
					cout<<"》》》"<<endl; 
                }
                else if (a == 2) {
                    cout << "对手减少了10滴血" << endl;
                    q[1].s -= 10;
                    cout<<"(huew)"<<endl;
                }
                else {
                    cout << "你没有使用武器" << endl;
                    cout<<"空"<<endl;
                }
                if (q[1].s <= 0) {
                    cout << "对手失败了" << endl;
                    cout<<"ehof"<<endl;
                    cout<<"           (&"<<endl;
                    cout<<"yie    "<<endl; 
                    break;
                }
            }
        }
        else if (n == 3) {
            cout << "你所在的星系为：2734号星系" << endl;
        }
        else if (n == 4) {
            cout << "名字" << a[1].name << endl;
            cout << "战力" << a[1].li << endl;
            cout << "人数：" << a[1].ren << endl;
        }
        else if (n == 5) {
            cout << "再见" << endl;
            return 0;
        }
        else if (n == 6) {
            cout << "请输入名字" << endl;
            cin >> a[1].name;
            cout << "ok" << endl;
        }
    }
}
