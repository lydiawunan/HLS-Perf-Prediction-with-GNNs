#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 331437053
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p)
{
  short v_11;
  char v_9;
  long long v_7;
  unsigned char v_5;
  long long v;
  signed char result;
  v_11 = p;
  v_9 = (char)p;
  v = (long long)p;
  result = (signed char)(- ((int)v_11 % ((int)p + 620)));
  v_7 = (long long)v_9;
  v_5 = (unsigned char)(! 0LL);
  result = (signed char)(! ((v * (long long)(- p)) * ((long long)v_5 / (
                                                      v_7 + 413LL))));
  return result;
}


