//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 385628342
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p)
{
  double v_8;
  unsigned short v_6;
  double v_4;
  long v;
  long long result;
  v = 18876L;
  result = 970888986LL;
  v_6 = (unsigned short)(- (- (- 554.402587891f)));
  v_8 = (double)p;
  v_4 = (double)v_6 / (- v_8 + 432.);
  result = (long long)((double)(((long long)(! v) + ! result) - (long long)(
                                722360818UL - (unsigned long)(- v))) * v_4);
  return result;
}


