#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 731071339
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long long p, unsigned int p_9)
{
  unsigned int v_11;
  unsigned int v_7;
  unsigned short v_5;
  unsigned char v;
  unsigned long result;
  v_11 = p_9;
  v_7 = 59749U;
  result = 4294954169UL;
  v_5 = (unsigned short)(! 18446744072679293590ULL);
  v_5 = (unsigned short)(((unsigned long)(v_7 / (v_7 + 908U) & p_9 * v_11) + result) % (unsigned long)(
                         (int)v_5 + 843));
  v = (unsigned char)v_5;
  result = (unsigned long)((unsigned long long)(0LL - (long long)(- (- v))) * p);
  return result;
}


