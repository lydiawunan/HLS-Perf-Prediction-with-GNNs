#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 659579608
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, long p_7)
{
  signed char v_11;
  float v_9;
  unsigned int v_4;
  unsigned int v;
  unsigned char result;
  v_9 = -8410804736.f;
  v_4 = (unsigned int)p_7;
  v = (unsigned int)p_7;
  result = (unsigned char)p;
  v_11 = (signed char)((float)(4294967182U / (v_4 + 934U)) + - (- p));
  while (5U == 4294908416U - v) {
    result = (unsigned char)(((unsigned int)((float)p_7 - v_9) / (v_4 + 194U)) % (unsigned int)(
                             (int)v_11 + 767));
    v_4 = (unsigned int)(p_7 / ((long)p + 763L) + p_7);
    v = (unsigned int)((double)((int)(- result) / (98 * (int)((unsigned char)p) + 8)) / 9538623678.23);
  }
  while_0_break: ;
  return result;
}


