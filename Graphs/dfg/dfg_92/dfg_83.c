#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 185571095
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, unsigned long long p_9, float p_11)
{
  unsigned long v_7;
  char v_4;
  short v;
  short result;
  v = (short)-8845;
  v_7 = (unsigned long)p_11;
  result = (short)356.359313965f;
  v_4 = (char)(! (- ((unsigned long long)(v_7 * 177UL) + ((unsigned long long)result + p_9))));
  result = (short)(~ ((int)v + ((int)v_4 % -49996) * ((int)((short)p) - (int)v)));
  return result;
}


