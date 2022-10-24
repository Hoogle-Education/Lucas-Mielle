#include <iostream>

using namespace std;

int main() {

  int* v = (int *)malloc(3 * sizeof(int));
  v[0] = 1;
  v[1] = 2;
  v[2] = 3;

  cout << v[1] << endl;
  cout << *(v + 1) << endl;
  cout << *(1 + v) << endl;
  cout << 1[v] << endl;

}