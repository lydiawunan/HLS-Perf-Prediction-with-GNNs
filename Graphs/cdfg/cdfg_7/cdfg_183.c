#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 917268749
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, char p_9[4][1][2], unsigned long long p_11,
                 int p_15, float p_17)
{
  signed char v_21;
  short v_19;
  char v_13;
  short v_7;
  char v_4;
  short v;
  unsigned int result;
  v_21 = (signed char)109;
  v_19 = (short)p_17;
  v_13 = (char)-2;
  v_7 = (short)p_15;
  v = (short)p_11;
  result = 5723U;
  while ((unsigned long long)(~ (((int)v_7 - 8462) / ((int)v * (int)p + 398))) != (
         ((unsigned long long)((int)p_9[2][0][0] + 245169182) ^ (p_11 + (unsigned long long)p_17)) & (unsigned long long)(
         (int)v_19 / 335617496))) {
    v_4 = (char)(! (p_11 + 38153ULL) / (unsigned long long)((848UL * (unsigned long)result) / (unsigned long)(
                                                            (int)v_13 + 646) + 634UL));
    result = (unsigned int)(~ p_11 | (unsigned long long)((int)v_21 / (
                                                          (int)v_13 + 211) << (
                                                          (int)(~ v_4) & 31)));
    v = (short)((p_11 * (unsigned long long)v_13) / ((unsigned long long)(
                                                     (double)result + -43.1160869514) + 426ULL) + (unsigned long long)(- (
                p_15 * 119)));
  }
  while_0_break: ;
  if (28267U != ! ((unsigned int)((int)v_13 % (p_15 + 422)) + 1069456016U)) {
    v_4 = (char)((unsigned long long)p + 18446744073392605721ULL * (unsigned long long)(
                                         (int)p * (int)v_7));
    v = (short)v_4;
    result = (unsigned int)v;
  }
  else result = (unsigned int)((unsigned long long)p_9[3][0][0] | ! p_11);
  return result;
}


