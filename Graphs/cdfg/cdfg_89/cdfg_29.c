#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 353949842
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, float p_4[5][3], signed char p_6,
          unsigned long long p_9, float p_11)
{
  unsigned int v_23;
  short v_21;
  unsigned long long v_19;
  double v_17;
  unsigned int v_15;
  double v_13;
  long v;
  short result;
  v_23 = 4294935774U;
  v_21 = (short)-7427;
  v_19 = (unsigned long long)p_6;
  if ((unsigned long long)(- (((double)p_6 * -2.03444923322e+38) / ((double)(
                                                                    7115ULL + v_19) + 652.))) <= 
      (- p_9 + (unsigned long long)((int)((signed char)p_11) << ((int)p_6 & 7))) - (unsigned long long)(
      (unsigned int)-2.57444985159e+18f - (unsigned int)v_21 * v_23)) {
    v_13 = (double)p_6;
    v_15 = 36U;
  }
  else {
    v_17 = (double)p;
    v_13 = - v_17;
    v_15 = (unsigned int)p;
  }
  if (((p_9 - (unsigned long long)v_13) % (unsigned long long)(-63721393 / (
                                                               (int)p_4[4][0] + 870) + 929)) * (unsigned long long)p <= 
      (unsigned long long)(371022141U ^ ! v_15) + p_9) result = (short)(- (
                                                       ~ p * (long long)(
                                                       3414568469UL * (unsigned long)p_4[3][0])));
  else {
    v = (long)(- (~ p_9));
    result = (short)(((long)(61 + (int)p_6) - - v) - (long)(- ((float)p_9 + p_11)));
  }
  return result;
}


