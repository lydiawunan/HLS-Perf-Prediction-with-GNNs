//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 319074532
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p, unsigned char p_9, unsigned long long p_13)
{
  double v_15;
  unsigned long v_11;
  long long v_7;
  double v_5;
  long long v;
  float result;
  v_15 = -660.43128566;
  v_11 = (unsigned long)p;
  v_7 = 8214LL;
  v = (long long)p_13;
  result = -976.118591309f;
  v_5 = - ((double)result + - v_15);
  result = (float)849294L;
  result = (2.46805162623e+38f * (float)((long long)result * v) - 3275344640.f) * (float)(
           ((long long)((double)p / (v_5 + 901.)) & v_7 % 4294967291LL) / (long long)(
           ((int)p_9 << (v % (long long)(v_11 + 358UL) & 7LL)) + 762));
  result = - (- (result / ((float)p + 743.f)) * -39.f);
  return result;
}


