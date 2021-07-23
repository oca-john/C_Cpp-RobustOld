#include <iostream>
#include <fstream>
using namespace std;

// 非（Perl）句柄的思路 => 定义句柄，用句柄打开、读写、关闭
// 综合使用 ifstream 和 ofstream 文件流

int main()
{
    int x,sum=0;
    ifstream srcFile("in.txt", ios::in);    // 用 ifstream 定义源文件备读（同时创建 srcFile 句柄）
    if (!srcFile) {                         // 失败提示
        cout << "error opening source file." << endl;
        return 0;
    }

    ofstream destFile("out.txt", ios::out); // 用 ofstream 定义目标文件备写
    if (!destFile) {
        srcFile.close();                    // 若调用失败需提前关闭中间句柄（文件流）
        cout << "error opening destination file." << endl;
        return 0;
    }

    while (srcFile >> x) {                  // 用 ::cin 文件流的方式使用 srcFile 文件流/句柄
        sum += x;
        destFile << x << " ";               // 用 ::cout 文件流的方式使用 destFile 文件流/句柄
    }

    cout << "sum：" << sum << endl;         // 输出
    destFile.close();                       // 关闭所有文件流对象/句柄
    srcFile.close();
    return 0;
}
