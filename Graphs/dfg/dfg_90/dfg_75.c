#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 135784073
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, double p_7, unsigned long long p_9)
{
  unsigned long v_4;
  float v;
  unsigned char result;
  v_4 = 4099631970UL;
  result = (unsigned char)v_4;
  v_4 = (unsigned long)((int)result >> 7);
  v = (float)((unsigned long long)((- v_4 % 126UL) * (unsigned long)(
                                   (int)p + (int)((unsigned char)(- p_7)))) % (
              p_9 + 130ULL));
  result = (unsigned char)(- v);
  return result;
}


