#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 490536458
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p[5], unsigned long p_4, unsigned int p_6[2][3][5],
                unsigned long long p_8, int p_10)
{
  float v_21;
  signed char v_19;
  unsigned short v_17;
  long v_15;
  int v_13;
  char v;
  signed char result;
  v_21 = 854.713806152f;
  v_19 = (signed char)-30;
  v_17 = (unsigned short)p_6[1][0][0];
  v_15 = -47613L;
  v_13 = -364688774;
  v = (char)113;
  while ((unsigned long)p_10 > ((unsigned long)((int)v - v_13) % (p_4 + 635UL) & (unsigned long)(
                                (long)(! v) % (! v_15 + 949L)))) {
    v_15 = (unsigned long)v_19 * ((unsigned long)v_17 + 3737620954UL);
    v_17 = (unsigned short)((float)(~ (-101 ^ (int)((char)p[1]))) * v_21);
    v_19 = (signed char)(~ (unsigned short)64660);
    v_13 = (int)(p_4 | 161UL);
  }
  while_0_break: ;
  if (p_6[1][1][0] % (unsigned int)(! (~ p_10) + 1015) != ((unsigned int)(- p[4]) ^ 
                                                           p_6[1][2][0] / (unsigned int)(
                                                           p_10 + 811)) % (unsigned int)(
                                                          (int)(! (- v)) + 288)) 
    result = (signed char)(- (p[0] / 32636.));
  else result = (signed char)((unsigned long long)p_4 & ((unsigned long long)(
                                                         (long long)p_6[1][1][0] % -16833147LL) - - p_8));
  return result;
}


