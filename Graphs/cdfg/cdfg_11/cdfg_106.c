#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 568264224
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p, float p_7)
{
  long v_5;
  unsigned short v;
  long result;
  v_5 = (long)p;
  v = (unsigned short)((long long)((long)(! p) % (v_5 + 538L)) / (-926754677LL / (long long)(
                                                                  (int)((unsigned short)p_7) % 27112 + 795) + 915LL));
  result = (long)((int)(- v) * (int)v);
  return result;
}


