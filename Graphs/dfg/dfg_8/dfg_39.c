//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 591433686
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p[2], float p_4, float p_9, long long p_11[3][5],
          long long p_15)
{
  long long v_17;
  long long v_13;
  long long v_7;
  unsigned short v;
  float result;
  v_17 = 5946LL;
  v_13 = ! p_15 + 7701LL % (((long long)p_4 % (p_11[1][3] + 528LL)) * ~ v_17 + 539LL);
  v_7 = (long long)((unsigned long long)(-785632691LL ^ (p_11[0][0] << (
                                                         p_11[1][1] & 63LL)) / (
                                                        v_13 + 552LL)) * 18446744073709491934ULL);
  v = (unsigned short)p_9;
  result = (- ((float)p[1] + p_4) - (float)(3892332617U / ((unsigned int)v % 3441890495U + 246U))) * (float)(
           (unsigned long long)v_7 - 7262ULL);
  return result;
}


