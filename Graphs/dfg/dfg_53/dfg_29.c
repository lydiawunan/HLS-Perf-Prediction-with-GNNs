#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 421144606
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, int p_5, unsigned int p_9, short p_11, short p_15)
{
  signed char v_13;
  unsigned int v_7;
  long v;
  unsigned int result;
  v_13 = (signed char)p_11;
  v_7 = 3623863542U;
  result = p_9;
  v = -120L;
  v_13 = (signed char)(- (((float)v - - p) - (float)(- (! v_13))));
  v = (long)((unsigned long)(p * (float)((int)-4604925898.07 + p_5) + (float)(- (
                             v_7 - result))) * ((unsigned long)((p_9 - p_9) / (unsigned int)(
                                                                (int)p_11 + 424)) / (
                                                0 % (unsigned long)((
                                                                    (int)v_13 - (int)p_15) + 163) + 104UL)));
  result = (unsigned int)(- ((long)2.55688026451e+38f % (! v / 408L + 62L)));
  return result;
}


