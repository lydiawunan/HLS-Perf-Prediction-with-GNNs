#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 476033969
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(int p, double p_4, long long p_7, unsigned int p_9, long p_11)
{
  signed char v_19;
  unsigned char v_17;
  signed char v_15;
  unsigned int v_13;
  long long v;
  long result;
  v_19 = (signed char)p_9;
  v_17 = (unsigned char)p;
  v_13 = 4294911039U;
  v_15 = (signed char)((int)(- v_19) % ((int)((signed char)p_4) + 857));
  result = p_11 / (long)((int)v_17 + 648);
  v = ! ((45140LL / (p_7 + 199LL) - (long long)((unsigned long)result & (unsigned long)p_9)) - (long long)(
         ((unsigned long)p_11 ^ (unsigned long)v_13) * (unsigned long)(- v_15)));
  result = (long)((- (- p) / 208) * (int)(((p_4 + (double)v) * (double)p_7) * (double)(
                                          (63954ULL | (unsigned long long)p_9) ^ (unsigned long long)p_11)));
  return result;
}


