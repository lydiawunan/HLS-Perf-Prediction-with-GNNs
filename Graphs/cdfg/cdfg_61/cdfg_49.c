#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 345299357
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p)
{
  short v_13;
  double v_11;
  double v_8;
  int v_6;
  int v_4;
  unsigned long v;
  long long result;
  v_13 = (short)14643;
  v_11 = (double)p;
  v_8 = 390.5037074;
  v_6 = (int)p;
  v_4 = 848150068;
  v = 4294918977UL;
  result = (long long)p;
  if (~ ((13470UL | v) + (unsigned long)(177.269210815f / ((float)v_13 + 290.f))) == (unsigned long)(
      ! p / (((long)(v_6 - (int)v_13) + (long)v_6 % (p + 139L)) + 606L))) {
    result = 27772LL;
    v_6 = (int)((unsigned long)(- (p << (p & 31L))) - 1047801357UL);
    v_6 = ! (! v_6 + (int)-1.68455254e+38);
  }
  else {
    v_4 = (int)(((unsigned long long)(132L * p) + 4294948168ULL) ^ (unsigned long long)(! (
                (long)v_6 * p)));
    v = (unsigned long)(! ((unsigned long long)v_13 + 18446744073144177668ULL));
    v_8 = v_11;
  }
  while (v + (unsigned long)-1.37683324466e+38 != (unsigned long)(- v_4)) {
    v_4 = (int)v_8 % ((v_6 ^ -9) + 664);
    v_8 = (double)((result << (v & 63UL)) * (long long)(- v_11)) * -1907101771.58;
    v_6 = -24785;
    v = (unsigned long)p;
  }
  while_0_break: ;
  return result;
}


