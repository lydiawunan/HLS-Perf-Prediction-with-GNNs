#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 997245243
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p, unsigned int p_7, unsigned long p_9, long long p_11)
{
  unsigned int v_15;
  unsigned short v_13;
  unsigned char v_4;
  int v;
  unsigned char result;
  v_15 = (unsigned int)p;
  v_13 = (unsigned short)p_9;
  v = (int)((unsigned long long)p_11 - ((unsigned long long)((unsigned int)(- v_13) / (
                                                             v_15 + 904U)) & 18446744072832998696ULL));
  result = (unsigned char)(-25100LL - (long long)p_9);
  v_4 = (unsigned char)(p >> (((unsigned long)p - (4294962401UL + (unsigned long)p_7) % (unsigned long)(
                                                  (int)result + 501)) & 31UL));
  result = (unsigned char)((unsigned int)(! v * ~ (v | (int)v_4)) - 3931094445U);
  return result;
}


