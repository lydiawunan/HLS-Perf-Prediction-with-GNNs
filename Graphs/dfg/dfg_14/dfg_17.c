#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 913326297
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p)
{
  double v_9;
  unsigned short v_6;
  char v_4;
  char v;
  unsigned short result;
  v_9 = 2911077622.93;
  v_4 = (char)v_9;
  v_6 = (unsigned short)64583;
  v = (char)((unsigned long)(- v_4) % ((unsigned long)((int)(~ v_6) - (int)(~ p)) * 111737683UL + 41UL));
  result = (unsigned short)v;
  return result;
}


