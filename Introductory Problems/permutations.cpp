#include <iostream>
#define ll long long int
using namespace std;

void permutacao(ll n) {
  if (n == 2 or n == 3) {
    cout << "NO SOLUTION" << endl;
    return;
  }
  for (int i = 2; i <= n; i += 2) {
    cout << i << " ";
  }
  for (int i = 1; i <= n; i += 2) {
    cout << i << " ";
  }
}
int main() {
  ll n = 0;
  cin >> n;
  permutacao(n);
  return 0;
}
