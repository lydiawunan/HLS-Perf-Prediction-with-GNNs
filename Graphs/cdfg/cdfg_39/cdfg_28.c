#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 203077848
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p)
{
  unsigned long long v_11;
  unsigned char v_9;
  float v_7;
  long long v_4;
  float v;
  unsigned char result;
  v_11 = 17982ULL;
  v_9 = (unsigned char)98;
  v_7 = -187.067367554f;
  v_4 = (long long)p;
  if (v_11 / (unsigned long long)((int)p % 21505 + 617) < (unsigned long long)v_4) {
    result = (unsigned char)((int)p + 56961);
    v_4 = (long long)((int)(! p) % 83 - (37 + ((int)p + (int)((unsigned short)v_7))));
    v = (float)18446744073709490764ULL;
  }
  else {
    result = - v_9;
    v = (float)-64504;
    v_4 = 182109776LL;
  }
  result = (unsigned char)((long long)(((int)((unsigned char)v) + (int)result) - -126) / (
                           v_4 + 808LL));
  return result;
}


