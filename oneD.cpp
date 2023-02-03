#include <iostream>
using namespace std;
int main(){
  int limit,i;
  cout << "Enter the limit of the array : ";
  cin >> limit;
  int num[limit];
  for(i=0;i<limit;i++){
    cout << "Enter the " << i << "th element : ";
    cin >> num[i];
  }
  /* to display the array elements */
  for (i = 0; i < limit; i++){
    cout << "the " << i << "th element is : " << num[i] << endl;
  }
  return 0;
}

