#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 524088771
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p, int p_5, signed char p_15)
{
  unsigned short v_17;
  unsigned char v_13;
  char v_11;
  int v_9;
  signed char v_7;
  unsigned char v;
  int result;
  v_17 = (unsigned short)13347;
  v_11 = (char)p;
  v_9 = (int)p_15;
  v_7 = (signed char)p_5;
  v = (unsigned char)140;
  while ((int)(~ v) > p_5) {
    v_13 = (unsigned int)v_11 % ((unsigned int)v_7 * 4062860519U + 624U);
    v_7 = (signed char)(~ ((long)(- v_17) + ((long)v_13 + 540270264L)));
    v_13 = (unsigned char)(v_9 % ((int)p_15 + 846));
    v = (unsigned char)(p_5 / ((int)v_13 + 105));
  }
  while_0_break: ;
  result = (int)(~ p) * (int)(~ v);
  return result;
}


