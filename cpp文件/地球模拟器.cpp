#include <iostream>

using namespace std;

int main() {
  bool hasLife = true;
  int oxygenLevel = 21; // �����ʼ��������Ϊ21%
  bool hasVolcanoes = true;
  bool hasWeather = true;
  int biodiversity = 50; // �����ʼ���������Ϊ�е�ˮƽ��0%~100%��

  // ��ʾ�ɹ�ѡ��ĸ�������
  cout << "�Ƿ���������(1: ��, 0: û��) ";
  cin >> hasLife;

  cout << "��������(0 ~ 100)%��";
  cin >> oxygenLevel;

  cout << "�Ƿ��л�ɽ�緢��(1: ��, 0: û��) ";
  cin >> hasVolcanoes;

  cout << "�Ƿ��������仯��(1: ��, 0: û��) ";
  cin >> hasWeather;

  cout << "���������(0 ~ 100)%��";
  cin >> biodiversity;

  // ���ݸ�������ģ��������
  if (hasLife) {
    cout << "����һ���������ĵ���" << endl;
  } 
  else {
    cout << "����һ��û�������ĵ���" << endl;
  }

  if (oxygenLevel > 20) {
    cout << "���������������ϸߣ�" << oxygenLevel << "%��������֧������������������档" << endl;
  } 
  else {
    cout << "���������������ϵͣ�" << oxygenLevel << "%��������֧�ָ��������Ĵ��ڡ�" << endl;
  }

  if (hasVolcanoes) {
    cout << "�������л�Ծ�Ļ�ɽ�緢��������ܻᵼ�µر����ľ��Ҹı䡣" << endl;
  } 
  else {
    cout << "Ŀǰ������û�л�ɽ�緢����" << endl;
  }

  if (hasWeather) {
    cout << "�����ϵ�����������䣬��ͬ���ڡ���ͬ�������������ͬ���������������" << endl;
  }
   else {
    cout << "�����ϵ����������Ƚ��ȶ����󲿷ֵ���������仯����" << endl;
  }

  if (biodiversity > 70) {
    cout << "���������ַḻ����̬ϵͳ�ȶ������������ϡ��ֲ�" << endl;
  } 
  else if (biodiversity > 30) {
    cout << "�����ϵ���������Դ����е�ˮƽ������һЩ�����Ķ�ֲ�����ࡣ" << endl;
  } 
  else {
    cout << "��������������Ƚϵ�һ��ȱ�������ԡ�" << endl;
  }
  return 0;
}
