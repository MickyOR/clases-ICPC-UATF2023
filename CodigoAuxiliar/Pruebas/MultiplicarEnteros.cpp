#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;
  for (int t = 0; t < T; t++) {
    int A, B;
    cin >> A >> B;
    cout << A * B << endl;
  }
  return 0;
}

// 2^20 = 1048576