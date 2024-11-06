#ifndef MACROS_H

#define MACROS_H
#define Z 11

#define MAX(a,b) ((a) > (b)) ? (a) : (b)
#define MIN(a,b) ((a) < (b)) ? (a) : (b)
#define POW_3(a) ((a)*(a)*(a))
#define POW_2(a) ((a)*(a))
#define ABS(a) ((a) > 0) ? (a) : (-(a))
#define PRINT_I(a) (std::cout << "Control output" << std::endl << (a) << std::endl)
#define PRINT_R(a) (std::cout << "Result = " <<  (a) << std::endl)

#endif 