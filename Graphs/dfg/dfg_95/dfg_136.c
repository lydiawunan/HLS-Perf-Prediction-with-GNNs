#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 442623165
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p, int p_7, long p_9)
{
  unsigned long v_5;
  unsigned char v;
  signed char result;
  v_5 = (unsigned long)p_9;
  v = (unsigned char)p_9;
  result = (signed char)(! (((unsigned long)((int)v * -678104280) + (unsigned long)p / (
                                                                    v_5 + 545UL)) * (unsigned long)p_7));
  return result;
}


