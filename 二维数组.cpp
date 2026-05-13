//#include <iostream>
//#include <vector>
//
//int main() {
//    std::cout << "--- C++ 二维数组四种创建方法演示 ---\n\n";
//
//    // ==========================================
//    // 方法 1：传统静态二维数组 (Static 2D Array)
//    // 特点：栈区分配，内存连续。必须在编译时确定常量大小。
//    // ==========================================
//    std::cout << "[1] 传统静态二维数组\n";
//    const int static_rows = 3;
//    const int static_cols = 4;
//    int arr1[static_rows][static_cols] = {
//        {1,  2,  3,  4},
//        {5,  6,  7,  8},
//        {9, 10, 11, 12}
//    };
//    std::cout << "Element at (1, 2): " << arr1[1][2] << "\n\n";
//
//
//    // ==========================================
//    // 方法 2：使用 new 动态分配 (Dynamic Array of Pointers)
//    // 特点：堆区分配，内存不连续。大小可以在运行时确定。
//    // ==========================================
//    std::cout << "[2] 使用 new 动态分配\n";
//    int dynamic_rows = 3; // 运行时变量
//    int dynamic_cols = 4;
//
//    // 1. 分配内存
//    int** arr2 = new int* [dynamic_rows];
//    for (int i = 0; i < dynamic_rows; ++i) {
//        arr2[i] = new int[dynamic_cols];
//    }
//
//    // 2. 赋值与访问
//    arr2[1][2] = 7;
//    std::cout << "Element at (1, 2): " << arr2[1][2] << "\n";
//
//    // 3. 释放内存 (非常重要，防止内存泄漏！)
//    for (int i = 0; i < dynamic_rows; ++i) {
//        delete[] arr2[i]; // 先释放每一行
//    }
//    delete[] arr2;        // 再释放指针数组
//    std::cout << "(内存已手动释放)\n\n";
//
//
//    // ==========================================
//    // 方法 3：使用 std::vector 嵌套 (Nested Vectors)
//    // 特点：现代 C++ 日常推荐，自动管理内存，可随时改变大小。
//    // ==========================================
//    std::cout << "[3] 使用 std::vector 嵌套\n";
//    int vec_rows = 3;
//    int vec_cols = 4;
//
//    // 创建并初始化为 0
//    std::vector<std::vector<int>> arr3(vec_rows, std::vector<int>(vec_cols, 0));
//
//    arr3[1][2] = 7;
//    std::cout << "Element at (1, 2): " << arr3[1][2] << "\n\n";
//
//
//    // ==========================================
//    // 方法 4：用一维 std::vector 模拟二维数组 (Flat 1D Vector)
//    // 特点：高性能计算首选，自动管理内存，底层内存完全连续。
//    // ==========================================
//    std::cout << "[4] 用一维 std::vector 模拟二维数组\n";
//    int flat_rows = 3;
//    int flat_cols = 4;
//
//    // 创建一个大小为 rows * cols 的一维 vector
//    std::vector<int> arr4(flat_rows * flat_cols, 0);
//
//    // 访问 (r, c) 的公式是 [r * cols + c]
//    int r = 1;
//    int c = 2;
//    arr4[r * flat_cols + c] = 7;
//
//    std::cout << "Element at (1, 2): " << arr4[r * flat_cols + c] << "\n\n";
//
//
//    std::cout << "--- 演示结束 ---\n";
//    return 0;
//}