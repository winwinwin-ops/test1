#include <iostream>
using namespace std;

int main() {
    cout << "1.快樂星球" << endl;       // 一般輸出
    cout << "2.快樂 星球" << endl;      // 輸出空格
    cout << "3.快樂\t星球" << endl;       // \t = Tab (定位字元)
    cout << "4.快樂\n星球\n" << endl;     // \n = new line (換行)
    cout << "\"5.快樂\"" << endl;       // \" = 顯示雙引號 "
    cout << "\'6.快樂\'" << endl;       // \' = 顯示單引號 '
    cout << "\\7.快樂\\" << endl;       // \\ = 顯示反斜線 \
    return 0;
}
