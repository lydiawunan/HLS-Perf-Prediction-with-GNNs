//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 382859372
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p, int p_5, long p_9, unsigned short p_11, short p_15)
{
  double v_13;
  unsigned short v_7;
  unsigned int v;
  int result;
  v_13 = p;
  result = (int)p_11;
  v = (unsigned int)(- (56 % ((- p_5 - (int)((unsigned short)p) % ((int)p_11 + 374)) + 705)));
  v = (unsigned int)(- ((unsigned long)(((long)p_15 - p_9) >> 23UL) * (
                        (unsigned long)v - (unsigned long)((long)p_5 / (
                                                           p_9 + 606L)))));
  v_7 = (unsigned short)((long)(! (47 * p_5)) / (((long)(~ result) | 
                                                  -7L % (p_9 + 994L)) + 56L) & (long)(
                         204 / ((int)((unsigned char)(31374. - v_13)) + 1023)));
  result = (int)((long long)(~ ((unsigned int)p / (v + 187U))) % ((long long)(
                                                                  p_5 - p_5) * 979101728LL + 775LL) + (long long)(
                 ((unsigned long)(! v_7) % ((unsigned long)v * 32965UL + 229UL)) * (unsigned long)(- (
                 p_9 + (long)p_11))));
  return result;
}


