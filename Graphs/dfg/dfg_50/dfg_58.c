#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 837074511
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p, short p_9, signed char p_11, float p_13)
{
  signed char v_6;
  short v_4;
  long long v;
  signed char result;
  v_6 = (signed char)69;
  v_4 = (short)((float)((int)((float)p_9 * p) % ((int)((signed char)p) % (
                                                 (int)v_6 + 908) + 910)) / (
                (- (p - (float)p_11) + p_13) + 867.f));
  v = ~ ((long long)((long)((int)v_4 / 76) / (((long)v_6 ^ 110834001L) + 423L)) / (
         (-60488LL ^ (long long)((int)((short)p) % ((int)p_9 + 63))) + 943LL));
  result = (signed char)(2461122285LL / (v + 636LL));
  result = (signed char)(- (- (455385920.f * (float)((int)result * 38301))));
  return result;
}


