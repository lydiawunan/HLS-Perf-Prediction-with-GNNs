#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 909856637
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, short p_11)
{
  long long v_15;
  short v_13;
  unsigned int v_9;
  signed char v_7;
  long v_4;
  short v;
  long result;
  v_15 = (long long)p_11;
  v_13 = (short)6562;
  v_9 = (unsigned int)p;
  v_7 = (signed char)p;
  v_4 = (long)p;
  result = (long)(~ ((long long)((int)v_13 - (int)p_11) / (v_15 + 213LL)) * v_15);
  v_9 = (unsigned int)((unsigned long)(! (((int)p + (int)p_11) + (int)(
                                          356.220141472 + (double)v_9))) - (
                       (unsigned long)v_7 / 4294930752UL + (unsigned long)v_4));
  v = (short)(- p);
  result = (long)((unsigned long long)((-151L + (result | (long)v)) * (
                                       (-33998L % (v_4 + 7L)) % (long)(
                                       (int)(~ p) + 301))) ^ ! (((unsigned long long)v_7 - 2646ULL) * (unsigned long long)(
                                                                10534U & v_9)));
  return result;
}


