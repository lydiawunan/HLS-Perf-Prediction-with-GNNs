#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 534197376
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p, signed char p_4, unsigned int p_7,
              signed char p_15, float p_17)
{
  float v_13;
  unsigned short v_11;
  unsigned short v_9;
  unsigned long v;
  long long result;
  v_13 = 1311617152.f;
  v_9 = (unsigned short)p_4;
  v = 4294927904UL;
  v_11 = (unsigned short)((float)((v / ((unsigned long)v_13 + 428UL) >> 3ULL) * (unsigned long)p_15) - - p_17);
  v = (unsigned long)(- (((int)(- p_4) - -79) % ((int)v_11 + 89)));
  result = (long long)((((4294939481U + p_7) | 494079559U) | (unsigned int)v_9) >> (
                       (unsigned long)p_4 * 3554321344UL & 31UL));
  result = (long long)((unsigned long)(- (51.188835144f - (float)p) + (float)(
                                       (int)(-7768570930.09 - (double)result) / -964183801)) % (
                       (~ ((unsigned long)p_4 * v) ^ (unsigned long)(
                        3287U * - p_7)) + 19UL));
  return result;
}


