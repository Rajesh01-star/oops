#include <iostream>
using namespace std;
int main(){
  int row,column,i,j;
  cout << "Enter the number of rows : ";
  cin >> row;
  cout << "Enter the number of columns : ";
  cin >> column;
  int mat[row][column];
  for(i = 0; i < row; i++){
    for (j = 0; j < column; j++){
      cout << "Enter the ["<< i << "][" << j << "]" << "element : ";
      cin >> mat[i][j];
    }
  } 
  for(i = 0; i < row; i++){
    for (j = 0; j < column; j++){
      cout << "\t" << mat[i][j];
    }
    cout << endl;
  } 
  return 0;
}
