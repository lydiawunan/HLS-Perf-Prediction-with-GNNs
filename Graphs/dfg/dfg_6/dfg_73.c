//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 177016765
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p[1][2][3], unsigned char p_7[1][3], double p_9,
         unsigned long p_17, long long p_19)
{
  int v_21;
  signed char v_15;
  double v_13;
  unsigned long v_11;
  short v_4;
  double v;
  long result;
  v_21 = (int)p_17;
  v_15 = (signed char)-2;
  v_13 = -468.733427285;
  v_11 = (unsigned long)p_9;
  result = (long)p_17;
  v_11 = (unsigned long)(! ((int)(~ v_15) >> (((long long)v_11 + p_19) & 7LL)) / (
                         (int)((-22. / (p_9 + 715.) + -621.49810791) * (double)(
                               95360557L * (result - (long)v_21))) + 832));
  v = (double)((~ v_11 - (unsigned long)((int)((signed char)v_13) / (
                                         (int)v_15 + 378))) / (p_17 + 830UL)) * (
      (double)p_19 / (p_9 / (p_9 + 34.) + 336.));
  v_4 = (short)(- (- ((double)((int)p_7[0][0] % ((int)((unsigned char)5237053440.f) + 393)) * (
                      2950. / (p_9 + 190.)))));
  result = (long)(- (v + (double)(831786716U * ((unsigned int)v_4 / (
                                                p[0][0][1] + 715U)))));
  return result;
}


