#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 112988489
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p[5], long long p_7, double p_11,
                  unsigned long p_15, unsigned int p_21)
{
  char v_27;
  double v_25;
  signed char v_23;
  unsigned long v_19;
  unsigned long v_17;
  char v_13;
  double v_9;
  short v_5;
  int v;
  unsigned char result;
  v_27 = (char)p_7;
  v_25 = (double)p[2];
  v_23 = (signed char)p[4];
  v_19 = (unsigned long)p[4];
  v_17 = 387805399UL;
  v_9 = (double)p[0];
  v_5 = (short)-16134;
  v = (int)p_15;
  result = (unsigned char)208;
  while ((double)((0 % ((int)((char)(- v_9)) + 415)) / ((int)p_11 + 479)) != p_11) {
    v_13 = (float)v_27 * -1.82354479792e+38f;
    v_19 = 254UL % (! v_17 + 769UL) - (unsigned long)v;
    v_25 = (double)((55947LL / (((long long)v - 342698944LL) + 813LL)) / (
                    (long long)((double)((int)v_13 % 86) + (-96. - v_25)) + 514LL));
    v_9 = (double)((int)((char)(- p_11 + (double)result)) * (int)(- v_13));
  }
  while_0_break: ;
  if (! (~ v) >= - (! ((int)v_23 >> 3))) {
    v_9 = 70. * p_11;
    result = (unsigned char)((double)((long long)(v * (int)v_5) / (~ p_7 + 173LL)) * (
                             - v_9 - -985.325805664));
    result = (unsigned char)(! ((unsigned int)((int)result / 23) + p[2]));
  }
  else {
    v_17 = (! v_19 * 16668UL) % (unsigned long)((p[2] - ! p_21) + 376U);
    v_13 = (char)(- (((long long)p_15 * p_7) / (p_7 / (long long)(v_17 + 185UL) + 991LL)));
    result = (unsigned char)0.f;
  }
  return result;
}


