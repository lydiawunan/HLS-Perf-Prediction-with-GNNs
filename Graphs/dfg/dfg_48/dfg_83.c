#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1059592750
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p, signed char p_11)
{
  int v_13;
  unsigned short v_9;
  long long v_7;
  long v_4;
  unsigned char v;
  signed char result;
  v_13 = 257029749;
  v_9 = (unsigned short)p;
  v_4 = 131783223L;
  result = p_11;
  v_7 = (long long)v_13;
  v = (unsigned char)(-1LL + (long long)(- result));
  v_4 = ~ ((long)v / (((long)(! p_11) + v_4) + 438L));
  result = (signed char)((int)((unsigned char)(((float)((long)v / (v_4 + 917L)) - p) / (
                                               (float)(- v_7 / (long long)(
                                                       (int)(- v_9) + 721)) + 227.f))) & 7);
  return result;
}


