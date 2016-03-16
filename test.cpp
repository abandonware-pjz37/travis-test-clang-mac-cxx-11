#include <utility>

int main() {
  int x(3);
  int y = std::move(x);
}
