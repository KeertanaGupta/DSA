#include <iostream>
using namespace std;
void Rotatetoright(int arr[], int n, int D)
{
  if (n == 0)
    return;
  D = D % n;
  if (D > n)
    return;
  int temp[D];
  for (int i = n - D; i < n; i++)
  {
    temp[i - n + D] = arr[i];
  }
  for (int i = n - D - 1; i >= 0; i--)
  {
    arr[i + D] = arr[i];
  }
  for (int i = 0; i < D; i++)
  {
    arr[i] = temp[i];
  }
}
int main()
{
  int n = 7;
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int D = 2;
  Rotatetoright(arr, n, D);
  cout << "After Rotating the elements to right " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}