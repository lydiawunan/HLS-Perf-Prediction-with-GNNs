#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 304661324
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(int p[5][5][1], unsigned short p_11)
{
  short v_13;
  unsigned long long v_9;
  unsigned short v_7;
  double v_5;
  unsigned int v;
  long result;
  v_13 = (short)p_11;
  v_5 = -5283153042.63;
  result = (long)p_11;
  v_9 = (unsigned long long)(~ (- (431366283LL % (long long)(result + 740L))) - 
                             - ((long long)v_13 + 61140LL) * 140LL);
  v_7 = p_11;
  v = (unsigned int)(! (((unsigned long long)(result * -22L) + (unsigned long long)v_7 * v_9) ^ (
                        v_9 - 295ULL)));
  result = (long)((unsigned long long)((p[0][4][0] >> (v & 31U)) / ((int)v_5 + 566)) * 61933ULL + 999941083ULL);
  return result;
}


