#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 236130600
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned int p, char p_4[5])
{
  signed char v_7;
  long v;
  short result;
  v_7 = (signed char)((int)p_4[3] + 872169981);
  v = (long)v_7;
  result = (short)(~ (p ^ (unsigned int)((int)p_4[3] + 6) % ((4294929770U >> (
                                                              v & 31L)) + 792U)));
  return result;
}


