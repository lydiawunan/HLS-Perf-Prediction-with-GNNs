#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 841750381
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned char p, char p_4, unsigned int p_7,
                  unsigned long p_11)
{
  long long v_9;
  unsigned short v;
  unsigned long result;
  v = (unsigned short)58052;
  v_9 = (long long)((float)(~ (-918146209 | (int)p) - 44422 / (65189 * (int)v + 611)) + 
                    (float)(33656UL & p_11) * (7863666176.f / ((float)(
                                                               17171 % (
                                                               (int)p + 137)) + 109.f)));
  result = (unsigned long)((long long)((int)p + ((int)(- p_4) - (int)v)) % (
                           (4294947648LL - (long long)(602051468 << (
                                                       p_7 & 31U)) * - v_9) + 66LL));
  return result;
}


