#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 578905050
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, short p_5, long p_7, unsigned short p_9)
{
  unsigned long v_19;
  unsigned int v_17;
  float v_15;
  unsigned long long v_13;
  signed char v_11;
  unsigned long v;
  unsigned char result;
  v_17 = (unsigned int)p_7;
  v_15 = 2.39612269728e+38f;
  v = (unsigned long)p_5;
  result = (unsigned char)109;
  v_11 = (signed char)(~ p_9);
  while (! ((unsigned long)(- result) & ((unsigned long)p + v)) != (unsigned long)(~ (
         (long)(- p_5) | (p_7 + (long)p_9)))) {
    v_13 = v_15 * ((float)v_11 + 2.56609537449e+38f);
    v_19 = 121UL;
    v_15 = (float)((unsigned long)(! v_17) / (((33UL ^ v_19) + (unsigned long)v_17) + 888UL));
    v = (unsigned long)((long)((double)(v_13 - 18446744073709536511ULL) / (
                               (-91.3245535518 + (double)p_9) + 358.)) % (
                        (long)(v_15 * (float)p_9) / ((p_7 + (long)p_5) + 204L) + 377L));
  }
  while_0_break: ;
  return result;
}


