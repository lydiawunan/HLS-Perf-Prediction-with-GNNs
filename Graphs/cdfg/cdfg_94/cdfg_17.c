#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 950038676
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, unsigned long long p_4, unsigned short p_7[5],
        float p_13, signed char p_15)
{
  long v_19;
  float v_17;
  float v_11;
  short v_9;
  short v;
  int result;
  v_19 = -702524622L;
  v_17 = (float)p_4;
  v_9 = (short)19714;
  v_11 = (float)((long)(-97 / ((int)((signed char)p_13) + 292)) * ((long)(~ p_15) * v_19));
  if ((float)((int)(- p_7[0]) << (((int)v_9 + (int)((short)v_11)) & 15)) * (
      (p_13 * 158.f) * (float)p_15) == - (6818.f - v_17) / ((float)(! (! p)) + 536.f)) 
    result = (int)(40615UL * - ((unsigned long)p - 26479UL));
  else {
    v = (short)(- 9023742172.24);
    result = (int)(- v);
    result = (int)(! (p_4 & (unsigned long long)result));
  }
  return result;
}


