#include <iostream>
#include <fstream>
#include "library/input.h"
#include "library/proses.h"
#include "library/output.h"
using namespace std;

int main() {
  
  Input input;
  input.cetak();
  input.toFile();

  Proses proses;
  proses.getData();
  proses.proses();
  proses.toFile();

  Output output;
  output.getData();
  output.dataOut();
  
  return 0;
}
