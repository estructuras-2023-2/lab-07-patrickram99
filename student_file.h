#include <iostream>
#include <vector>

using namespace std;

vector<int> Torneo(vector<int> input, int N, int K) {
  vector<int> output;

  while (K > 0) {
    if (input[0] > input[1]) {
      auto temp = input[1];
      input[1] = input[0];
      input[0] = temp;
    }

    cout << "Iter: " << K << endl;
    for (auto i : input) {
      cout << i << endl;
    }

    input.push_back(input[0]);
    input.erase(input.begin());

    K -= 1;
  }

  output.push_back(input[0]);
  output.push_back(input[1]);
  cout << "Final: " << K << endl;
  for (auto i : output) {
    cout << i << endl;
  }
  return output;
}
