#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 373381079
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p, unsigned char p_9, unsigned short p_13)
{
  int v_11;
  unsigned short v_7;
  unsigned long v_4;
  unsigned short v;
  short result;
  v_4 = (unsigned long)p;
  v = (unsigned short)63722;
  v_11 = (int)(77859700UL % ((unsigned long)p_13 / (! ((unsigned long)p_9 - v_4) + 651UL) + 133UL));
  v_7 = (unsigned short)65459;
  v_4 = (v_4 * (unsigned long)p_9 - (unsigned long)(43238 - (int)p_9)) % 43UL + (unsigned long)v_11;
  result = (short)((long long)((unsigned long)((long)v * -16626L) / (
                               (v_4 + (unsigned long)p) + 909UL) - (unsigned long)v_7) | -14085LL);
  return result;
}


