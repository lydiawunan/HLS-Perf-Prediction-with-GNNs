#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 779575124
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, float p_5, short p_7, long p_9, unsigned long p_11)
{
  double v_21;
  unsigned char v_19;
  unsigned int v_17;
  int v_15;
  float v_13;
  float v;
  long long result;
  v_21 = 22631585.3356;
  v_19 = (unsigned char)p;
  v_17 = 1045594141U;
  v_13 = (float)p;
  result = 1037010281LL;
  v_15 = (int)(((long long)(((unsigned int)v_19 % 12248U) / 698U) + ~ (
                result / 37192LL)) % ((long long)(- v_13 / ((float)((int)p_7 - (int)p) + 563.f) - (float)(
                                                  (unsigned long)p * (
                                                  p_11 ^ (unsigned long)v_21))) + 551LL));
  v = (float)(- ((unsigned int)(- v_13 * p_5) + (unsigned int)((int)p_7 | v_15) / (
                                                ((unsigned int)p + v_17) + 280U)));
  v = (float)(- (((18446744073709511835ULL - (unsigned long long)p_7) + (unsigned long long)(
                  (unsigned long)p_9 % (p_11 + 76UL))) & (unsigned long long)(- (
                 228.f + v))));
  result = (long long)((int)p - (int)((short)(v - (p_5 - v))));
  return result;
}


