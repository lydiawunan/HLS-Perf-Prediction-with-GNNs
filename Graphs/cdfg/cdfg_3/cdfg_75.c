#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 888031234
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, char p_5[3])
{
  long long v_13;
  short v_11;
  unsigned int v_9;
  unsigned char v_7;
  unsigned char v;
  unsigned long result;
  v_13 = -383878574LL;
  v_11 = (short)-7133;
  v_9 = (unsigned int)p_5[2];
  v = (unsigned char)160;
  result = (unsigned long)p_5[1];
  v_7 = (unsigned char)v_9;
  while ((unsigned int)(~ v) == ((! p | (unsigned int)(-112 % ((int)p_5[2] + 235))) | (unsigned int)v_7)) {
    v_7 = (unsigned long)v_11 - (unsigned long)v_9 % 4294930897UL;
    v_9 = (unsigned int)((~ v_13 - (long long)v_7) / (long long)(~ (- p) + 540U));
    result = 46609UL;
    v_7 = (unsigned char)p;
  }
  while_0_break: ;
  return result;
}


