#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 922374690
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, unsigned long long p_13[5][2], unsigned long p_17)
{
  double v_21;
  unsigned short v_19;
  char v_15;
  signed char v_10;
  double v_8;
  unsigned int v_6;
  char v_4;
  unsigned char v;
  float result;
  v_21 = (double)p_13[1][0];
  v_19 = (unsigned short)16679;
  v_15 = (char)p;
  v_10 = (signed char)p;
  v_8 = (double)p_17;
  v_6 = (unsigned int)p_17;
  v_4 = (char)p;
  result = (float)p_13[0][0];
  while ((long long)(146UL % (p_17 + 501UL)) > (long long)((unsigned long)(
                                                           (long)v_15 - 199908953L) * (unsigned long)v_6) % (
                                               (p + 982363956LL) / (long long)(
                                               (int)(- v_19) + 816) + 226LL)) {
    v_4 = (char)(! (p_13[3][1] - (unsigned long long)(p + (long long)v_10)));
    v_10 = (signed char)p_13[1][0];
    v_19 = (unsigned short)((double)((p / (long long)(p_17 + 77UL)) % (long long)(
                                     (int)(! v_10) + 821)) * (- v_21 / (
                                                              (double)(
                                                              p_13[3][1] * 307709505ULL) + 644.)));
  }
  while_0_break: ;
  if (((unsigned long long)p % (p_13[0][0] + 912ULL) - (unsigned long long)(
       p * (long long)v_15)) - (unsigned long long)p_17 >= ! (- ((unsigned long long)v_4 / (
                                                                 p_13[4][1] + 866ULL)))) {
    result = (float)(unsigned char)91;
    v = (unsigned char)(((-4153.f - result) + -1.40039410331e+38f) * (float)v_4);
    result = (float)v;
  }
  else {
    v_10 = (signed char)(- (~ (short)30812));
    v_6 = (unsigned int)(((int)((signed char)v_8) + (int)v_10) * (int)result);
    result = (float)(- ((double)v_6 + - v_8));
  }
  return result;
}


