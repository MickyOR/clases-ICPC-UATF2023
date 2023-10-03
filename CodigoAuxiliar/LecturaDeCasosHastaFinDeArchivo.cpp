#include <iostream>

using namespace std;

int main() {
  /*
  A veces un problema les dice "there are multiple test cases"
  o "the input consists of multiple lines" o algo similar.
  Esto significa que deben leer casos de prueba hasta que se acabe el archivo
  de entrada. Pueden hacer esto con un while
  */

  // leer strings hasta el final del archivo
  string s;
  while (cin >> s) {
    cout << s << endl;
  }

  // leer a y b, luego dos arreglos de a y b elementos, repetir hasta el final del archivo
  int a, b;
  while (cin >> a >> b) {
    int x[a], y[b];
    for (int i = 0; i < a; i++) {
      cin >> x[i];
    }
    for (int i = 0; i < b; i++) {
      cin >> y[i];
    }
  }
  return 0;
}