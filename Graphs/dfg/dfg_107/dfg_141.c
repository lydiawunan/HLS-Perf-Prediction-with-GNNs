#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 282879989
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(int p, double p_7, unsigned char p_19[4][1])
{
  char v_17;
  unsigned char v_15;
  unsigned short v_13;
  short v_11;
  float v_9;
  int v_5;
  unsigned long long v;
  int result;
  v_17 = (char)52;
  v_15 = (unsigned char)p_7;
  v_13 = (unsigned short)13790;
  v_11 = (short)22957;
  v_9 = 1.76753674922e+38f;
  v = (unsigned long long)p;
  v_5 = (int)((float)((int)(-9.f + v_9) - (int)(! v_11) % (p + 760)) + (
              (float)(((int)v_13 % ((int)v_15 + 14)) * ((int)v_17 | (int)p_19[1][0])) + v_9));
  v = v;
  v = (v * (unsigned long long)(! (v_5 >> 31LL))) * (unsigned long long)p_7;
  result = (int)(! (! (! ((unsigned long long)p % (v + 15ULL)))));
  return result;
}


