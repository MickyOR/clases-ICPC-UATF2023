#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  // char -> int
  // 'a' -> 4
  unordered_map<char, int> freq;
  for (char c : s) {
    freq[c]++;
  }
  for (auto it : freq) {
    cout << it.first << " " << it.second << endl;
  }
  return 0;
}