#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1038591757
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, unsigned short p_5, int p_7)
{
  unsigned long long v;
  unsigned long result;
  v = (unsigned long long)(0L % ((long)((int)p_5 / 1235) % (681427532L / (long)(
                                                            p_7 + 905) + 551L) + 937L));
  result = (unsigned long)(- (14ULL / (v + 567ULL) - (unsigned long long)(- p)));
  return result;
}


