#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 22328833
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long long p, signed char p_7)
{
  long v_15;
  unsigned long long v_13;
  signed char v_11;
  char v_9;
  char v_5;
  unsigned char v;
  unsigned short result;
  v_15 = -28470L;
  v_11 = (signed char)p;
  v_5 = (char)p_7;
  v = (unsigned char)p;
  v_13 = (unsigned long long)p_7;
  v_9 = (char)((long long)(v_15 / (long)((int)v + 865) - (long)(39047. + (
                                                                (double)p + 2.68693118623e+37))) - ! (
               (long long)(~ v_11) + ~ p));
  v = (unsigned char)((unsigned long long)((-166074430LL << ((int)(~ v_5) & 63)) / (
                                           ~ (674334095LL - p) + 696LL)) + (
                      (unsigned long long)(- ((int)p_7 / ((int)v_9 + 733))) - (
                      (unsigned long long)(p % (long long)((int)v_11 + 784)) - 
                      v_13 * 18446744073613949166ULL)));
  result = (unsigned short)((int)(~ (! (- v))) % (- ((int)((unsigned char)(
                                                     -5.38634729124e+37f + (float)p)) & (int)v) + 459));
  return result;
}


