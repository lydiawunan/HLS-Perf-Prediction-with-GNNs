#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 398441438
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, unsigned long p_4, char p_6, unsigned char p_9,
           unsigned char p_11)
{
  unsigned long long v;
  double result;
  result = 1541402736.37;
  v = (unsigned long long)((int)p_11 + 2852);
  result = ((double)(p_4 % (unsigned long)((int)p / ((int)((signed char)-2.72791637858e+38) + 516) + 467)) + 
            ((double)p_9 + result) * 3464249289.) + result;
  result = (double)(((unsigned long long)p_6 & (unsigned long long)-3.01647855059e+36f % (
                                               v + 738ULL)) / 768644613ULL + (unsigned long long)(
                    1 % (long long)(((int)(- result) + (int)p_6 * (int)p) + 342)));
  result = (double)(8 * ((int)(~ (! p)) - (int)((signed char)((double)(
                                                              -7100817408.f * (float)p_4) + 
                                                              -249.934227802 / (
                                                              result + 137.)))));
  return result;
}


