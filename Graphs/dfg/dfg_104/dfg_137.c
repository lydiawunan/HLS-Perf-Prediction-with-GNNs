#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 922232943
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p[1][4][1], unsigned long long p_7)
{
  short v_4;
  long long v;
  unsigned long long result;
  v_4 = (short)(18446744072911662985ULL / (((unsigned long long)((p[0][3][0] << 1) * (unsigned int)-1.79536376924e+38) - (
                                            (unsigned long long)(10449U / (
                                                                 p[0][0][0] + 578U)) + 
                                            p_7 * 18446744073709534607ULL)) + 549ULL));
  v = (long long)((int)(! v_4) - 33897);
  result = (unsigned long long)v;
  return result;
}


