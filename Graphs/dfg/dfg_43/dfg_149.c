#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 359822310
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p[3], unsigned long p_9)
{
  unsigned long v_17;
  unsigned int v_15;
  short v_13;
  char v_11;
  long long v_7;
  signed char v_4;
  unsigned long v;
  double result;
  v_17 = 15534UL;
  v_15 = (unsigned int)p[0];
  v_13 = p[2];
  v_7 = (long long)p_9;
  v_11 = (char)(- (((long long)v_13 % 19894LL) % 42845LL) / (long long)(
                (unsigned long)v_15 * v_17 + 515UL));
  v_4 = (signed char)(~ ((long long)(33330UL - (unsigned long)p[2]) - 
                         (199276925LL % (long long)(p_9 + 630UL)) % (long long)(
                         (unsigned long)v_11 * p_9 + 662UL)));
  v = (unsigned long)(- ((long long)v_4 - (long long)((int)p[2] * 21142) * ! v_7));
  result = (double)(49523ULL ^ 14180ULL % (unsigned long long)(~ v + 591UL));
  return result;
}


