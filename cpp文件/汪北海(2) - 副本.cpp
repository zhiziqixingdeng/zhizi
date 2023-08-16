#include <iostream>
#include <string>
#include <cstdlib> // srand, rand
#include <ctime>  // time
using namespace std;
int cnt; 
// 根据input判断并生成response
std::string generateResponse(const std::string& input) {
    string response = "";
    
    if(input.find("你好") != std::string::npos || input.find("您好") != std::string::npos){
        response = "你好啊，有什么需要帮助的吗？";
    }
    else if(input.find("工作") != std::string::npos || input.find("学习") != std::string::npos){
        response = "加油！努力工作/study哦~";
    }
    else if(input.find("天气") != std::string::npos){
        int r = rand()%3;
        if(r == 0){
            response = "今天天气晴朗，阳光明媚~";
        }
        else if(r == 1){
            response = "今天有点阴，记得带把伞~";
        }
        else{
            response = "今天下雨，出门记得穿雨衣哦~";
        }
    }
    else if(input.find("笑话") != std::string::npos || input.find("搞笑") != std::string::npos){
        int r = rand()%4;
        if(r == 0){
            response = "为什么太阳要通电？因为..他们想要光明大陆。";
        }
        else if(r == 1){
            response = "为什么孙悟空最爱吃葡萄？因为..他可以变成葡萄！";
        }
        else if(r == 2){
            response = "我听说你考试都考了满分，那真是太好了！因为我教你的时候可没白费劲~";
        }
        else{
            response = "鞋子会咬人，怎么办？别担心，就算鞋子真的变成了野兽，我们也有鞋带、鞋夹可以对付它！";
        }
    }
    // 模板回答
    else if(input.find("名字") != std::string::npos||input.find("你是谁") != std::string::npos){
        response = "我就是汪北海，你想知道些什么呢？";
    }
    else if(input.find("再见") != std::string::npos){
        response = "下次再聊哦~";
    }
    else if(input.find("谢谢") != std::string::npos || input.find("感谢") != std::string::npos){
        response = "不用客气，我很开心能帮到你！";
    }
    else if(input.find("古诗") != std::string::npos){
    	response ="床前明月光，疑是地上霜，举头望明月，低头思故乡。" ; 
	}
	else if(input.find("故事")!=std::string::npos){
		response ="从前，有一棵树，他长得非常非常高，高到天都没它高......";
	} 
	else if(input.find("创造者")!=std::string::npos){
		response ="我的创造者是质子，他是一位程序员。";
	}
	else if(input.find("爱好") != std::string::npos){
        response = "我的爱好是计算机！";
    }
    else if(input.find("几岁") != std::string::npos||input.find("岁数") != std::string::npos){
        response = "我已经17岁了，但活力十足！";
    }
	else {
        response = input+"！";
    }
    return response;
}

int main() {
    srand(time(NULL)); // 初始化随机数生成器

    string input, output;
    cout << "汪北海： 你好，我是汪北海，有什么需要帮助的吗？" << endl;

    while(true) {
        getline(cin, input);
        output = generateResponse(input);
        cout << "汪北海： " << output << endl;
    }

    return 0;
}
