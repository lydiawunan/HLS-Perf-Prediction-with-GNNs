#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 221231693
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p[1], short p_9)
{
  long long v_11;
  float v_6;
  int v_4;
  unsigned int v;
  short result;
  v_11 = (long long)p[0];
  result = p_9;
  v_6 = (float)(12912LL - (long long)((int)result + (int)p_9) % ((v_11 % (long long)(
                                                                  (int)p[0] + 219)) % (long long)(
                                                                 (int)(! p[0]) + 268) + 682LL));
  v_4 = (int)-6176596760.;
  v = 1U + ~ (4294908872U & (unsigned int)((int)p[0] % ((int)result + 583)));
  result = (short)(0UL % (unsigned long)(- (- v % (unsigned int)(v_4 + 912)) + 285U));
  return result;
}


