#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 169201803
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p, short p_17, unsigned long long p_19, signed char p_25,
                int p_27[4])
{
  short v_29;
  long v_23;
  unsigned long long v_21;
  long v_15;
  double v_13;
  unsigned char v_11;
  unsigned long v_9;
  int v_6;
  unsigned long long v_4;
  float v;
  signed char result;
  v_29 = (short)p_19;
  v_23 = (long)p_27[3];
  v_15 = (long)p_27[2];
  v_11 = (unsigned char)55;
  if (108 < ! ((int)p_17 * (int)v_29 + ~ p_27[3])) {
    v_21 = p_19 - (unsigned long long)p_17;
    result = (signed char)p_17;
    v_13 = (double)(4118156084ULL - (p_19 * 18446744073709551593ULL) % (
                                    - v_21 + 604ULL));
  }
  else {
    v_11 = (unsigned char)194;
    v_13 = (double)(- ((v_23 * (long)p_25) / (long)(- p_27[0] + 935)));
    result = (signed char)(-(unsigned char)106);
  }
  if ((double)p_17 <= v_13) {
    v_4 = (unsigned long long)(- (-6889782636.79 * (double)(- result)));
    v = (float)v_4;
    result = (signed char)v;
  }
  else {
    v_9 = (unsigned long)(-259481635 / ((int)((double)v_11 - v_13) + 109) - 
                          6 * (76 << (v_15 & 7L)));
    v_6 = (int)((unsigned long)p / (! ((unsigned long)8978240512.f + v_9) + 587UL));
    result = (signed char)(~ v_6);
  }
  return result;
}


