#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 972611015
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned short p[4], float p_5[4][5][3], unsigned int p_9,
              char p_11)
{
  long long v_7;
  signed char v;
  long long result;
  v = (signed char)-32;
  result = 129445118LL;
  if ((int)(- p_5[1][4][0]) > ~ ((int)(- p_11) / ((int)v + 410))) v = (signed char)27;
  else {
    v = (signed char)(- (- (result / (result + 55LL))));
    v_7 = (long long)(0U % (((unsigned int)(- p_5[0][2][2]) + ! p_9) + 472U));
    v = (signed char)((long long)p_5[2][4][0] - (v_7 << ((int)v * (int)((signed char)3.04904915947e+38f) & 63)));
  }
  result = (long long)((18446744073441095418ULL / (unsigned long long)(
                        (int)p[3] % ((int)v + 616) + 374)) / (unsigned long long)(
                       (int)(~ (~ p[2])) + 710));
  return result;
}


