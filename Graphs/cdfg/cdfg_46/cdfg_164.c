#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 538373829
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, unsigned char p_5, unsigned long p_7,
                 float p_9, long long p_17)
{
  unsigned int v_23;
  signed char v_21;
  float v_19;
  int v_15;
  double v_13;
  unsigned int v_11;
  float v;
  unsigned int result;
  v_23 = 60117U;
  v_21 = (signed char)95;
  v_19 = 622.966796875f;
  v_13 = 2.90527833173e+38;
  v_11 = (unsigned int)p_17;
  v = p_9;
  if ((int)(- v) + - (56 % ((int)((signed char)v_19) + 350)) > 27566) {
    v_15 = (int)(- (- (- v_19)));
    v_11 = (unsigned int)(22158UL / (~ (3908999089UL & p_7) + 798UL));
    v_13 = (double)18446744073377528805ULL;
  }
  else {
    v = (float)((int)p / (((int)((char)(v + -2.1311068515e+38f)) - -11) + 620));
    v_15 = (((int)((signed char)p_9) & (int)v_21) - (int)v_13) << (~ (
                                                                   14049U + v_23) & 31U);
    v_13 = (double)(-18LL * ((long long)v % (p_17 + 89LL) + (long long)p_5));
  }
  if (! p_7 == (unsigned long)(- ((float)((long long)v_15 + p_17) * (
                                  (float)v_11 / (p_9 + 356.f))))) {
    v = (float)918896856ULL;
    result = (unsigned int)((float)((int)(! p) * 30402) + v);
  }
  else {
    v_11 = (unsigned int)(- v_13);
    result = (unsigned int)((unsigned long)(- p_5) / ((p_7 + (unsigned long)(
                                                       (unsigned int)p_9 - v_11)) + 24UL));
    result = ! (result * result);
  }
  return result;
}


