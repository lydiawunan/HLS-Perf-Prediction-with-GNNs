#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 111738902
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(void)
{
  unsigned short v_6;
  char v_4;
  long v;
  unsigned char result;
  v_6 = (unsigned short)37064;
  result = (unsigned char)(~ ((int)(~ v_6)));
  v = -51986L;
  v_4 = (char)118;
  result = (unsigned char)((unsigned long)result + (unsigned long)((unsigned int)result * 4015893896U) * (unsigned long)(
                                                   ! v - (long)v_4));
  return result;
}


