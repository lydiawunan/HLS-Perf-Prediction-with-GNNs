#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1001278077
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, float p_9, unsigned short p_11[4],
                unsigned int p_17, signed char p_19)
{
  float v_21;
  short v_15;
  long v_13;
  long v_7;
  signed char v_5;
  long v;
  signed char result;
  v_21 = (float)p_19;
  v_15 = (short)p_9;
  v_7 = (long)p_17;
  v_5 = (signed char)12;
  v = -40972L;
  result = (signed char)18;
  if ((unsigned long)((long)(0 / ((int)((unsigned short)v_21) % ((int)p_11[2] + 376) + 422)) * (
                      (long)v_5 / ((889L - v) + 619L))) == (unsigned long)(- (
                                                           p_17 % (p_17 + 687U))) % 2013265920UL) {
    v_5 = v_5;
    v_13 = (long)(p_9 / ((float)p_17 + 817.f)) % (v_7 + 181L);
    v_7 = (long)((int)(~ result) + (int)((signed char)(- (- p_9))));
  }
  else {
    v_7 = (long)p_17;
    v_13 = (long)(0U % ((unsigned int)(p_9 - (float)(p % ((long long)p_9 + 186LL))) + 383U));
    v_15 = (short)(((unsigned int)(~ p_11[0]) + (p_17 - (unsigned int)p_11[0])) & 17122U);
  }
  if ((int)v_15 != (int)p_11[0]) {
    v_15 = (short)((p % (long long)((int)p_19 + 1003)) / (long long)(
                   (int)(- v_5) + 565));
    v_5 = (signed char)((unsigned long)((long)((int)result % ((int)p_11[0] + 379)) * (
                                        v_13 / (long)((int)v_15 + 336))) - (unsigned long)(
                        (unsigned int)-4952416256.f - p_17));
    result = (signed char)(((long long)v - p) % (long long)((long)v_5 * -993930464L + 61L) | (
                           (long long)v_7 * p + (long long)(21 << ((int)((char)p_9) & 7))));
  }
  else result = (signed char)(- (! (252LL * p)));
  return result;
}


