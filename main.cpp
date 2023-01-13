#include <iostream>
#include <algorithm>

int main() {
  std::cout << "Podaj elementy zbioru: ";

  int x;
  int min_elem = std::numeric_limits<int>::max();
  int max_elem = std::numeric_limits<int>::min();

  while (std::cin >> x) {
    min_elem = std::min(min_elem, x);
    max_elem = std::max(max_elem, x);
  }

  std::cout << "Kres dolny: " << min_elem << std::endl;
  std::cout << "Kres gorny: " << max_elem << std::endl;

  return 0;
}
