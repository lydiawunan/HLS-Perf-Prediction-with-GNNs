#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 748224296
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p, long p_4, unsigned short p_7, long p_9)
{
  long v_17;
  unsigned short v_15;
  float v_13;
  int v_11;
  int v;
  unsigned int result;
  v_15 = (unsigned short)p_9;
  v_11 = p;
  v = 14656;
  result = 54082U;
  while ((unsigned long)(~ ((int)(! p_7) - (int)p_7)) == (unsigned long)result - (unsigned long)(
                                                         p_9 * 37155L)) {
    v_13 = (unsigned int)v_11 * 4294939601U;
    v_17 = 51662L;
    result = (unsigned int)(~ v_17);
    result = ((unsigned int)v_13 * 218582708U - (unsigned int)(! v_15)) + (
             4294967291U ^ 117U / (result + 788U));
  }
  while_0_break: ;
  result = (unsigned int)(((long)(-4156237568.f - (float)p) - p_4) * (long)(- v));
  return result;
}


