#include <iostream>
#include <vector>

using namespace std;

int main() {
  string s;
  getline(cin, s); // lee un string con espacios

  // Tengan cuidado con mezclar cin y getline
  // Si usan ambos, tienen que usar cin.ignore() antes del primer getline / despues del ultimo cin

  // Leer n strings con espacios
  int n;
  cin >> n;
  cin.ignore();
  for (int i = 0; i < n; i++) {
    getline(cin, s);
    cout << s << endl;
  }

  // Leer un vector de n elementos y luego un string con espacios
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin.ignore();
  getline(cin, s);

  return 0;
}