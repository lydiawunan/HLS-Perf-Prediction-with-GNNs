#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 698335528
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, unsigned short p_9)
{
  long v_11;
  unsigned char v_7;
  unsigned int v_4;
  unsigned long v;
  unsigned long result;
  v_11 = (long)p;
  v_7 = (unsigned char)139;
  v_4 = (unsigned int)p;
  v = (unsigned long)((v_4 << 2) % (unsigned int)((-406594195 - (int)p) + 638) - (unsigned int)(
                      (int)v_7 * (int)p_9 >> (~ v_11 & 31L)));
  result = ~ (31692UL / (v + 481UL));
  return result;
}


