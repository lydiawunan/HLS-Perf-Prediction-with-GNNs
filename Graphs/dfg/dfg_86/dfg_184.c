#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 328824783
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p)
{
  unsigned int v_5;
  unsigned long long v;
  unsigned short result;
  v_5 = 4294936717U;
  v = ! ((unsigned long long)v_5 / 18446744073570615156ULL) / 27046ULL;
  result = (unsigned short)(18446744073709551518ULL / (((p - 768723720ULL) + - (
                                                        18446744073709537735ULL % (
                                                        v + 520ULL))) + 284ULL));
  return result;
}


