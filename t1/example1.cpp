#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;


int
main(int argc, char** argv)
{
  mat A(3,3);
  A.fill(0.0);
  A.print("A:");
  
  A(0,0) = 1.0;
  A(1,1) = 1.0;
  A(2,2) = 1.0;
  A.print("A:");

  colvec r;
  r << 0 << 1 << 0;
  r.print("r:");

  colvec prod = A * r;
  prod.print("prod:");
  
  return 0;
}

