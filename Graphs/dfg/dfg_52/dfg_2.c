#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 252089563
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, signed char p_7, long p_13, unsigned long long p_15,
          unsigned long long p_17)
{
  char v_19;
  int v_11;
  char v_9;
  short v_5;
  int v;
  short result;
  v_19 = (char)p_17;
  v_9 = (char)-113;
  v_5 = (short)p_17;
  v = (int)p_15;
  v_9 = (char)(((p_17 / (p_15 + 315ULL) << ((int)p_7 & 63)) - (unsigned long long)(
                (134L * p_13) % (long)(((int)v_9 + (int)p_7) + 387))) / (
               (unsigned long long)p_7 + 305ULL));
  v_11 = (int)(0ULL - (unsigned long long)(! (p_13 - (long)p)) * ((unsigned long long)(- v) / (
                                                                  (p_15 << 45ULL) + 410ULL)));
  v = (int)(! (- p_7));
  result = (short)((unsigned long)(- (! v) * (((int)((short)p) * (int)v_5) * (int)p_7)) - (
                   ((unsigned long)v_9 + 3223586985UL) + (unsigned long)v_11));
  return result;
}


