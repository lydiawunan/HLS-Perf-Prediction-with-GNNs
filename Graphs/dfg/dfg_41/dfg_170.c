#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 180020550
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p, unsigned short p_9, signed char p_11,
         unsigned short p_13)
{
  unsigned long v_7;
  short v_5;
  int v;
  char result;
  v_5 = (short)-11558;
  v_7 = (unsigned long)(((int)(- p_9) * (int)(~ p_11)) / ((int)(! p_11) + 604) ^ (int)p_13);
  result = (char)(25354UL % (- ((unsigned long)v_5 * - v_7) + 164UL));
  v = (int)p;
  result = (char)(~ ((p * (unsigned long long)result - (unsigned long long)v) + (unsigned long long)(
                     (int)(- result) % 957102525)));
  return result;
}


