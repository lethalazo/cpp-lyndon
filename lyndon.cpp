/**
 * A not so efficient code for identifying lyndon words.
 * Rotates the word, and cheks each rotation with the word.
 * Run time of f = O(n^2)
 * @author Arsalan Azmi
 * @version 1.0
 */
#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "Type a word\n";
  string a;
  getline(cin, a);
  string b = a;
  for (int i = 0; i < a.size() - 1; i++) {

    char temp = b[b.size() - 1];
    for (int j = a.size() - 1; j >= 0; j--) {
      b[j + 1] = b[j];
    }
    b[0] = temp;

    cout << b << "\n";
    if (b <= a) {
      cout << b;
      cout << "Not lyndon!";
      return NULL;
    }
  }
  cout << "Lyndon";
}
