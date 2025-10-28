#include <iostream>
#include <string> // 注意: 程式碼中使用了 string 型別，必須 #include <string> 標頭檔
using namespace std;

int main() {
    string t = "成績:"; // 宣告一個字串變數 t
    int s1 = 88, s2 = 98, s3 = 96; // 宣告三個整數變數
    
    cout << t << endl; // 輸出字串 t 並換行
    cout << s1 << "\t" << s2 << "\t" << s3 << "\t" << endl; // 輸出三個成績，並用 Tab 隔開
    return 0;
}
