#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1046420980
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p, double p_5, float p_7, double p_9, long long p_11)
{
  float v_29;
  long v_27;
  unsigned char v_25;
  unsigned long v_23;
  short v_21;
  long long v_19;
  double v_17;
  short v_15;
  long long v_13;
  long long v;
  double result;
  v_29 = p_7;
  v_27 = 878036829L;
  v_25 = (unsigned char)221;
  v_23 = 4294947041UL;
  v_21 = (short)32482;
  v_19 = (long long)p;
  v_17 = p_5;
  v_15 = (short)3457;
  while (p_11 - (long long)((unsigned int)(p_5 - p_9) % (p + 285U)) == (long long)(! (
         v_23 % (unsigned long)(((int)v_25 << (v_27 & 7L)) + 414)))) {
    v_21 = (int)((short)v_29) / 7510;
    v_19 = (long long)(- (- ((unsigned long)p_9 + 70459935UL)));
    v_29 = (float)18446744073413880239ULL;
    v_27 = (long)(v_29 * 61760.f);
  }
  while_0_break: ;
  if ((26527 | (int)v_15 * (int)((short)p_9)) % ((int)((v_17 - p_5) / (
                                                       - p_5 + 955.)) + 606) == (int)(
      (float)(! (v_19 + (long long)v_21)) / (((float)(~ p) + - p_7) + 502.f))) 
    result = (double)p;
  else {
    v_13 = (long long)(- p_5);
    v = ~ (p_11 * 4294923871LL - 341183089LL * v_13);
    result = ((double)v * p_5) * (double)p_7 - - p_9 / ((double)((long long)p ^ p_11) + 152.);
  }
  return result;
}


