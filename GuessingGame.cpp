#include <iostream>
using namespace std;

void guess_game (int n){
  int guess;
  char answer;
  char answer2;
  int middle = n/2;
  int start = 1;
  int end = n;
  assert(n >= 1);
  cout << "Think of a whole number from 1 to " << n << "." << endl;
  answer = 'N';
  answer2 = 'N';
  guess = middle;
  while(guess > 0 && answer != 'Y'){
    guess = middle;
    cout << "Is your number " << guess << "?" << endl;
    cout << "Please answer Y or N, and press return: ";
    cin >> answer;
    if (answer == 'N'){
      cout << "Is your number greater than " << guess << "?" << endl;
      cin >> answer2;
      if (answer2 == 'Y'){
        start = middle + 1;
        middle = (start + end)/2;
      }
      else if (answer2 == 'N'){
        end = middle-1;
        middle = (start + end)/2;
      }
    }
  }
  if ((answer == 'Y') || (answer == 'y')) {
    cout << "I knew it all along." << endl;
  }
  else{
    cout << "I think you are cheating!" << endl;
  }
}

int main(){
  guess_game(20);
}
