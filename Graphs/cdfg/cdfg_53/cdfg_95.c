#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 375106031
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long p, unsigned long p_13)
{
  unsigned char v_10;
  unsigned long v_8;
  char v_6;
  long long v_4;
  short v;
  unsigned short result;
  v_8 = (unsigned long)p;
  v_4 = (long long)p;
  v = (short)5495;
  result = (unsigned short)p;
  v_6 = (char)-17;
  while (103 < (int)(~ result)) {
    v_10 = v_4 | ((long long)v + 33468LL);
    v_4 = (long long)((unsigned long)(~ p) * ~ p_13);
    v = (short)(v_8 % (unsigned long)((int)v_10 + 668));
    result = (unsigned short)0;
  }
  while_0_break: ;
  return result;
}


