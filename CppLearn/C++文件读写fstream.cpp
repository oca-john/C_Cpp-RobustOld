#include <iostream>
#include <fstream>
using namespace std;

// 使用 fstream 实例和 ios::out 管道实现文件读写

int main() {
    const char *url ="http://c.biancheng.net/cplus/";
    fstream fs;                     // 实例化 fstream 类对象（句柄）
    fs.open("test.txt", ios::out);  // 将 test.txt 文件和 fs 文件流关联
    fs.write(url, 30);              // 向test.txt文件中写入 url 字符串
    fs.close();
    return 0;
}
