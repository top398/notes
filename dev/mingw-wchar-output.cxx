//  MinGW / Win32 输出 wchar_t 字符（串）
// g++ z.cxx -static -fexec-charset=gbk -Wl,-Bdynamic -s
//

#include <locale>
#include <string>
#include <iostream>

#include <stdio.h>

using namespace std;

const char* psa = "A汉字ABC";
const wchar_t* psw = L"W汉字ABC";

int main()
{
  // 初始化
  setlocale(LC_ALL, "");
  ios::sync_with_stdio(false);
  //wcout.imbue(locale(""));

  cout << "C++" << psa << endl;
  wcout << "C++" << psw << endl;
  
  printf(("C: %s\n"), psa);
  printf(("C: %ls\n"), psw);
  return 0;
}