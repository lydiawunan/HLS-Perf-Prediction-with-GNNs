#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 325813520
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, float p_4, double p_7, unsigned int p_9,
                unsigned char p_13)
{
  unsigned long long v_15;
  unsigned long v_11;
  signed char v;
  signed char result;
  v_15 = 18446744073709529105ULL;
  v_11 = (unsigned long)(! ((264928674ULL ^ ((unsigned long long)p_13 - v_15)) % 32118ULL));
  v = (signed char)((long long)p_9 + ((long long)(~ p) - -16164LL / (long long)(
                                                         v_11 + 501UL)) / (long long)(
                                     (13 - (int)p_13) % -118 + 870));
  result = (signed char)(5984. + ((double)(! p + (unsigned int)(p_4 * (float)v)) - 
                                  p_7 / -568470256.));
  return result;
}


