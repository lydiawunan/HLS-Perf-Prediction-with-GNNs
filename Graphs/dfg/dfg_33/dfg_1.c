#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 849454397
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, unsigned long p_11)
{
  unsigned long long v_13;
  int v_9;
  unsigned int v_6;
  unsigned char v_4;
  unsigned char v;
  signed char result;
  v_13 = (unsigned long long)p_11;
  v = (unsigned char)38;
  v_9 = (int)((unsigned long)(- v) * ! (~ (- p_11)));
  v_6 = (unsigned int)(~ ((unsigned long long)(~ v_9) + v_13));
  v_4 = (unsigned char)((- ((unsigned long)v_9 % (p_11 + 295UL)) - 4294937018UL) / (
                        (((p_11 - 34UL) | (unsigned long)p) | (unsigned long)(
                         ~ p + (unsigned int)8.33017222239e+37f)) + 441UL));
  result = (signed char)((unsigned long)(((int)(! v) * 22) % ((int)(! (~ v_4)) + 715)) * (
                         (unsigned long)(- v_6) / ((unsigned long)(p + (unsigned int)v_9) % (
                                                   p_11 + 114UL) + 509UL)));
  return result;
}


