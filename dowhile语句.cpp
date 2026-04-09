//#include <iostream>
//
//int main() {
//    int password;
//
//    // 无论如何，先让用户输入一次密码
//    do {
//        std::cout << "请输入密码 (提示: 1234): ";
//        std::cin >> password;
//
//        if (password != 1234) {
//            std::cout << "密码错误，请重试。" << std::endl;
//        }
//    } while (password != 1234); // 如果密码不对，就继续循环
//
//    std::cout << "密码正确，登录成功！" << std::endl;
//
//    return 0;
//}