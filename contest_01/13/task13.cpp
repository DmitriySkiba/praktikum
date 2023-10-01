#include <iostream> 

using namespace std;

int main()
{
  int n, k = 1, nline = 1, step = 1, nbranch = 3;
  cin >> n;

  while (k <= n) {
    for (int i = 0; i < nline && k <= n; i++) {
        cout << k++ << ' ';
    }

    cout << endl;
    nline += step;

    if (nline < 1) {
      step = 1;
      nline = 2;
      nbranch++;
    }
    else if (nline >= nbranch) {
      step = -1;
      nline -= 2;
    }
  }

}