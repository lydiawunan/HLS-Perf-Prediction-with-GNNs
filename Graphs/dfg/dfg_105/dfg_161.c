#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 403242451
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p)
{
  signed char v_8;
  unsigned long long v_6;
  long long v_4;
  long v;
  char result;
  v_8 = (signed char)124;
  v_4 = (long long)p;
  v_6 = (unsigned long long)p;
  v_4 = v_4;
  v = (long)v_8;
  result = (char)((unsigned long long)v ^ - (~ ((unsigned long long)v_4 % (
                                                v_6 + 356ULL))));
  return result;
}


