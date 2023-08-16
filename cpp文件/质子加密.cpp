#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>

using namespace std;

// �����û��ṹ��
struct User {
    string username;
    string password;
    int level;
};

// ������ܽ��ܺ���
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

// ����ע�ắ��
void registerUser(User* users, int& numUsers) {
    string username, password;
    cout << "�������û�����";
    cin >> username;
    cout << "���������룺";
    cin >> password;
    // �ж��û����Ƿ��Ѵ���
    for (int i = 0; i < numUsers; i++) {
        if (users[i].username == username) {
            cout << "�û����Ѵ��ڣ����������룡" << endl;
            return;
        }
    }
    // ������û�
    users[numUsers].username = username;
    users[numUsers].password = password;
    users[numUsers].level = 1;
    numUsers++;
    cout << "ע��ɹ���" << endl;
}

// �����¼����
User* login(User* users, int numUsers) {
    string username, password;
    cout << "�������û�����";
    cin >> username;
    cout << "���������룺";
    cin >> password;
    // �����û����飬����ƥ����û�
    for (int i = 0; i < numUsers; i++) {
        if (users[i].username == username && users[i].password == password) {
            cout << "��¼�ɹ���" << endl;
            return &users[i];
        }
    }
    cout << "�û���������������������룡" << endl;
    return NULL;
}

// �������ݿ��������
void database(User* user) {
    // ʵ�����ݿ����
    cout << "���ݿ�����ɹ���" << endl;
}

int main() {
    User users[100];
    int numUsers = 0;
    // ���������û�����
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
    // �������ѭ��
    while (true) {
        cout << "��ѡ�������" << endl;
        cout << "1. ע���˺�" << endl;
        cout << "2. ��¼" << endl;
        cout << "3. �˳�" << endl;
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                registerUser(users, numUsers);
                break;
            case 2:
                User* user = login(users, numUsers); 
                if (user != NULL) {
                    // ��¼�ɹ������м��ܽ��ܲ���
                    cout << "��ѡ�������" << endl;
                    cout << "1. ����" << endl;
                    cout << "2. ����" << endl;
                    if (user->username == "����" || user->username == "���" || user->username == "piationESL") {
                        cout << "3. �������ݿ�" << endl;
                    }
                    int choice2;
                    cin >> choice2;
                    string input, output;
                    switch (choice2) {
                        case 1:
                            cout << "������Ҫ���ܵ����ݣ�";
                            cin >> input;
                            output = encrypt(input);
                            cout << "���ܺ������Ϊ��" << output << endl;
                            break;
                        case 2:
                            cout << "������Ҫ���ܵ����ݣ�";
                            cin >> input;
                            output = decrypt(input);
                            cout << "���ܺ������Ϊ��" << output << endl;
                            break;
                        case 3:
                            database(user);
                            break;
                        default:
                            cout << "�������������ѡ��" << endl;
                            break;
                    }
                }
                break;
                // �����û�����
                ofstream outfile("users.txt");
                for (int i = 0; i < numUsers; i++) {
                    outfile << users[i].username << " " << users[i].password << " " << users[i].level << endl;
                }
                outfile.close();
                return 0;
                cout << "�������������ѡ��" << endl;
                break;
        }
    }
    return 0;
}
