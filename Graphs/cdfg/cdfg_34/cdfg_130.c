#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 131577451
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p[4][1][5], long long p_7, double p_11)
{
  unsigned long v_9;
  float v_5;
  signed char v;
  unsigned char result;
  v_9 = (unsigned long)p_11;
  v_5 = -428.413604736f;
  result = (unsigned char)p[3][0][4];
  v = (signed char)(- (p_7 << (v_9 & 63UL)) + (long long)(- p[1][0][1]));
  while ((int)v / ((int)((signed char)(- (v_5 / ((float)p_7 + 832.f)))) + 80) >= (int)v) {
    v_5 = v_9 % 62082UL;
    result = (unsigned char)p_11;
    v = (signed char)99;
    v_5 = (float)((long long)v_5 - 60LL / (p_7 + 874LL));
  }
  while_0_break: ;
  return result;
}


