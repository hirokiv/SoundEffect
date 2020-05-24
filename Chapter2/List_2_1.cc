#include <iostream>
using namespace std;

const int M = 5;
double weight_sum(double*, double*);

int main(){
  double y = 0.;
  double w[M] = {1,2,3,4,5};
  double x[M] = {1,2,3,4,5};
  
  y = weight_sum(w,x);
  cout << y << endl;
  return 0;
}



double weight_sum(double *w, double *x){
  double y_temp=0.;
  for (int m=0; m<M; m++){
      y_temp += w[m] * x[m];
  }
  return y_temp;
}

