#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 53882550
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, signed char p_11[4][5], unsigned long p_15,
              char p_17[2][1])
{
  unsigned long v_23;
  unsigned short v_21;
  long long v_19;
  double v_13;
  unsigned short v_8;
  float v_6;
  int v_4;
  char v;
  long long result;
  v_23 = p_15;
  v_21 = (unsigned short)55807;
  v_19 = -28948LL;
  v_13 = (double)p_15;
  v_6 = (float)p;
  v_4 = -56807;
  v = (char)p_15;
  result = -276762143LL;
  if (v_19 % ((long long)(1.84467440737e+19f + v_6) + 787LL) >= (long long)(
      ((unsigned long)p_17[1][0] - ((unsigned long)v_21 - v_23)) - (unsigned long)(~ p_11[1][2]))) {
    v_6 = (float)v_4;
    v_6 = (float)((long)v_6 % (p + 327L));
    v_8 = (unsigned short)3288;
  }
  else {
    v_4 = (int)p_17[0][0];
    v_8 = (unsigned short)p_15;
    v_6 = (float)((double)(- p_11[1][1]) * - (2164. * v_13));
  }
  while (95 != (int)(! v) / (- (v_4 % ((int)v_6 + 40)) + 645)) {
    v_13 = (long)v_8 + 136473045L;
    result = (long long)(- (- v_13 - -60742609136.8));
    v_6 = (float)((p * (p - (long)p_11[2][1])) / (long)(! (! v_4) + 362));
    v_4 = (int)(16234L / (~ p + 338L));
  }
  while_0_break: ;
  return result;
}


