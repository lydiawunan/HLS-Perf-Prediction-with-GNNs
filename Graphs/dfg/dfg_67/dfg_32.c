#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 448720788
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, float p_9)
{
  int v_7;
  int v_4;
  int v;
  unsigned short result;
  v_7 = -30532;
  v_7 = (int)(- (4294946983UL * (unsigned long)((30962092 + (int)p) - ! v_7)));
  v_4 = (int)(0.f * p_9);
  v = ! v_4;
  result = (unsigned short)(v % -7 ^ -413);
  return result;
}


