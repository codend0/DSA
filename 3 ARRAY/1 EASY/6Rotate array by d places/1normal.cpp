#include <iostream>
using namespace std;
void Rotatetoleft(int arr[], int n, int k)
{
    //edge case condition
  if (n == 0)
    return;
  k = k % n;//if k is greater than n, we can reduce it to its remainder when divided by n
  if (k > n)
    return;
    //for storing the value of intital value in a array
  int temp[k];
  for (int i = 0; i < k; i++)
  {
    temp[i] = arr[i];
  }
    //then it is changing the vakue of array on the right part to starting
  for (int i = k; i < n; i++)
  {
    arr[i-k] = arr[i];//i-k is 0 ,1 ,2 and i is k so it is storing thr value 
  }
   //storing value of temp array to array again of starting terms
  for (int i = n - k; i < n; i++)
  {
    arr[i] = temp[i -(n - k)];
  }
}
int main()
{
  int n = 7;
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int k ;
  cout<<"enter the number of rotation"<<endl;
  cin>>k;
  Rotatetoleft(arr, n, k);
  cout << "After Rotating the elements to left " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}