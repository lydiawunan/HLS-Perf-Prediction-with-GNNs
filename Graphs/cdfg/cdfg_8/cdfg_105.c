#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 639850990
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(void)
{
  long long v_6;
  unsigned long v_4;
  int v;
  unsigned short result;
  v_6 = 1055138765LL;
  v_4 = 145813794UL;
  result = (unsigned short)22995;
  v = (int)(~ v_6);
  result = (unsigned short)((unsigned long)((int)result - 46647) * ((unsigned long)v % (
                                                                    v_4 + 268UL)));
  return result;
}


