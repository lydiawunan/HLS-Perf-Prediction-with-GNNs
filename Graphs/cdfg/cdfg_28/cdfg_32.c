#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 261668745
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p, unsigned long p_11, unsigned long p_13,
          unsigned int p_17, long p_21)
{
  long v_33;
  int v_31;
  double v_29;
  unsigned long long v_27;
  short v_25;
  unsigned short v_23;
  unsigned long v_19;
  signed char v_15;
  unsigned long v_9;
  unsigned long v_7;
  short v_4;
  unsigned int v;
  float result;
  v_33 = 1036470473L;
  v_29 = 44.111770808;
  v_27 = 18446744072714775754ULL;
  v_25 = (short)149;
  v_19 = 4294954002UL;
  v_9 = (unsigned long)p_17;
  v_7 = 48776UL;
  v_4 = (short)p_11;
  v = (unsigned int)p_11;
  result = -2.05095523088e+38f;
  while ((unsigned long)((int)((short)result) + (int)v_4) * (((unsigned long)v_4 ^ v_7) + (unsigned long)(
                                                             v_29 / (
                                                             (double)p_21 + 186.))) <= (unsigned long)p_21) {
    v_31 = (unsigned long)v_33 % 48329UL;
    v_9 = - ((unsigned long)v_31 * (v_7 + (unsigned long)result));
    v_4 = (short)((unsigned long)v_29 % (170UL % (! p + 945UL) + 109UL));
    v_7 = - ((unsigned long)p_17 & ! p_11);
  }
  while_0_break: ;
  if (13754UL < v_9) {
    v_4 = (short)((4286UL % (p + 849UL) + v_7 % 4294925139UL) % ((16001UL + v_9) % (
                                                                 (p_11 - p_13) + 603UL) + 100UL));
    v = (unsigned int)v_4;
    result = (float)v;
  }
  else {
    v_23 = (unsigned short)((unsigned long long)((unsigned long)(- p_21) - ~ p_11) - (
                            (unsigned long long)(! v_25) - (v_27 + v_27)));
    v_15 = (signed char)(~ v_19 | (~ p_13 + (unsigned long)(p_21 * (long)v_23)));
    result = (float)((long long)((501339732U + (unsigned int)v_15) * (
                                 21U % (p_17 + 1004U))) % (- (421835852LL - (long long)v) + 266LL));
  }
  return result;
}


