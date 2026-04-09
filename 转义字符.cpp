//#include <iostream>
//
//int main() {
//    std::cout << "========== C++ 常见转义字符演示 ==========" << std::endl;
//
//    // 1. \n : 换行 (Newline)
//    // 将光标移动到下一行的开头
//    std::cout << "1. 换行符 (\\n):" << std::endl;
//    std::cout << "Hello\nWorld!\n\n";
//
//    // 2. \t : 水平制表符 (Tab)
//    // 跳到下一个Tab位置，非常适合用来做简单的文本对齐
//    std::cout << "2. 制表符 (\\t):" << std::endl;
//    std::cout << "姓名\t年龄\t职业\n";
//    std::cout << "Alice\t25\t工程师\n";
//    std::cout << "Bob\t30\t设计师\n\n";
//
//    // 3. \\ : 反斜杠 (Backslash)
//    // 因为 \ 是转义字符的引导符，想要打印出 \ 本身，就必须写两个
//    std::cout << "3. 反斜杠 (\\\\):" << std::endl;
//    std::cout << "文件路径: C:\\Program Files\\MyApp\n\n";
//
//    // 4. \" 和 \' : 双引号和单引号
//    // 用于在字符串内部包含引号，而不破坏字符串的边界
//    std::cout << "4. 引号 (\\\" 和 \\'):" << std::endl;
//    std::cout << "老师说：\"C++是一门强大的语言。\"\n";
//    std::cout << "字符 \'A\' 的ASCII码是65。\n\n";
//
//    // 5. \a : 响铃 (Alert/Bell)
//    // 触发系统提示音（在部分现代终端中可能会被静音或变成屏幕闪烁）
//    std::cout << "5. 响铃 (\\a):" << std::endl;
//    std::cout << "警告！系统发生错误...\a\n\n";
//
//    // 6. \b : 退格 (Backspace)
//    // 将光标向左回退一格。注意：如果后面接着输出字符，会覆盖掉原来的字符
//    std::cout << "6. 退格 (\\b):" << std::endl;
//    std::cout << "12345\bX\n\n"; // 预期输出: 1234X (5被回退并被X覆盖)
//
//    // 7. \r : 回车 (Carriage Return)
//    // 将光标移动到当前行的最开头。通常后面的输出会覆盖掉该行之前的字符
//    std::cout << "7. 回车 (\\r):" << std::endl;
//    std::cout << "123456789\rABC\n\n"; // 预期输出: ABC456789 (123被ABC覆盖)
//
//    // 8. \0 : 空字符 (Null character)
//    // 标志着C风格字符串的结束，在遇到 \0 时，系统会认为字符串已经输出完毕
//    std::cout << "8. 空字符 (\\0):" << std::endl;
//    std::cout << "Hello\0World!" << std::endl; // 预期只输出 Hello
//
//    return 0;
//}