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
    int Dim =2;

  double** f = ( double** ) calloc( nstot , sizeof( double* ) ) ;

  for (int i=0 ; i<nstot ; i++ ) {
    f[i] = ( double* ) calloc( Dim , sizeof( double ) ) ;
  }
    std::cout << f[100][6] << std::endl;
    return 0;
}
