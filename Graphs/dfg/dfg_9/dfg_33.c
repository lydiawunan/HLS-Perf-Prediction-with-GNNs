//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 587145199
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(signed char p[4], unsigned long p_4, float p_6, float p_9,
              unsigned short p_11)
{
  unsigned long long v_13;
  unsigned long long v;
  long long result;
  v_13 = (unsigned long long)p_11;
  v = (unsigned long long)p_4;
  v = ! v;
  v = (unsigned long long)((unsigned int)(~ p[2])) * v;
  v = (unsigned long long)(- (((int)p_11 % ((int)p[2] + 704) - 42501) * (int)(
                              (float)(! v_13) / ((-1.81576426277e+38f - (float)v) + 718.f))));
  result = (long long)p[2] - (long long)p_4 / (((long long)p_6 - 28594LL) % (
                                               (long long)((float)v + p_9) + 754LL) + 317LL);
  return result;
}


