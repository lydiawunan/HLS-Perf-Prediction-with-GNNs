#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 556762749
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, unsigned char p_5,
                unsigned char p_15[5][3][2])
{
  unsigned long v_17;
  int v_13;
  unsigned int v_11;
  char v_9;
  double v_7;
  unsigned char v;
  signed char result;
  v_17 = (unsigned long)p_5;
  v_13 = 922326183;
  v_11 = 23488U;
  v_9 = (char)p_15[2][0][1];
  v_7 = -9.68318033146e+37;
  v = (unsigned char)118;
  result = (signed char)105;
  if ((unsigned long long)v_17 * - ((unsigned long long)result ^ 18446744073192856930ULL) > (
      (unsigned long long)((unsigned long)-3421325184.22 * v_17 & (unsigned long)(
                           v_11 + (unsigned int)p_15[0][2][0])) & (p * (unsigned long long)p_15[3][1][1] | 5445ULL))) {
    v_11 = (unsigned int)(! (- ((int)p_5 / ((int)v_9 + 617))));
    v_9 = (char)(15708L / (((long)p_15[4][0][1] * 904483062L) * (long)(
                           (int)p_5 | (int)p_5) + 80L));
    v_13 = (int)p;
  }
  else {
    v_9 = (char)((unsigned long long)(26078UL / (unsigned long)(! v_11 + 837U)) - (
                 (p >> 13LL) + (unsigned long long)((float)v_13 / 2.52086945473e+38f)));
    v = (unsigned char)(! v_17);
    result = (signed char)56;
  }
  while (- (2871366ULL / ((unsigned long long)v * p + 925ULL)) == (unsigned long long)(- (
         ((double)p_5 - v_7) - (double)((int)((unsigned short)v_7) / 24836)))) {
    v_9 = v_11 | (unsigned int)v_9 * 4294942136U;
    v = (unsigned char)(-6811566393.55 + (double)((int)p_15[4][2][0] % (
                                                  (int)p_5 + 852) - ~ v_13));
    v_13 = - (-213754340);
    v_7 = (double)(19554UL / (unsigned long)((int)(! result) + 402) & 1026636695UL);
  }
  while_0_break: ;
  return result;
}


