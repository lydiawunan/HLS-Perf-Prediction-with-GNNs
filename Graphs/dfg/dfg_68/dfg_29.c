#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 161112306
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, short p_4, unsigned long p_13)
{
  char v_17;
  signed char v_15;
  long v_11;
  int v_9;
  unsigned char v_7;
  unsigned long long v;
  unsigned char result;
  v_17 = (char)p_4;
  v_15 = (signed char)p_4;
  v_9 = -28421;
  v = 18446744073709510761ULL;
  v_11 = (long)(! (((int)(- v_15) * (int)(- v_17)) / ((int)p_4 % -140 + 663)));
  v_7 = (unsigned char)((((unsigned long)((int)p & v_9) - (unsigned long)v_11 % 4294924484UL) * ~ (
                         p_13 * p_13)) / (p_13 + 580UL));
  result = (unsigned char)p;
  result = (unsigned char)((unsigned long long)p * (((unsigned long long)(
                                                     (int)result - (int)p_4) % (
                                                     ~ v + 104ULL)) * (unsigned long long)(
                                                    (int)(~ v_7) + v_9)));
  return result;
}


