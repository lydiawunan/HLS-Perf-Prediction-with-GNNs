#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 131420861
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p)
{
  long v_10;
  unsigned long v_8;
  short v_6;
  short v_4;
  char v;
  unsigned int result;
  v_10 = (long)p;
  v_6 = (short)3636;
  v_4 = p;
  v = (char)p;
  while (! (1155L * (5834L * (long)v)) >= (long)v) {
    v_8 = (int)v_6 + (int)v_4 * 890476827;
    v_4 = (short)((float)(- v_8) + 1.26601309989e+38f);
    v_8 = (unsigned long)(v_10 << ((int)p & 31));
    v = (char)-63;
  }
  while_0_break: ;
  result = (unsigned int)v;
  return result;
}


