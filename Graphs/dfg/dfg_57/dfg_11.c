#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 392747286
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p, int p_5[4][1], short p_11,
                  unsigned int p_13[2], double p_15)
{
  long v_19;
  unsigned long long v_17;
  unsigned short v_9;
  long long v_7;
  double v;
  unsigned char result;
  v_19 = (long)p_11;
  v_9 = (unsigned short)p;
  v = -3535130923.88;
  result = (unsigned char)p_13[1];
  v_17 = (unsigned long long)(- v_19 * (long)(~ ((int)((unsigned char)p_15) * (int)result)) + (long)(
                              (int)-3.34851883387e+38 / (((int)v_9 + (int)((unsigned short)p_15)) + 572) - (int)p_15));
  v_7 = (long long)(- ((unsigned long long)(- p) % ((18446744073158856894ULL | (unsigned long long)v) + 754ULL)) ^ (
                    (unsigned long long)((int)p_15 % (p_5[1][0] + 369)) * (
                    v_17 % 18446744073709551511ULL) | (unsigned long long)(
                    p_15 * (double)p_11 + p_15 / ((double)p + 1005.))));
  v_9 = (unsigned short)((unsigned long long)(- (((long long)p_11 - 882436946LL) & (long long)(
                                                 p_13[0] - p))));
  result = (unsigned char)(((long long)((int)((short)(56178. * v)) / -29124) % (
                            ((long long)(p % (unsigned int)(p_5[1][0] + 730)) - 
                             v_7 / (long long)((int)v_9 + 275)) + 73LL)) / (long long)(
                           (int)(- p_11) + 960));
  return result;
}


