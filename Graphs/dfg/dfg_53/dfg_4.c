#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1000827176
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned int p, int p_5, int p_11, long p_13,
          unsigned long p_15[4][3])
{
  unsigned short v_9;
  signed char v_7;
  long long v;
  short result;
  v_7 = (signed char)p_15[3][0];
  v = (long long)(10UL * ((unsigned long)p_11 * p_15[0][0])) * (long long)(
      (unsigned long)((unsigned int)v_7 - p) / (! p_15[1][0] + 416UL) + 
      p_15[2][2] % (unsigned long)(p * p + 914U));
  v_9 = (unsigned short)(! ((long long)(- p + (unsigned int)(! p_11)) + 
                            (long long)(~ p_13) % 13640LL));
  result = (short)((- v / (long long)(~ p + 623U)) / (long long)((p_5 + 
                                                                  (int)v_7 * (int)v_9) + 593) & 485709440LL);
  return result;
}


