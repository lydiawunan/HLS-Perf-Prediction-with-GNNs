#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 625751650
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, float p_9, short p_13, float p_15,
                 unsigned int p_19)
{
  long long v_21;
  unsigned short v_17;
  float v_11;
  unsigned char v_7;
  unsigned int v_5;
  unsigned char v;
  unsigned int result;
  v_21 = (long long)p_13;
  v_17 = (unsigned short)53694;
  v_11 = 4446451200.f;
  v_5 = (unsigned int)(! (-22031LL - ~ ((long long)p_19 - v_21)));
  v_7 = (unsigned char)((int)(78204.f - - (v_11 - 4294927104.f)) - ((int)(- (~ p_13)) | (int)((short)(- (
                                                                    p_15 + (float)v_17)))));
  v = (unsigned char)(! (! (v_5 + (unsigned int)v_7)) % ((unsigned int)p_9 + 892U));
  result = (unsigned int)(- ((int)v % ((int)p + 404)));
  return result;
}


