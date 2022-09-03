#include <iostream>
using namespace std;

int main() {
  /*
1. make integer for input
2. make a for loop for inputing into array
3. make another for loop and try to ^ all the numbers in the array.
*/
  int n;
  cin>>n;
  int c;
  int arr[n];
  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }
  int temp;
  c = arr[0]^arr[1];
  for(int i = 2; i<=n; i++){
    temp = c;
    c = temp^arr[i];
    //seems to not remeber the previous c
  }
  cout<<c;
}