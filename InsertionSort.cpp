#include <iostream>
#include <vector>
using namespace std;

void insertionSort (int A[], int start, int finish){
  for (int i = start + 1; i <= finish; i++){
    int key = A[i];
    int j = i-1;
    while( j>= start && key < A[j]){
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = key;
  }
}

int main(){
  int data[] = {6, 5, 4, 3, 2, 1};
  insertionSort(data, 0, 5);
  for (int i = 0; i<6; i++){
    cout << data[i] << endl;
  }
}
