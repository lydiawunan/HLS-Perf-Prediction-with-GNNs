#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 359129359
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p[5][2][2], float p_7[5][2][2], long p_9,
                unsigned short p_13, short p_17)
{
  unsigned long v_23;
  unsigned short v_21;
  unsigned long v_19;
  long v_15;
  int v_11;
  unsigned int v_4;
  unsigned int v;
  signed char result;
  v_23 = (unsigned long)p_13;
  v_21 = (unsigned short)57070;
  v_19 = (unsigned long)p_9;
  v_15 = -558383674L;
  v_11 = 25713;
  v_4 = 73394475U;
  v = (unsigned int)p_13;
  result = (signed char)36;
  while (! (- (823709103UL % (v_19 + 969UL))) < (unsigned long)((double)(
                                                                (int)(! p_13) % 725) * (
                                                                ((double)p_7[2][1][0] + 1669408315.82) / 3.18383883689e+38))) {
    v_21 = (unsigned short)(~ ((int)v_21 / ((int)p[0][1][1] + 620)) + (int)p_17);
    v_23 = (v_23 + 22711UL) * (unsigned long)result;
    v_19 = (unsigned long)((unsigned int)(! ((int)p_13 | (int)v_21)) / (
                           ((unsigned int)v_11 * v_4 - ((unsigned int)p[3][0][0] & v)) + 359U));
  }
  while_0_break: ;
  if (((p_9 - 30L) + v_15) * ~ (p_9 / 4188L) == -52L) {
    v_4 = (unsigned int)(~ p[2][0][1]);
    v = (unsigned int)((long long)((int)p_13 / (~ v_11 + 453)) - (((long long)p_13 + -39182LL) + (long long)(! p[2][0][1])));
    result = (signed char)((unsigned long)((v / (v_4 + 1004U)) % (unsigned int)(
                                           ((int)p[2][0][0] | 116) + 483)) / (
                           (unsigned long)(v_4 | (unsigned int)p_7[0][0][0]) * (unsigned long)(
                           p_9 + (long)v_11) + 277UL));
  }
  else {
    v_15 = (long)(! (0 / (unsigned int)((int)(~ p_17) + 575)));
    result = (signed char)(~ (! v_15) & (long)-8125251943.57);
  }
  return result;
}


