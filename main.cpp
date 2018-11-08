#include <complex>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iostream>
#include <vector>


int main(){
    int nstot =10;
    int Dim =10;

    double mario[Dim];
    for (int i=0; i<Dim; i++) mario[i] = i;
    std::cout << *mario << std::endl;

    /*
     If you pause here, you can print out the value of an array running the
     gdb command:
     > p *mario@Dim
     The above command points to the variable mario and prints out the first
     Dim entries. We can use any integer as the index value.
    
     You can also do
     > p mario
     because this was allocated with a specific number of points.
      */
  double** f = ( double** ) calloc( nstot , sizeof( double* ) ) ;

  for (int i=0 ; i<nstot ; i++ ) {
    f[i] = ( double* ) calloc( Dim , sizeof( double ) ) ;
  }

  // Debugger automatically stops here since it can detect the segmentation fault.
    std::cout << f[100][6] << std::endl;
    return 0;
}
