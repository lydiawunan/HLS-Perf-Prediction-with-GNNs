#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 40710075
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p[2][2], unsigned short p_7,
                 unsigned short p_11[1][4][5])
{
  unsigned int v_13;
  long long v_9;
  char v_4;
  double v;
  unsigned int result;
  v_4 = (char)-19;
  v_13 = (unsigned int)(-106 >> 6U);
  v = (double)v_13;
  v_9 = (long long)(4117266179ULL % (~ (4334331409ULL % (unsigned long long)(
                                        389861021U / (unsigned int)((int)p_11[0][2][0] + 954) + 468U)) + 230ULL));
  result = (unsigned int)((long long)((int)((char)(- (v / 1.95529476681e+38))) + (int)(- (! v_4))) + 
                          p[1][1] / (- ((long long)p_7 * v_9) + 439LL));
  return result;
}


