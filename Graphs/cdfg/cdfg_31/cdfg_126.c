#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 571116983
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p, unsigned int p_4[5][2], long p_6, unsigned int p_15,
                  long p_17)
{
  int v_23;
  unsigned short v_21;
  int v_19;
  signed char v_13;
  unsigned short v_11;
  unsigned int v_9;
  signed char v;
  unsigned long result;
  v_23 = -119235808;
  v_19 = -41338;
  v_13 = (signed char)p;
  v_11 = (unsigned short)p;
  v_9 = p_4[2][0];
  result = 27951421UL;
  if ((unsigned long)(~ (- ((long)v_13 / (p_17 + 969L)))) < (unsigned long)(~ p_4[0][1])) {
    result = (unsigned long)((4294945748U + (p_15 - 5755U)) / (unsigned int)(
                             v_19 + 1012));
    v = (signed char)((unsigned long)((p_15 % 56U) / (p_15 + 305U)) / (unsigned long)(
                      (25601L & ! p_17) + 178L));
    v_9 = (unsigned int)p_6;
  }
  else {
    v_21 = (unsigned short)(((long long)(p_15 / (unsigned int)(v_19 + 466)) & (
                             15893LL - (long long)p_4[3][1])) / (long long)(
                            p + 822));
    v = (signed char)((((unsigned long)p_4[2][1] + (unsigned long)p_17) + (unsigned long)(~ v_23)) << (
                      (unsigned int)(~ v_23) / ((4294938275U - p_4[3][1]) + 62U) & 31U));
    v_13 = (signed char)((unsigned long long)((unsigned int)(- v_21) % (
                                              ! p_15 + 555U)) % (- ((unsigned long long)p_6 * 406140116ULL) + 868ULL));
  }
  while ((unsigned long)p < (((unsigned long)4.96183486733e+37 - result) >> (
                             (p_4[3][1] >> (p & 31)) & 31U)) - (unsigned long)(
                            ~ p_6 / (long)((int)v % 13671 + 378))) {
    v_9 = (unsigned long long)v_13 - (unsigned long long)v_11 * ((unsigned long long)v_9 / 18446744072919911761ULL);
    v_13 = (signed char)p_6;
    v_11 = (unsigned short)p_4[2][0];
    v = (signed char)(- -3.32784527998e+38f);
  }
  while_0_break: ;
  return result;
}


