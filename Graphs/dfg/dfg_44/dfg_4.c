#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 389737686
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p, float p_5, unsigned long long p_7,
                   unsigned long p_9, unsigned short p_13[4])
{
  unsigned short v_11;
  signed char v;
  unsigned short result;
  v_11 = (unsigned short)48092;
  v = (signed char)(~ (! (p_9 + (unsigned long)v_11) - (unsigned long)(
                       665727078L + (long)((int)((unsigned short)3.04175641627e+38f) / (
                                           (int)p_13[3] + 917)))));
  result = (unsigned short)(- (~ v));
  v = (signed char)(- ((unsigned long long)(- p_5 * (float)((int)((unsigned short)-8.63226886651e+37) % (
                                                            (int)result + 890))) - (
                       p_7 * 4891ULL << (-19759L % (long)(p + 658) & 63L))));
  result = (unsigned short)(! ((long)v % (((long)p + 29291L) + 128L)) / (long)(
                            3629 * (~ p / ((int)v + 573)) + 1013));
  return result;
}


