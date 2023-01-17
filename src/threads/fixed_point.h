#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

typedef int32_t fixed_t;
#define P 17
#define Q 14
#define FRACTION 1 << (Q)
/* Fixed-point real arithmetic */
/* Here x and y are fixed-point number, n is an integer */
#define CONVERT_TO_FP(n) (n) * (FRACTION)
#define CONVERT_TO_INT_NEAREST(x) ((x) >= 0 ? ((x) + (FRACTION) / 2)\
                                   / (FRACTION) : ((x) - (FRACTION) / 2)\
                                   / (FRACTION))
#define ADD(x, y) (x) + (y)
#define SUB(x, y) (x) - (y)
#define ADD_INT(x, n) (x) + (n) * (FRACTION)
#define SUB_INT(x, n) (x) - (n) * (FRACTION)
#define MUL(x, y) ((int64_t)(x)) * (y) / (FRACTION)
#define MUL_INT(x, n) (x) * (n)
#define DIV(x, y) ((int64_t)(x)) * (FRACTION) / (y)
#define DIV_INT(x, n) (x) / (n)

#endif

