#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 511666143
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p, long p_7)
{
  unsigned long long v_15;
  unsigned long long v_13;
  unsigned long v_11;
  unsigned short v_9;
  float v_5;
  long v;
  signed char result;
  v_15 = (unsigned long long)p;
  v_13 = 18446744073709520048ULL;
  v_11 = (unsigned long)p_7;
  v_9 = (unsigned short)p_7;
  v = 297060305L;
  result = (signed char)p_7;
  v_5 = (float)((unsigned long long)-8948585661.9 / (- (v_15 - (unsigned long long)p_7) + 396ULL));
  while (! (! v % (41283L * v + 726L)) <= (long)(p * ((v_5 + p) + (float)(
                                                      p_7 | (long)v_9)))) {
    v_9 = v_13 - 44968ULL;
    result = (signed char)(- p_7);
    v_5 = (float)((unsigned long long)(v_11 | (unsigned long)result) / (
                  ((unsigned long long)v_9 * 18446744073709533770ULL) / (unsigned long long)(
                  v / (p_7 + 664L) + 863L) + 553ULL));
    v_9 = (unsigned short)((0 - (unsigned long long)(p / ((float)v + 10.f))) % (unsigned long long)(
                           ~ (52 * (int)v_9) + 832));
  }
  while_0_break: ;
  return result;
}


