#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 526795780
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p, unsigned char p_5, unsigned int p_7[1])
{
  unsigned short v_13;
  double v_11;
  unsigned int v_9;
  long v;
  unsigned long long result;
  v_13 = (unsigned short)p_5;
  v_11 = -132.27786975;
  v_9 = (unsigned int)v_13;
  result = (unsigned long long)((~ (! p) - ((v_9 - 460U) | (unsigned int)(- v_11))) - 4294913086U);
  v = (long)(! result);
  result = (unsigned long long)((unsigned long)(((38U * p) / 26U) / (
                                                p + 715U)) % ((~ ((unsigned long)v & (unsigned long)p) - (unsigned long)(- (
                                                               (unsigned int)p_5 / (
                                                               p_7[0] + 555U)))) + 479UL));
  return result;
}


