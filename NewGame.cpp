#include <iostream>
#include <string>

using std::string, std::cin, std::to_string, std::endl, std::cout;

int main(void) {
  int a, b;
  cin >> a >> b;
  for (int c = 1; c < 20000; ++c){
    string ac = to_string(a+c);
    string bc = to_string(b+c);
    cout << bc << endl;
    if (bc.find(ac) != std::string::npos) {
      cout << c << endl;
      return 0;
    } 

  }

  cout << -1 << endl;

  return 0;
}
