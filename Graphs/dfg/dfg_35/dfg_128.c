#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 577395338
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p[4][2][3], short p_11, long p_13, long long p_19)
{
  signed char v_17;
  char v_15;
  int v_8;
  char v_6;
  unsigned int v_4;
  unsigned long v;
  double result;
  v_17 = (signed char)p[0][0][0];
  v_15 = (char)p_19;
  v_6 = (char)p_19;
  v_4 = 480278U;
  v = (unsigned long)((long long)(6L - (p_13 + (long)v_17)) % (((long long)(- v_17) - ! p_19) + 398LL) | (long long)(
                      ((unsigned long)(! v_4) - (unsigned long)p_13) * 116UL));
  v_8 = (int)v_17 + (((int)((unsigned char)-56.5938807178) * 55 ^ ((int)v_15 + (int)v_17)) - -22659);
  v = (unsigned long)((long long)(- ((int)v_6 << (! p[3][0][0] & 7))) + (
                      (long long)(- v_15) & (long long)v / (((long long)v_8 + 1055835245LL) + 686LL)));
  result = (double)((108UL * ((v + (unsigned long)v_4) * (unsigned long)(
                              (int)v_6 % 27605))) * (unsigned long)(- (
                    (long)(v_8 + p[3][0][2]) + (long)p_11 / (p_13 + 131L))));
  return result;
}


