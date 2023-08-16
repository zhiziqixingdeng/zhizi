#include <iostream>

using namespace std;

int main() {
  bool hasLife = true;
  int oxygenLevel = 21; // 假设初始氧气含量为21%
  bool hasVolcanoes = true;
  bool hasWeather = true;
  int biodiversity = 50; // 假设初始生物多样性为中等水平（0%~100%）

  // 显示可供选择的各项设置
  cout << "是否有生命？(1: 有, 0: 没有) ";
  cin >> hasLife;

  cout << "氧气含量(0 ~ 100)%：";
  cin >> oxygenLevel;

  cout << "是否有火山喷发？(1: 有, 0: 没有) ";
  cin >> hasVolcanoes;

  cout << "是否有天气变化？(1: 有, 0: 没有) ";
  cin >> hasWeather;

  cout << "生物多样性(0 ~ 100)%：";
  cin >> biodiversity;

  // 根据各项设置模拟地球情况
  if (hasLife) {
    cout << "这是一个有生命的地球。" << endl;
  } 
  else {
    cout << "这是一个没有生命的地球。" << endl;
  }

  if (oxygenLevel > 20) {
    cout << "地球上氧气含量较高（" << oxygenLevel << "%），足以支持人类和其他动物生存。" << endl;
  } 
  else {
    cout << "地球上氧气含量较低（" << oxygenLevel << "%），难以支持复杂生命的存在。" << endl;
  }

  if (hasVolcanoes) {
    cout << "地球上有活跃的火山喷发现象，这可能会导致地表环境的剧烈改变。" << endl;
  } 
  else {
    cout << "目前地球上没有火山喷发现象。" << endl;
  }

  if (hasWeather) {
    cout << "地球上的天气条件多变，不同季节、不同地区都会产生不同的气候和气象现象。" << endl;
  }
   else {
    cout << "地球上的天气条件比较稳定，大部分地区的气候变化不大。" << endl;
  }

  if (biodiversity > 70) {
    cout << "地球上物种丰富，生态系统稳定，存在许多珍稀动植物。" << endl;
  } 
  else if (biodiversity > 30) {
    cout << "地球上的生物多样性处于中等水平，存在一些常见的动植物种类。" << endl;
  } 
  else {
    cout << "地球上生物种类比较单一，缺乏多样性。" << endl;
  }
  return 0;
}
