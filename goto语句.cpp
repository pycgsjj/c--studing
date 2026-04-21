//#include <iostream>
//
//int main() {
//    int counter = 0;
//
//    // 定义一个标签 (Label)，注意后面是冒号 :
//start_loop:
//
//    std::cout << "当前计数: " << counter << std::endl;
//    counter++;
//
//    // 如果条件满足，就跳回到标签处继续执行
//    if (counter < 3) {
//        goto start_loop;
//    }
//
//    std::cout << "循环结束！" << std::endl;
//
//    return 0;
//}