#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 244368333
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, float p_4, unsigned int p_7, signed char p_9,
                unsigned long p_11)
{
  float v_15;
  signed char v_13;
  signed char v;
  signed char result;
  v_15 = -5333228032.f;
  result = (signed char)v_15;
  v_13 = (signed char)p_7;
  v = (signed char)((unsigned long)((int)(- result) / 503) % ((38UL ^ 
                                                               (p_11 * p_11) * (
                                                               p_11 - (unsigned long)v_13)) + 650UL));
  result = (signed char)((unsigned int)((int)p + (int)((signed char)p_4)) - (
                         (unsigned int)(! v) / (! p_7 + 394U) << (212 / (
                                                                  (int)v * (int)p_9 + 489) & 31)));
  return result;
}


