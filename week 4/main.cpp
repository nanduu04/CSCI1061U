#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>

using namespace std;

void count(char* arr, int n, int* counts);

int main(int argc, char** argv)
{
  if (argc < 2) {
    cerr << "Usage: " << argv[0] << " <count>" << endl;
    cerr << "\t<count> is an integer between 10 and 10000\n";
    cerr << "\tExiting.";
    return -1;
  }

  int n = atoi(argv[1]);
  if (n < 10 || n > 10000) {
    cerr << "Usage: " << argv[0] << " <count>" << endl;
    cerr << "\t<count> is an integer between 10 and 10000\n";
    cerr << "\tExiting.";
    return -2;
  }
  
  srand(time(NULL));

  //////////////////////////////////////////////
  //
  // TODO
  // Change the following line to char* arr = new char[n];
  //
  //////////////////////////////////////////////
  char* arr = new char[n];

  //////////////////////////////////////////////
  //
  // TODO
  // Change the following lines such arr
  // contains letter A - Z.   The letters will be 
  // randomly generated.
  //
  //////////////////////////////////////////////
  for (int i=0; i<n; ++i) {
    arr[i] = rand() % 26 + 65;
  }

  for (int i=0; i<n; ++i) {
    cout << arr[i] << ' ';
  }
  cout << endl;
  
  delete [] arr;

  return 0;
}