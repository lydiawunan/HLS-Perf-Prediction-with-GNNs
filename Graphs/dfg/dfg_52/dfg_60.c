#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 86265695
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, unsigned char p_5, signed char p_9, short p_13,
         unsigned int p_15)
{
  unsigned long v_17;
  short v_11;
  unsigned long v_7;
  float v;
  char result;
  v_17 = 4294946419UL;
  v_7 = 675407266UL;
  result = (char)-110;
  v_11 = (short)(((unsigned long)(~ p_9) * ((unsigned long)p_15 / (v_17 + 987UL)) & (unsigned long)-612.948852539f) & (unsigned long)p_15);
  v = (float)(- ((int)(- (! p_5)) + (int)p_5));
  v_7 = (unsigned long)result * ! ((unsigned long)(- result) + v_7);
  result = (char)((((p + v) + (float)(~ p_5)) + (float)(~ (v_7 - (unsigned long)p_9))) / (
                  (float)((int)(- v_11) % ((int)((short)(- (4.47368621826f - (float)p_13))) + 252)) + 390.f));
  return result;
}


