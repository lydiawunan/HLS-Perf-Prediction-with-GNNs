#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 906636132
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, int p_5, unsigned short p_7, long long p_11,
         unsigned long p_13)
{
  long v_15;
  long long v_9;
  unsigned int v;
  long result;
  v_15 = 13485L;
  if (- p_11 / (((long long)p_13 / (p_11 + 30LL) ^ (long long)p_7) + 690LL) > (long long)(
      ((unsigned long)v_15 - 4294938576UL) % (unsigned long)(- p_5 + 355) >> 24)) {
    v_9 = -917690177LL;
    v = 4294909520U % ((3943111966U ^ (unsigned int)p) + 479U);
  }
  else {
    v_9 = (long long)2.68091936651e+38;
    v = (unsigned int)(- (- p_11 * 352LL));
  }
  result = (long)((37030ULL % (unsigned long long)((int)p + 688) - (unsigned long long)(
                   v - v)) % (unsigned long long)((long long)(p_5 ^ (int)p_7) / (
                                                  ~ v_9 + 869LL) + 1021LL));
  return result;
}


