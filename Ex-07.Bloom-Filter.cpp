#include <bits/stdc++.h>
using namespace std;

int hash1(string S, int size) {
  int hash = 0;
  int size1 = S.length();
  for (int i = 0; i < size1; i++) {
    hash = hash + (int)S[i];
    hash = hash % size;
  }
  return hash;
}
int hash2(string S, int size) {
  int hash = 0;
  int size1 = S.length();
  for (int i = 0; i < size1; i++) {
    hash = hash + (int)S[i];
    hash = (2 * hash) % size;
  }
  return hash;
}
bool lookup(bool *bit_Array, string S, int size) {
  int a = hash1(S, size);
  int b = hash2(S, size);
  if (bit_Array[a] == 1 && bit_Array[b] == 1) {
    return true;
  } else {
    return false;
  }
}
void insert(bool *bit_Array, string S, int size) {
  if (lookup(bit_Array, S, size)) {
    cout << "Element already present" << endl;
  } else {
    int a = hash1(S, size);
    int b = hash2(S, size);
    bit_Array[a] = true;
    bit_Array[b] = true;
    cout << "Succesfully inserted" << endl;
  }
}
int main() {
  bool bit_Array[1000] = {false};
  string S[] = {"abc", "acd", "efh", "acd"};
  int size = 1000;
  for (int i = 0; i < S->length() + 1; i++) {
    insert(bit_Array, S[i], size);
  }
}
