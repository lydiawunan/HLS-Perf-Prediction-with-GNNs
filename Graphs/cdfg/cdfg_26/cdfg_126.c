#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 995465383
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p)
{
  long long v_14;
  unsigned long long v_12;
  float v_10;
  long long v_8;
  unsigned char v_6;
  signed char v_4;
  unsigned long v;
  unsigned char result;
  v_12 = (unsigned long long)p;
  v_10 = (float)p;
  v_8 = -600958772LL;
  v_6 = p;
  v_4 = (signed char)p;
  v = 4294942633UL;
  result = p;
  while ((int)(~ (~ (~ v_4))) != (int)((signed char)(-304.130828857f * (float)(
                                                     (long long)(- v_6) - (
                                                     23126LL - v_8))))) {
    v_14 = v_12 / (unsigned long long)((int)((unsigned char)v_10) / 220 + 54);
    v_12 = (unsigned long long)(((long long)(~ p) / ((long long)v_6 / (
                                                     v_8 + 636LL) + 966LL)) * (long long)p);
    v_4 = (signed char)((v_14 + (long long)p) - (long long)p * (v_14 + (long long)p));
    v_4 = v_4;
  }
  while_0_break: ;
  result = (unsigned char)(- ((unsigned long)(4 * (int)result) % (~ v + 87UL)));
  return result;
}


