#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 431727529
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, unsigned char p_4, short p_9, unsigned long p_11,
                float p_13)
{
  unsigned short v_15;
  long v_7;
  float v;
  signed char result;
  v_15 = (unsigned short)15800;
  v_7 = 3241L;
  result = (signed char)p_9;
  v = (float)(! (~ (! v_15)));
  while ((unsigned long)p <= (572821496UL | (unsigned long)(14725U + (unsigned int)p_4)) * (unsigned long)(- (
                             -23132.f + v))) {
    v_7 *= -70L;
    result = (signed char)p_13;
    v = (float)(~ (~ (p_11 / 474039769UL)));
    v = (float)((int)(- v) / ((124 + ((int)((short)-4.501701601e+37f) - (int)p_9)) + 893));
  }
  while_0_break: ;
  return result;
}


