#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 350418039
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p, double p_7, unsigned long long p_9,
                  unsigned int p_13, signed char p_15)
{
  int v_19;
  unsigned int v_17;
  int v_11;
  short v_5;
  short v;
  unsigned char result;
  v_19 = 399649139;
  v_17 = 4294903447U;
  v_11 = -161174259;
  v_5 = (short)p_7;
  v = (short)p_13;
  while (p_7 <= (double)((((unsigned long long)v_5 % (p_9 + 505ULL)) * (unsigned long long)(! v_11)) / (
                         (unsigned long long)((unsigned int)v_5 + p_13) / (
                         (p_9 - (unsigned long long)p_15) + 939ULL) + 776ULL))) {
    v = v_17 * 41137U;
    v_5 = (short)-105;
    v_17 = (unsigned int)(4294967295LL * ((368812607LL + (long long)v_19) % (long long)(
                                          ((unsigned long)p_7 + 17602UL) + 370UL)));
    v_11 = (int)((unsigned int)(89. - p_7) * ! ((unsigned int)1.35692286551e+37f - v_17));
  }
  while_0_break: ;
  if ((int)v > (int)v_5) result = (unsigned char)(~ (p * 3278644337U - p));
  else result = (unsigned char)44;
  return result;
}


