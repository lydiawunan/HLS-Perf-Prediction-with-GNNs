#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 835466650
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p)
{
  short v_9;
  unsigned char v_7;
  signed char v_5;
  float v;
  float result;
  v_9 = (short)p;
  v_5 = (signed char)-103;
  v = 881.957397461f;
  v_7 = (unsigned char)(1ULL % (unsigned long long)(-7349L % (long)((int)v_9 + 750) + 360L));
  result = (float)((~ p % ((long)v % (p % (long)((int)v_5 + 195) + 790L) + 252L)) / (long)(
                   (int)v_7 + 383));
  result = result;
  result = (float)0;
  return result;
}


