#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 958348643
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, unsigned long p_4, char p_7,
                signed char p_9, float p_13)
{
  unsigned long v_15;
  char v_11;
  long v;
  signed char result;
  v_15 = (unsigned long)p_7;
  v_11 = (char)p;
  result = (signed char)(- (- (- (-4076324627UL))));
  v = (long)(((((int)((char)-2.33632913965e+38f) - (int)p_7) - ((int)p_9 ^ (int)v_11)) % (
              (int)(- result) / -14561 + 778)) / ((int)(p_13 / ((float)v_15 + 541.f)) + 509));
  result = (signed char)((((p - (unsigned long long)p_4) - 52658ULL % (
                                                           p + 388ULL)) % (unsigned long long)(
                          ~ v + 427L)) % 838020960ULL);
  result = (signed char)((float)(- (((unsigned long long)result + p) % 147ULL)) + -5811582976.f);
  return result;
}


