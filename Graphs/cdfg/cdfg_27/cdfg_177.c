#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 880441227
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p[3], long long p_5[4][4][4],
                       unsigned long long p_7[4][5][2],
                       long long p_11[1][2][2], float p_13)
{
  signed char v_9;
  int v;
  unsigned long long result;
  v_9 = (signed char)(~ (144878417LL % (p_5[3][2][2] + 368LL)));
  if (p_7[1][0][1] / (unsigned long long)(~ (26559 % ((int)v_9 + 323)) + 979) < (unsigned long long)(
      (double)((-1.91596281423e+38f + (float)p_11[0][1][1]) - (float)(
               18446744073709486419ULL & (unsigned long long)p_13)) + -911.017431553)) 
    result = (unsigned long long)p[1];
  else {
    v = (int)(4294916316U - (3969000460U >> ((-24371LL ^ p_5[3][3][2]) & 31LL)));
    result = (unsigned long long)(- (102596UL * (unsigned long)(~ v)));
  }
  return result;
}


