#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 268696638
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long long p, unsigned char p_11, char p_13, unsigned int p_21,
         unsigned char p_23)
{
  long v_25;
  unsigned char v_19;
  long long v_17;
  float v_15;
  double v_8;
  long v_6;
  double v_4;
  unsigned char v;
  long result;
  v_25 = -60282L;
  v_19 = p_23;
  v_17 = -793461388LL;
  v_15 = (float)p_21;
  v_8 = (double)p_13;
  v_4 = -724.826618151;
  v = p_11;
  result = 10570L;
  if ((int)((char)((double)(4294967281U - (p_21 + 2150U)) + (v_4 - 3.19858541525e+37))) < (int)p_13) {
    v_6 = (long)(((int)p_23 + (int)p_11) + (int)(- p_11)) * (result % (
                                                             (long)((double)p_13 / (
                                                                    v_4 + 534.)) + 699L));
    result = (long)((long long)((unsigned int)(! v_19) - 4294945971U) * (
                    (-129580574LL << ((int)p_13 & 63)) - 49LL));
    v_8 = (double)p;
  }
  else {
    v_4 = (double)(- (result * v_25) << (- v_17 & 31LL));
    v_6 = (long)(~ p_11);
    v = (unsigned char)((float)p / ((v_15 - (float)p_13) + 487.f));
  }
  while ((double)v * - v_4 - (((double)v_6 - v_8) + (double)(p * (long long)p_11)) < 
         (-743.165527344 + (double)p_13 * v_4) * (double)(v_15 / 993794112.f + (float)(- v_17))) {
    v_15 = (int)v_19 ^ 203;
    v_8 = (double)p_21;
    v_17 = p;
    v_4 = (double)((0LL - ~ v_17) & (long long)(! (25088UL / (unsigned long)(
                                                   result + 725L))));
  }
  while_0_break: ;
  return result;
}


