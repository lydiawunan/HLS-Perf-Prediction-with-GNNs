#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 776326485
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, char p_4, unsigned short p_7, unsigned char p_9[2],
              float p_11)
{
  int v_15;
  unsigned long long v_13;
  signed char v;
  long long result;
  v_15 = (int)p_4;
  v_13 = 18446744073709540069ULL;
  v = (signed char)28;
  while ((float)(v_13 % (unsigned long long)(((int)p_4 * (int)p_9[0] + (int)p_4) + 115)) > 
         ((float)p_9[1] + 3636702976.f) - p_11) {
    v_13 = (unsigned long long)(v_15 + 3933);
    result = (long long)v_13;
    v_13 = 0ULL;
  }
  while_0_break: ;
  result = (long long)((~ p - p % (long)((int)p_4 + 1008)) / (((long)v + 
                                                               p / -31509L) + 103L));
  return result;
}


