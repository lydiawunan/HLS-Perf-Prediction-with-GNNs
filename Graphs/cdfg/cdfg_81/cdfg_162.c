#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 825599814
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p, unsigned char p_4[1][1],
                  unsigned short p_6, signed char p_8[5][3],
                  unsigned char p_11)
{
  char v_25;
  char v_23;
  unsigned int v_21;
  signed char v_19;
  unsigned int v_17;
  float v_15;
  long v_13;
  unsigned int v;
  unsigned long result;
  v_25 = (char)-99;
  v_21 = (unsigned int)p_11;
  v_17 = 10338U;
  v_13 = (long)p_6;
  result = 4237445226UL;
  if ((unsigned long)(14L % ((((long)v_25 - 9578L) - (long)(~ p_8[2][0])) + 438L)) >= 
      (unsigned long)p_11 / ((p % 4095UL) * (unsigned long)(! p_6) + 582UL)) {
    v_19 = (signed char)(313114967UL + result);
    v_23 = (char)(! ((76 / ((int)p_6 + 600)) / ((int)(! p_11) + 625)));
    v_21 = (unsigned int)((int)v_23 + (int)p_8[3][1]);
  }
  else {
    v_19 = (signed char)-2.1383878309e+38f;
    v_17 = (unsigned int)-3771308.75f;
    v_13 = (long)p_11;
  }
  if ((long long)(((unsigned long)v_19 + 165678509UL) * (unsigned long)v_13) / (
      ! ((long long)v_17 / 26435LL) + 896LL) != (long long)(! (~ (- v_21)))) {
    result = (unsigned long)((int)p_4[0][0] * ((int)p_6 | (int)p_8[3][0] / -96));
    result = - ((result - 4294935602UL) * p);
  }
  else {
    v_15 = (float)(((unsigned long long)(~ v_17) % 102671106ULL) * (unsigned long long)(
                   ~ v_17 / 126U));
    v = (unsigned int)((unsigned long)(! v_13 - (long)(! p_8[3][1])) - (unsigned long)(
                       (unsigned int)v_15 * v_17 << ((87 ^ (int)p_11) & 31)));
    result = (unsigned long)(! (18446744073709520012ULL - (unsigned long long)v) / (unsigned long long)(
                             (int)(~ (~ p_11)) + 801));
  }
  return result;
}


