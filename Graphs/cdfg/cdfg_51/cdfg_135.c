#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 566666232
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, char p_5, unsigned int p_11)
{
  unsigned short v_13;
  unsigned char v_9;
  long long v_7;
  signed char v;
  unsigned char result;
  v_13 = (unsigned short)412;
  v_9 = (unsigned char)p_11;
  v_7 = 53868LL;
  v = (signed char)54;
  while (v_7 >= (long long)((unsigned int)v * ! ((unsigned int)v_9 * p_11))) {
    v_9 = (unsigned long)v_13 * 4294954275UL;
    v_7 = -14848LL;
    v_13 = (unsigned short)36499;
    v = (signed char)90;
  }
  while_0_break: ;
  result = (unsigned char)((((int)p + (int)v) + 39427) ^ 242);
  return result;
}


