#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 41440103
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p, unsigned int p_5, signed char p_11, int p_17)
{
  unsigned long v_19;
  float v_15;
  long long v_13;
  short v_9;
  signed char v_7;
  unsigned char v;
  unsigned long long result;
  v_19 = (unsigned long)p_11;
  v_15 = (float)p_5;
  v_13 = -39659LL;
  v = (unsigned char)p_11;
  v_7 = (signed char)(97UL % (((unsigned long)((int)p_11 << 7L) / ((v_19 - (unsigned long)v_15) + 640UL)) % 4294904118UL + 938UL));
  v_9 = (short)(~ ((int)((short)(- (v_15 / ((float)p_17 + 1007.f)))) & 14221));
  v = (unsigned char)(~ ((long long)((int)v_7 * (int)v_9) - ((long long)p_11 - v_13)) % (long long)(
                      ! (1029545814UL + (unsigned long)v % 322095741UL) + 695UL));
  result = (unsigned long long)(- ((unsigned int)(- (- p)) | (unsigned int)v % (
                                                             (p_5 ^ 4294963365U) + 661U)));
  return result;
}


