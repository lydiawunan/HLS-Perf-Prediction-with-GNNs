#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 556071622
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p)
{
  long long v_7;
  long long v_5;
  int v;
  unsigned short result;
  v_7 = 249779655LL;
  v_5 = 708312165LL;
  v = (int)p;
  result = (unsigned short)p;
  v_5 = ((long long)(~ p) - ! v_5) % ((long long)((int)((unsigned short)8752334771.91) - (int)result) % (
                                      v_7 + 591LL) + 947LL);
  result = (unsigned short)(((unsigned long)v % 3750749135UL) % (unsigned long)(
                            (int)p + 929) >> ((54760LL - v_5) & 31LL));
  return result;
}


