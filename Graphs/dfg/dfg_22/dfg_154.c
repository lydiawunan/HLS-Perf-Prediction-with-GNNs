#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 313005685
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p, unsigned int p_5, long p_9)
{
  int v_11;
  long v_7;
  unsigned long long v;
  double result;
  v_11 = 157842;
  v_7 = (long)p;
  result = (double)p;
  v = (unsigned long long)v_11;
  v = (((unsigned long long)(p_5 + 4294967226U) / ((v - (unsigned long long)v_7) + 281ULL)) / (unsigned long long)(
       (int)((signed char)(result * (double)p_9)) / -117 + 914)) * (unsigned long long)(
      (long long)(- v_11) / (! (p % -26049LL) + 407LL));
  result = (double)(- (-3753477120.f * (float)(v - (unsigned long long)(
                                               p + 59LL))));
  result = (double)(- ((long long)((int)((unsigned short)(result * 172.)) * 49775) % 658033707LL));
  return result;
}


