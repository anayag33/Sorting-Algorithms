#include <iostream>
#include <vector>
using namespace std;

template <typename T2>
T2 left_child(T2 i){
  return 2*i + 1;
}
template <typename T2>
T2 right_child(T2 i){
  return 2*i + 2;
}
template <typename T2>
T2 parent (T2 k){
  return (k-1)/2;
}
template <typename T, typename T2>
void make_heap (T data[], T2 n){
  T2 i = 0;
  T2 k = 0;
  for (i = 1; i <n; i++){
    k = i;
    while((k>0) && (data[k] > data[parent(k)])){
      swap(data[k], data[parent(k)]);
      k = parent(k);
    }
  }
}

template <typename T, typename T2>
void heapSort(T data[], T2 n){
  int unsorted;
  make_heap(data, n);
  unsorted = n;
  while(unsorted>1){
    unsorted--;
    swap(data[0], data[unsorted]);
    make_heap(data, unsorted);
  }
}

int main(){
  int data[] = {6, 5, 4, 3, 2, 1};
  heapSort(data, 6);
  for (int i = 0; i<6; i++){
    cout << data[i] << endl;
  }
}
