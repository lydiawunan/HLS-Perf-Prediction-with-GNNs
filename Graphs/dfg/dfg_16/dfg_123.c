#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 882789693
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p, long long p_11)
{
  short v_9;
  int v_7;
  double v_4;
  unsigned int v;
  long long result;
  v_9 = (short)-18902;
  v_7 = -23036066;
  v = 3486032416U;
  result = (long long)p;
  v_4 = (double)(~ (~ ((long long)v_9 % (p_11 + 977LL))) / (result + 438LL));
  result = 25974LL;
  v_7 = (int)(- ((v_4 - 20348.) * (double)(! (v_7 * (int)v_4))));
  result = (long long)((int)((202951861. / ((double)v / (v_4 + 1015.) + 30.)) * (double)(
                             (long long)((long)-2287582720.f * -30373L) - 776236140LL)) & 
                       (int)((double)(result + (long long)v) + p) * ! v_7);
  return result;
}


