#include <iostream>
#include <fstream>
using namespace std;

// 使用 fstream 实例和 ios::out 管道实现文件读写
// 这是与 Perl 中的文件句完全相同的操作流程

int main() {
    const char *url ="http://c.biancheng.net/cplus/";
    fstream fs;                     // 实例化 fstream 类对象（Perl里的文件句柄），此处是空句柄
    fs.open("test.txt", ios::out);  // 用 fs 文件流（句柄）打开 test.txt（对文件而言是 io::out 输出方法）
    fs.write(url, 30);              // 向 fs 句柄（已包含 test.txt 文件）中写入 url 字符串
    fs.close();                     // 回收句柄
    return 0;
}
