#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 659244826
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, int p_5, short p_9, long p_11[5][2], short p_13)
{
  int v_29;
  signed char v_27;
  unsigned long long v_25;
  long long v_23;
  double v_21;
  unsigned long v_19;
  signed char v_17;
  char v_15;
  long long v_7;
  long long v;
  int result;
  v_29 = -43573;
  v_27 = (signed char)p;
  v_25 = (unsigned long long)p_5;
  v_23 = (long long)p_13;
  v_21 = (double)p_13;
  v_19 = 26940UL;
  v_17 = (signed char)p;
  v_7 = 990288243LL;
  v = -917606876LL;
  while ((unsigned long long)(v_23 * (long long)p_13 - ((long long)p_9 + ! v)) <= v_25) {
    v_19 = (long)v_29 / (((long)v_27 & -2091L) + 814L);
    v_21 = (double)((int)(~ p_9) + ! p_5);
    v_29 = (int)((! v >> (! v_7 & 63LL)) * (long long)(~ (- p_13)));
    v_25 = (unsigned long long)(v_29 % ((int)p_13 + 566));
  }
  while_0_break: ;
  if ((long long)(1. * v_21) != v_23) {
    v_7 = v * -3966206995LL;
    result = (int)(~ (! v_7 / (v_7 + 29LL)));
    result = (int)((-36487LL - (long long)result) * (v - (long long)p) >> (
                   p_5 & 63));
  }
  else {
    v_15 = (char)((unsigned long)p_5 - ((unsigned long)(! v_17) + v_19));
    result = -125 * ((int)((char)409.89074707f) % ((int)(- v_15) + 395));
    result = (int)((long)p_9 / (((p_11[2][0] + (long)result) ^ (long)(
                                 (int)((short)4.37557492982e+37f) + (int)p_13)) + 141L));
  }
  return result;
}


