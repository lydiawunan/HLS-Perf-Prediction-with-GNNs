#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1030199394
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p, double p_13, char p_17, float p_19, long long p_21)
{
  short v_23;
  signed char v_15;
  short v_11;
  float v_9;
  double v_7;
  char v_5;
  signed char v;
  unsigned int result;
  v_23 = (short)6632;
  v_11 = (short)p_17;
  v_9 = -2.60440600669e+38f;
  v_7 = p_13;
  v_5 = (char)(- v_7 + (double)p_21);
  if ((long long)((int)((char)(- (-6626887238.95 / ((double)v_23 + 345.)))) - (int)p_17) <= (
      107LL ^ (p_21 / (long long)((int)v_11 + 379)) * (long long)((int)((unsigned short)v_9) >> 1))) {
    v = (signed char)v_7;
    v = v;
    result = (unsigned int)(- (((int)v / (p + 405)) / ((int)v_5 * 40548 + 106)));
  }
  else {
    v_11 = (short)((unsigned long long)(((int)p_17 % ((int)((char)p_19) + 881)) / 129) % (
                   (19704ULL - (unsigned long long)(- v_5)) + 590ULL));
    v_15 = (signed char)41;
    result = (unsigned int)((v_9 * (float)((int)v_11 ^ 98)) / ((float)(
                                                               (int)((signed char)(
                                                               753204409. / (
                                                               p_13 + 285.))) * (int)v_15) + 371.f));
  }
  return result;
}


