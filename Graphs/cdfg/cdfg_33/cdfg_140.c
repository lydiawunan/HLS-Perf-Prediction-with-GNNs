#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 506723254
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, double p_5, float p_11, long long p_13[4],
                  unsigned int p_15[5][3][5])
{
  short v_21;
  unsigned char v_19;
  short v_17;
  unsigned int v_9;
  unsigned long v_7;
  unsigned char v;
  unsigned char result;
  v_21 = (short)p_15[2][0][1];
  v_19 = (unsigned char)222;
  v_17 = (short)-26363;
  v_9 = (unsigned int)p_11;
  v = (unsigned char)p_11;
  result = (unsigned char)p_5;
  if ((((unsigned int)(- p) - ~ v_9) & (unsigned int)((float)v_21 + p_11 / 769.f)) < (unsigned int)p) {
    v_7 = (unsigned long)(((long long)v_21 * (p_13[0] - (long long)v_17)) * (
                          (p_13[2] & -54156LL) + (long long)v));
    v = (unsigned char)((unsigned long)((int)v_17 * 169218457 >> 18ULL) % (
                        (v_7 | (unsigned long)v_19) * (unsigned long)-1469180987.77 + 53UL));
    v_9 = (unsigned int)(- ((unsigned long)(35186U - p_15[4][1][3]) % (
                            v_7 + 67UL)));
  }
  else {
    v_9 = (unsigned int)1.62086359146e+38f;
    result = (unsigned char)3614700153.54;
    v_7 = (unsigned long)(! (- (~ (short)-30449)));
  }
  while ((double)(~ v) * ((p * p_5) / 4294950101.) > (double)result) {
    result = v_7 + 4122190088UL;
    v_7 = (unsigned long)((long long)((int)((signed char)(p_5 / (double)(
                                                          p_11 + 397.f))) * -53) % (
                          p_13[0] + 988LL));
    v = (unsigned char)((unsigned long)((unsigned int)(- result) + v_9) / (
                        v_7 + 236UL));
    v = (unsigned char)((unsigned int)((int)v & (int)result) / (! v_9 + 668U) - (unsigned int)result);
  }
  while_0_break: ;
  return result;
}


