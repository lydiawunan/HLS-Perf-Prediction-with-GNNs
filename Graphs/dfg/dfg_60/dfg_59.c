#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 268300872
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, unsigned int p_7[2][5][5],
                 unsigned long p_11, long p_13, unsigned int p_15[2][3])
{
  unsigned long v_17;
  unsigned char v_9;
  long v_5;
  float v;
  unsigned int result;
  v_17 = 4294943059UL;
  v_5 = (long)(! (~ (~ p_15[1][2] % ((unsigned int)((float)v_17 * 244.448028564f) + 83U))));
  v_9 = (unsigned char)((long)((double)(2570540098750ULL / (unsigned long long)(
                                        (int)p + 689)) - -1.72053622645e+37 * (double)(
                                                         p_11 / (p_11 + 278UL))) * p_13);
  v = (float)(- ((long long)(- ((unsigned long)v_5 + (unsigned long)p_7[1][0][2])) % (
                 (long long)(v_5 + (long)v_9) * (-849488636LL / (long long)(
                                                 (int)p + 290)) + 212LL)));
  result = (unsigned int)((double)p - ((double)(- (v * 3.21256817676e+38f)) + 592.966040737));
  return result;
}


