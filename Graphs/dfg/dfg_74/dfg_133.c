#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 421211144
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p)
{
  int v_9;
  unsigned long v_7;
  int v_4;
  unsigned int v;
  long long result;
  v_9 = 221025244;
  v_7 = 3265968026UL;
  v_4 = (int)(- (! v_7 - (unsigned long)(- v_9)) - 2154UL);
  v = (unsigned int)p;
  v_4 = (int)(! ((unsigned long long)((int)((unsigned char)(6.93434259423e+37 * (double)v_4)) >> 6) / 30227ULL));
  result = (long long)(! ((unsigned long long)v / ((593181482ULL - (unsigned long long)(
                                                    467858968L % (long)(
                                                    v_4 + 881))) + 20ULL)));
  return result;
}


