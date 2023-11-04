#include <iostream>
#include <vector>

using namespace std;

struct Valor {
  int value;
  int count;

  Valor(int x, int y) {
    value = x;
    count = y;
  }
};

vector<int> Torneo(vector<int> input, int N, int K) {
  vector<int> output;
  vector<Valor> valores;

  for (int i : input) {
    valores.push_back(Valor(i, 0));
  }

  while (K >= 1) {
    if (valores[0].count == N) {
      valores[0].count = 0;
      valores.push_back(valores[0]);
      valores.erase(valores.begin());
    }

    if (valores[0].value > valores[1].value) {
      valores[0].count += 1;
      valores[1].count = 0;

      auto temp = valores[1];
      valores[1] = valores[0];
      valores[0] = temp;
    } else {
      valores[1].count += 1;
      valores[0].count = 0;
    }

    if (K == 1) {
      break;
    }

    // cout << "jkdassds  " << valores[0].value << endl;
    valores.push_back(valores[0]);
    valores.erase(valores.begin());

    /*
    cout << "Iter: " << K << endl;
    for(auto i: valores){
      cout << i.value << " count: " << i.count << endl;
    }
    */

    K -= 1;
  }

  output.push_back(valores[0].value);
  output.push_back(valores[1].value);

  cout << "Final: " << K << endl;
  for (auto i : output) {
    cout << i << endl;
  }

  return output;
}
