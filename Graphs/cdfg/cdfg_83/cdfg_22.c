#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 32200581
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p[5][3][4], int p_5,
                       unsigned long long p_11)
{
  float v_17;
  unsigned short v_15;
  short v_13;
  long v_9;
  signed char v_7;
  signed char v;
  unsigned long long result;
  v_17 = (float)p_11;
  v_15 = (unsigned short)49174;
  v_13 = (short)22172;
  v_9 = (long)p_11;
  v_7 = (signed char)p[2][1][1];
  v = (signed char)p_11;
  while ((unsigned long long)((long)v_7 / (! (! v_9) + 570L)) < p_11) {
    v_7 = v_17 / ((float)((int)v_15 + ((int)v_13 << 3)) + 162.f);
    v_15 = (unsigned short)(! ((-41032LL - (long long)v_7) + (long long)(
                               (int)v + (int)v_7)));
    v_17 = (float)4294939318U;
    v_9 = v_9;
  }
  while_0_break: ;
  result = (unsigned long long)(((int)v % -748970003) % ((int)p[1][2][3] + 718) ^ p_5);
  return result;
}


