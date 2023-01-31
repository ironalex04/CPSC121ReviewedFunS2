#include "vecfuncs.h"
int main() {

  int min, max;
  vector<int> userNums;

  fillVector(userNums);
  cout << "size: " << userNums.size();
  findExtremes(userNums, min, max);
}
// find min and max in vector
// convert to the 3 file format
