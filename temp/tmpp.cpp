#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int a;
  std::cin >> a;
  switch (a) {
    case a>10:std::cout << "greater" << '\n';
          break;
    case a<10:std::cout << "less" << '\n';
            break;
    default: std::cout << "equal" << '\n';
  }
  return 0;
}
