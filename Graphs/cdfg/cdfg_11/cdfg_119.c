#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1063992566
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, char p_11, long long p_13[4][1], signed char p_15[5],
          unsigned long p_17)
{
  int v_25;
  int v_23;
  unsigned short v_21;
  unsigned char v_19;
  double v_8;
  short v_6;
  short v_4;
  float v;
  float result;
  v_23 = (int)p_15[1];
  v_21 = (unsigned short)35905;
  v_19 = (unsigned char)p_17;
  v_6 = (short)p_15[4];
  v_4 = (short)p;
  v = (float)p;
  result = -2311754496.f;
  while ((double)(((-155424247LL ^ (long long)v) % (! p_13[1][0] + 427LL)) / (
                  (p_13[3][0] >> ((75 - (int)v_21) & 63)) + 565LL)) >= 
         42890. + - (387.829954189 / ((double)p_13[2][0] + 336.))) {
    v = v_23 - -42382;
    v_25 = (int)v_21;
    v_23 = ! (3938 - (12947 - v_25));
    v_21 = (unsigned short)result;
  }
  while_0_break: ;
  if ((long long)((unsigned long)(- p_15[0]) * (64455UL - p_17)) + (59691LL * p_13[3][0] - (long long)(
                                                                    (int)((unsigned char)496.206665039f) * (int)v_19)) == 3798LL) {
    v_8 = (double)v_6;
    v_6 = (short)v_8;
    result = - (v * (float)((int)v_4 % ((int)v_6 + 388)));
  }
  else result = (float)((p / (p + 470LL)) * (long long)(~ p_11) + ~ (
                        26536LL % (p_13[1][0] + 388LL)));
  return result;
}


