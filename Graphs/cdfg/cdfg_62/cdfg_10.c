#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 111294880
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p[3], long long p_4, float p_11, long p_13,
                 unsigned char p_17)
{
  unsigned int v_15;
  unsigned long long v_9;
  float v_7;
  short v;
  unsigned int result;
  v_15 = 493072U;
  v_9 = (unsigned long long)p_17;
  v_7 = (float)p_17;
  v = (short)(! v_15 % (unsigned int)((int)p_17 + 162));
  if (- ((float)(p_4 & (long long)v) - - v_7) < (float)((unsigned long)(
                                                        (float)(- v_9) * (
                                                        p_11 * (float)p_13)) & - (
                                                        (unsigned long)p_13 / 4192906865UL))) 
    result = (unsigned int)p[1];
  else result = 3640412714U;
  return result;
}


