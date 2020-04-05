#include <ctime>
#include <iostream>
using namespace std;

void sort(int q, int *arr) {
  int i, j;
  for (int i = 0; i < q - 1; i++)
    for (int j = 0; j < q - i - 1; j++)
      if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
  cout << endl;
  for (int i = 0; i < q; i++)
    cout << arr[i] << "  ";
}

int main() {
  srand(time(NULL));
  int n;

  cout << "Enter the number elements:" << endl << ">";
  cin >> n;
  cout << endl;
  int *mas = new int[n];

  for (int i = 0; i < n; i++) {
    mas[i] = rand() % 100;
    cout << mas[i] << "  ";
  }
  cout << endl;
  sort(n, mas);
  delete[] mas;
  return 0;
}
