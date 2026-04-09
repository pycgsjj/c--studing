//#include <iostream>
//
//int main() {
//    std::cout << "========== C++ 常见运算符演示 ==========\n\n";
//
//    // --- 1. 算术运算符 (Arithmetic Operators) ---
//    std::cout << "--- 1. 算术运算符 ---\n";
//    int a = 10, b = 3;
//    std::cout << "设定初始值: a = 10, b = 3\n";
//    std::cout << "加法 (a + b) : " << (a + b) << "\n";
//    std::cout << "减法 (a - b) : " << (a - b) << "\n";
//    std::cout << "乘法 (a * b) : " << (a * b) << "\n";
//    // 注意：两个整数相除，结果会自动截断小数部分，保留整数
//    std::cout << "除法 (a / b) : " << (a / b) << "\n";
//    std::cout << "取模 (a % b) : " << (a % b) << " (求余数)\n\n";
//
//    // 自增与自减 (Increment and Decrement)
//    int c = 5;
//    std::cout << "设定初始值: c = 5\n";
//    // 后置：先使用当前值打印，然后再将 c 加 1
//    std::cout << "后置自增 (c++) : " << c++ << " (此时c变成了" << c << ")\n";
//    // 前置：先将 c 加 1，然后再使用新值打印
//    std::cout << "前置自增 (++c) : " << ++c << "\n\n";
//
//
//    // --- 2. 赋值运算符 (Assignment Operators) ---
//    std::cout << "--- 2. 赋值运算符 ---\n";
//    int d = 10;
//    std::cout << "设定初始值: d = 10\n";
//    d += 5; // 等同于 d = d + 5;
//    std::cout << "执行 d += 5 后，d = " << d << "\n";
//    d *= 2; // 等同于 d = d * 2;
//    std::cout << "执行 d *= 2 后，d = " << d << "\n\n";
//
//
//    // --- 3. 关系/比较运算符 (Relational Operators) ---
//    std::cout << "--- 3. 关系运算符 ---\n";
//    std::cout << "(注意：在C++中，输出 1 代表 true，0 代表 false)\n";
//    std::cout << "10 == 10 : " << (10 == 10) << " (等于)\n";
//    std::cout << "10 != 5  : " << (10 != 5) << " (不等于)\n";
//    std::cout << "10 > 5   : " << (10 > 5) << " (大于)\n";
//    std::cout << "10 <= 5  : " << (10 <= 5) << " (小于或等于)\n\n";
//
//
//    // --- 4. 逻辑运算符 (Logical Operators) ---
//    std::cout << "--- 4. 逻辑运算符 ---\n";
//    bool t = true;
//    bool f = false;
//    std::cout << "设定: t = true, f = false\n";
//    // 逻辑与 (AND)：两边都为真，结果才为真
//    std::cout << "t && f : " << (t && f) << " (逻辑与)\n";
//    // 逻辑或 (OR)：只要有一边为真，结果就为真
//    std::cout << "t || f : " << (t || f) << " (逻辑或)\n";
//    // 逻辑非 (NOT)：真变假，假变真
//    std::cout << "!t     : " << (!t) << " (逻辑非)\n\n";
//
//
//    // --- 5. 三元运算符/条件运算符 (Ternary Operator) ---
//    std::cout << "--- 5. 三元运算符 ---\n";
//    int age = 20;
//    std::cout << "当前年龄: " << age << "\n";
//    // 语法格式： 条件 ? 成立时返回的值 : 不成立时返回的值
//    std::cout << "是否成年: " << (age >= 18 ? "是" : "否") << "\n";
//
//    return 0;
//}