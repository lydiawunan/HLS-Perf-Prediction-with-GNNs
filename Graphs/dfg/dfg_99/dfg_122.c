#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 764361027
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p, signed char p_7, short p_9,
                   unsigned int p_15, unsigned char p_19)
{
  unsigned short v_17;
  long long v_13;
  char v_11;
  unsigned int v_4;
  long v;
  unsigned short result;
  v_17 = (unsigned short)p_7;
  v_13 = (long long)p_15;
  v_4 = ! (p_15 * (unsigned int)p_7 - (unsigned int)(65488 + (int)p_7)) - (unsigned int)(
        (int)v_17 * (int)p_19);
  v_11 = (char)(- p_15);
  v = (long)((long long)(20237 >> ((int)v_11 * (int)p_9 & 31)) / (v_13 + 731LL));
  result = (unsigned short)(((unsigned long long)(((long long)v + -30037LL) ^ (long long)(- v_4)) + (
                             (unsigned long long)((int)p * (int)p) - 18446744073319959232ULL)) * ~ (
                            (unsigned long long)((int)p_7 - (int)p_9) - (
                            (unsigned long long)p_7 - 18446744072668487779ULL)));
  return result;
}


