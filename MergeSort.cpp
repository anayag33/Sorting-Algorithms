#include <iostream>
#include <vector>
using namespace std;

void merge (vector<int>& A, int start, int middle, int end){
  vector<int>L;
  vector<int>R;
  for (int i = start; i<=middle; i++){
    L.push_back(A[i]);
  }
  for (int j = middle+1; j<=end; j++){
    R.push_back(A[j]);
  }
  int i = 0;
  int j = 0;
  for (int k = start; k<=end; k++){
    if (L[i] <= R[j]){
      A[k] = L[i];
      i++;
    }
    else{
      A[k] = R[j];
      j++;
    }
  }
}

void MergeSort (vector<int>& A, int start, int end){
  int middle = (start+end)/2;
  MergeSort(A, start, middle);
  MergeSort(A, middle+1, end);
  Merge (A, start, middle, end);
}

void MergeSort (vector<int>& A){
  MergeSort (A, 0, A.size()-1);
}

int main(){
  vector<int> data = {6, 5, 4, 3, 2, 1};
  MergeSort(data, 0, 5);
  for (int i = 0; i<6; i++){
    cout << data[i] << endl;
  }

}
