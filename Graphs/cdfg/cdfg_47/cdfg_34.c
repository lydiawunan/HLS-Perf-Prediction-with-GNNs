#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 29654528
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, double p_4, unsigned int p_6, unsigned int p_19,
                 signed char p_21)
{
  long v_17;
  long long v_15;
  float v_13;
  short v_11;
  signed char v_9;
  unsigned long v;
  unsigned int result;
  v_17 = (long)p_19;
  v_15 = 735594346LL;
  v_13 = (float)p_19;
  v_11 = (short)p_4;
  v_9 = (signed char)-32;
  v = (unsigned long)p_21;
  result = p_19;
  if ((unsigned int)(- v_13 + 14949.f) < ! ((p_19 + (unsigned int)v_9) ^ (unsigned int)(
                                            (int)p_21 - -65))) {
    v_17 = (long)(- (~ (-(signed char)17)));
    v_11 = (short)p_4;
    v_11 = (short)(~ (((int)p - (int)v_11) * (int)(- p)));
  }
  else {
    v = (unsigned long)((int)p_21 | -32);
    v_15 = (long long)p_19;
    v_9 = (signed char)(- -3.10320684394e+38f);
  }
  while (- (v + (unsigned long)p) >= (unsigned long)(- (! (! v_9)))) {
    result = v_15 * (long long)((unsigned long)v_13 + ((unsigned long)v_11 + 4294952470UL));
    v = (unsigned long)((int)(- (- p)) >> (- (p_19 | 4294957837U) & 7U));
    v_13 = (float)-353535950.262;
    v_9 = (signed char)((unsigned long)((p_6 - p_6) | (unsigned int)(
                                        -5590778959.24 * (double)v_13)) / (unsigned long)(
                        v_17 + 344L));
  }
  while_0_break: ;
  return result;
}


