#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 923344143
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p, unsigned long long p_5, unsigned short p_13, int p_15,
          long long p_17)
{
  char v_21;
  signed char v_19;
  unsigned long v_11;
  unsigned int v_9;
  unsigned long long v_7;
  double v;
  short result;
  v_21 = (char)115;
  v_19 = (signed char)p_5;
  v_9 = (unsigned int)p_17;
  v_7 = (unsigned long long)p_15;
  v = (double)p_15;
  result = (short)-19538;
  if ((double)(! ((long long)v_21 * p_17) & 25430LL) > (v + (double)p_17) * (double)(
                                                       88 + (int)result) + (double)v_19) {
    v_7 = (unsigned long long)p_15;
    v_7 = - (((unsigned long long)p_17 - v_7) / (unsigned long long)(
             p_15 + 377));
    v_9 = (unsigned int)((double)(~ (p_17 / 30LL)) + - v);
  }
  else {
    v_19 = (signed char)((45LL * p_17 + - p_17) - ! p_17 % (long long)(
                                                  (int)v_19 + 243));
    v = (double)((unsigned int)((-1674188015.14 + (double)v_19) + (double)(
                                v_7 / (p_5 + 608ULL))) + ((unsigned int)(- result) - (
                                                          3340314997U << 17ULL)));
    v_7 = 18446744072996376746ULL;
  }
  while (v + (double)((unsigned int)p + 9U) < (double)p_5) {
    v_11 = v_7 - 121ULL;
    v_7 = (unsigned long long)((int)(! p_13) + p_15) * (p_5 / 25ULL - (unsigned long long)(~ v_9));
    result = (short)(! v_11 * 912372032UL);
    v = (double)((unsigned long)(~ v_9) - - v_11);
  }
  while_0_break: ;
  return result;
}


