#include <iostream>
using namespace std;

int main() {
  int ath, at, ao, bth, bt, bo;
  cin >> ath >> at >> ao >> bth >> bt >> bo;
  int apples = 3*ath + 2*at + ao;
  int bananas = 3*bth + 2*bt + bo;

  if (apples > bananas) {
    cout << "A";
  }

  if (bananas > apples) {
    cout << "B";
  }

  if (bananas == apples) {
    cout << "T";
  }
}