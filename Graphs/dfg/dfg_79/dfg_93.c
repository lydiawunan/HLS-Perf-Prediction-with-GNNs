#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 47109380
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, long p_9, float p_13, char p_15[2][4][4])
{
  char v_11;
  short v_7;
  long v_4;
  unsigned char v;
  unsigned char result;
  v_11 = p_15[0][3][2];
  v_7 = (short)-25775;
  v_4 = -836520909L;
  v_4 = ~ (! p_9 % (v_4 + 695L)) * (long)((258.661021216 / ((double)v_11 + 530.)) * (double)(
                                          (int)((short)p_13) % 13226) - (double)p_15[0][0][1]);
  result = (unsigned char)32;
  v = (unsigned char)((int)p & ((int)(- (! v_7)) ^ 1));
  result = (unsigned char)((unsigned long)(! ((unsigned int)v & 502797688U)) + (unsigned long)(~ (
                           (long)v % (((long)result ^ v_4) + 971L))));
  return result;
}


