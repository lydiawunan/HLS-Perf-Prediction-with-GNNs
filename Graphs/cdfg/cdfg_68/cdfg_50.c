#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 410852278
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p)
{
  unsigned long long v_11;
  long v_9;
  long v_7;
  unsigned char v_5;
  unsigned int v;
  long long result;
  v_11 = 18446744072844041360ULL;
  v_9 = -981639988L;
  v_7 = p;
  v_5 = (unsigned char)195;
  if (- (~ v_7) != (! v_9 << (4294929205ULL * v_11 & 31ULL)) / (! p + 748L)) {
    result = (long long)v_5;
    result = ! ((long long)p % (~ result + 796LL));
    v = (unsigned int)(- result);
  }
  else v = 0U;
  result = (long long)v;
  return result;
}


