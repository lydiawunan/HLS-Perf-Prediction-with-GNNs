#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 974636303
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p, unsigned char p_7)
{
  unsigned long long v_5;
  short v;
  int result;
  result = (int)p;
  v_5 = (unsigned long long)p;
  result = (int)((~ (- v_5) % (unsigned long long)((int)(- p_7) * 74 + 223)) % (unsigned long long)(
                 result + 253));
  v = (short)236;
  result = (int)((831718604UL + (unsigned long)((result - 523346096) % (
                                                ((int)v + 817) + 148))) * (unsigned long)(
                 ! (8 % ((int)p + 764)) / 7532));
  return result;
}


