#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 682264473
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p, long p_7, long p_9, long p_11, long long p_13)
{
  unsigned int v_15;
  unsigned long v_5;
  unsigned char v;
  long long result;
  v_15 = 14753U;
  v = (unsigned char)(((p_13 + 37215LL) / ((p_13 - (long long)v_15) + 937LL)) / 44065LL - 24573LL);
  v_5 = (unsigned long)p_7 / ((((unsigned long)p_9 + 4294917840UL) ^ (unsigned long)(
                               p_9 / (p_11 + 920L))) + 423UL) << 23L;
  v = (unsigned char)(((unsigned long)(153 >> 1) % (! p + 399UL) << (
                       (unsigned long)((int)v << 1) % (190UL * v_5 + 467UL) & 31UL)) % (unsigned long)(
                      (int)v + 832));
  result = (long long)v;
  return result;
}


