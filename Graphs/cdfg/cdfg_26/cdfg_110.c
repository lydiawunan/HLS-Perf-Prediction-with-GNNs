#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 835411082
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, unsigned short p_7, short p_13,
                   unsigned long long p_15, long long p_17)
{
  unsigned short v_23;
  unsigned int v_21;
  unsigned long long v_19;
  int v_11;
  long v_9;
  long v_5;
  int v;
  unsigned short result;
  v_21 = 194050770U;
  v_19 = 32782ULL;
  v_11 = (int)p;
  v_9 = 37183L;
  v_5 = (long)p_13;
  v = 19376;
  result = (unsigned short)p;
  while ((unsigned long long)(-12537LL / (long long)((((int)p_7 - v) + 
                                                      -51 * (int)p) + 672)) != v_19) {
    v_23 = (unsigned long long)v_21 * 42989059ULL;
    v = (int)((unsigned long long)(-61 ^ (int)(! v_23)) - (((unsigned long long)p + p_15) | (unsigned long long)(~ p_13)));
    result = (unsigned short)(! ((int)p_13 * (int)p) * (-81 % (! v + 716)));
    v_19 = p_15;
  }
  while_0_break: ;
  if (! (((unsigned long long)p_13 - p_15) & (unsigned long long)(! p_17)) < (unsigned long long)(
      (int)result % (! ((int)p_13 - -150693904) + 999))) {
    v_9 = (long)(((long long)p / 602390773LL ^ -87LL) * (long long)((unsigned long)(- p_7) / (
                                                                    28393UL % (unsigned long)(
                                                                    v_9 + 83L) + 356UL)));
    v = (int)((unsigned long long)((423915174UL & (unsigned long)p) * (unsigned long)(
                                   v_5 * (long)p_7)) / (((unsigned long long)(! v_9) - 
                                                         801025933ULL % (unsigned long long)(
                                                         v_11 + 107)) + 86ULL));
    result = (unsigned short)(! ((int)4674988032.f * v << ((int)p & 31)));
  }
  else result = p_7;
  return result;
}


