#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 391389777
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, unsigned char p_9[4], long long p_11)
{
  unsigned long long v_13;
  signed char v_7;
  long v_5;
  float v;
  unsigned long result;
  v_13 = 221733005ULL;
  v_7 = (signed char)-123;
  v_5 = (long)(((unsigned long long)((-13 / ((int)v_7 + 851)) * (int)(- p_9[3])) * (
                ((unsigned long long)p_11 / (v_13 + 81ULL)) * (unsigned long long)p_9[3])) * 18446744073709551614ULL);
  result = ! (- ((unsigned long)(p * v_5) & 4293511156UL));
  v = (float)((unsigned long)p * ((1048UL | result) % 174UL));
  result = ((178161056UL % (unsigned long)(p + 637L) ^ 146UL) + (unsigned long)p) & (unsigned long)v;
  return result;
}


