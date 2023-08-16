#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>

using namespace std;

// 定义用户结构体
struct User {
    string username;
    string password;
    int level;
};

// 定义加密解密函数
string encrypt(string input) {
    string output = "";
    for (int i = 0; i < input.length(); i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            output += char('z' - (input[i] - 'a'));
        } else if (input[i] >= 'A' && input[i] <= 'Z') {
            output += char('Z' - (input[i] - 'A'));
        } else {
            output += input[i];
        }
    }
    return output;
}

string decrypt(string input) {
    string output = "";
    for (int i = 0; i < input.length(); i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            output += char('z' - (input[i] - 'a'));
        } else if (input[i] >= 'A' && input[i] <= 'Z') {
            output += char('Z' - (input[i] - 'A'));
        } else {
            output += input[i];
        }
    }
    return output;
}

// 定义注册函数
void registerUser(User* users, int& numUsers) {
    string username, password;
    cout << "请输入用户名：";
    cin >> username;
    cout << "请输入密码：";
    cin >> password;
    // 判断用户名是否已存在
    for (int i = 0; i < numUsers; i++) {
        if (users[i].username == username) {
            cout << "用户名已存在，请重新输入！" << endl;
            return;
        }
    }
    // 添加新用户
    users[numUsers].username = username;
    users[numUsers].password = password;
    users[numUsers].level = 1;
    numUsers++;
    cout << "注册成功！" << endl;
}

// 定义登录函数
User* login(User* users, int numUsers) {
    string username, password;
    cout << "请输入用户名：";
    cin >> username;
    cout << "请输入密码：";
    cin >> password;
    // 遍历用户数组，查找匹配的用户
    for (int i = 0; i < numUsers; i++) {
        if (users[i].username == username && users[i].password == password) {
            cout << "登录成功！" << endl;
            return &users[i];
        }
    }
    cout << "用户名或密码错误，请重新输入！" << endl;
    return NULL;
}

// 定义数据库操作函数
void database(User* user) {
    // 实现数据库操作
    cout << "数据库操作成功！" << endl;
}

int main() {
    User users[100];
    int numUsers = 0;
    // 加载已有用户数据
    ifstream infile("users.txt");
    if (infile) {
        string username, password;
        int level;
        while (infile >> username >> password >> level) {
            users[numUsers].username = username;
            users[numUsers].password = password;
            users[numUsers].level = level;
            numUsers++;
        }
        infile.close();
    } 
    // 进入程序循环
    while (true) {
        cout << "请选择操作：" << endl;
        cout << "1. 注册账号" << endl;
        cout << "2. 登录" << endl;
        cout << "3. 退出" << endl;
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                registerUser(users, numUsers);
                break;
            case 2:
                User* user = login(users, numUsers); 
                if (user != NULL) {
                    // 登录成功，进行加密解密操作
                    cout << "请选择操作：" << endl;
                    cout << "1. 加密" << endl;
                    cout << "2. 解密" << endl;
                    if (user->username == "质子" || user->username == "你好" || user->username == "piationESL") {
                        cout << "3. 访问数据库" << endl;
                    }
                    int choice2;
                    cin >> choice2;
                    string input, output;
                    switch (choice2) {
                        case 1:
                            cout << "请输入要加密的内容：";
                            cin >> input;
                            output = encrypt(input);
                            cout << "加密后的内容为：" << output << endl;
                            break;
                        case 2:
                            cout << "请输入要解密的内容：";
                            cin >> input;
                            output = decrypt(input);
                            cout << "解密后的内容为：" << output << endl;
                            break;
                        case 3:
                            database(user);
                            break;
                        default:
                            cout << "输入错误，请重新选择！" << endl;
                            break;
                    }
                }
                break;
                // 保存用户数据
                ofstream outfile("users.txt");
                for (int i = 0; i < numUsers; i++) {
                    outfile << users[i].username << " " << users[i].password << " " << users[i].level << endl;
                }
                outfile.close();
                return 0;
                cout << "输入错误，请重新选择！" << endl;
                break;
        }
    }
    return 0;
}
