#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 392050599
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p)
{
  unsigned char v_13;
  unsigned short v_11;
  char v_9;
  char v_6;
  long v_4;
  unsigned int v;
  long result;
  v_13 = (unsigned char)p;
  v_11 = (unsigned short)65022;
  v_9 = (char)106;
  v_6 = p;
  v_4 = -443714574L;
  v = (unsigned int)p;
  result = (long)p;
  v_4 = v_4;
  while ((unsigned long)v + 3679553743UL < (unsigned long)(~ ((115L / (
                                                               v_4 + 768L)) / (long)(
                                                              ((int)v_6 - (int)p) + 511)))) {
    v = (int)v_11 << 5;
    v_6 = (char)(~ result);
    result = ~ ((long)v_13 % -525016505L - (long)((int)v_9 - (int)p));
    v_4 = - (((long)p ^ result) ^ (long)p);
  }
  while_0_break: ;
  return result;
}


