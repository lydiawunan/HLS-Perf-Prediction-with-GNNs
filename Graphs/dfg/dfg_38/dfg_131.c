#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 223731065
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p, float p_4, long long p_11)
{
  unsigned int v_15;
  long v_13;
  long v_9;
  signed char v_7;
  short v;
  double result;
  v_15 = p;
  v_9 = -934533349L;
  v_13 = (long)v_15;
  v_7 = (signed char)((long long)(! v_9) - ((p_11 * (long long)v_13) * (long long)v_9) % (
                                           ~ p_11 + 698LL));
  v = (short)(! (85 * (int)v_7));
  result = (double)((unsigned long)p - ! ((unsigned long)p_4 - 4294903251UL) * (unsigned long)(
                                       (int)((short)-1136709867.19) % (
                                       (int)v + 399)));
  return result;
}


