#include <string>
typedef void(*comp_func)(double *, double *, double*);
void add_function(comp_func f, std::string name, int flop);
void kernel_base(double* A, double *x, double *y);
