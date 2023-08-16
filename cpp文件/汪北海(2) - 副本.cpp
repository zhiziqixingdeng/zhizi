#include <iostream>
#include <string>
#include <cstdlib> // srand, rand
#include <ctime>  // time
using namespace std;
int cnt; 
// ����input�жϲ�����response
std::string generateResponse(const std::string& input) {
    string response = "";
    
    if(input.find("���") != std::string::npos || input.find("����") != std::string::npos){
        response = "��ð�����ʲô��Ҫ��������";
    }
    else if(input.find("����") != std::string::npos || input.find("ѧϰ") != std::string::npos){
        response = "���ͣ�Ŭ������/studyŶ~";
    }
    else if(input.find("����") != std::string::npos){
        int r = rand()%3;
        if(r == 0){
            response = "�����������ʣ���������~";
        }
        else if(r == 1){
            response = "�����е������ǵô���ɡ~";
        }
        else{
            response = "�������꣬���żǵô�����Ŷ~";
        }
    }
    else if(input.find("Ц��") != std::string::npos || input.find("��Ц") != std::string::npos){
        int r = rand()%4;
        if(r == 0){
            response = "Ϊʲô̫��Ҫͨ�磿��Ϊ..������Ҫ������½��";
        }
        else if(r == 1){
            response = "Ϊʲô�����������ѣ���Ϊ..�����Ա�����ѣ�";
        }
        else if(r == 2){
            response = "����˵�㿼�Զ��������֣�������̫���ˣ���Ϊ�ҽ����ʱ���û�׷Ѿ�~";
        }
        else{
            response = "Ь�ӻ�ҧ�ˣ���ô�죿���ģ�����Ь����ı����Ұ�ޣ�����Ҳ��Ь����Ь�п��ԶԸ�����";
        }
    }
    // ģ��ش�
    else if(input.find("����") != std::string::npos||input.find("����˭") != std::string::npos){
        response = "�Ҿ���������������֪��Щʲô�أ�";
    }
    else if(input.find("�ټ�") != std::string::npos){
        response = "�´�����Ŷ~";
    }
    else if(input.find("лл") != std::string::npos || input.find("��л") != std::string::npos){
        response = "���ÿ������Һܿ����ܰﵽ�㣡";
    }
    else if(input.find("��ʫ") != std::string::npos){
    	response ="��ǰ���¹⣬���ǵ���˪����ͷ�����£���ͷ˼���硣" ; 
	}
	else if(input.find("����")!=std::string::npos){
		response ="��ǰ����һ�����������÷ǳ��ǳ��ߣ��ߵ��춼û����......";
	} 
	else if(input.find("������")!=std::string::npos){
		response ="�ҵĴ����������ӣ�����һλ����Ա��";
	}
	else if(input.find("����") != std::string::npos){
        response = "�ҵİ����Ǽ������";
    }
    else if(input.find("����") != std::string::npos||input.find("����") != std::string::npos){
        response = "���Ѿ�17���ˣ�������ʮ�㣡";
    }
	else {
        response = input+"��";
    }
    return response;
}

int main() {
    srand(time(NULL)); // ��ʼ�������������

    string input, output;
    cout << "�������� ��ã���������������ʲô��Ҫ��������" << endl;

    while(true) {
        getline(cin, input);
        output = generateResponse(input);
        cout << "�������� " << output << endl;
    }

    return 0;
}
