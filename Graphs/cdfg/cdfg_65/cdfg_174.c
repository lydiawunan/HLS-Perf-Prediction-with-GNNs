#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 448770098
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, unsigned char p_7, unsigned long long p_9,
                float p_13[2], unsigned long p_17)
{
  long long v_21;
  char v_19;
  short v_15;
  unsigned long long v_11;
  long long v_5;
  char v;
  signed char result;
  v_21 = (long long)p_13[1];
  v_19 = (char)p_17;
  result = (signed char)79;
  v_15 = (short)result;
  if ((long long)v_15 < (long long)(! (p_17 + (unsigned long)p_7)) - ! (
                        (long long)v_19 | v_21)) {
    v = (char)(~ p);
    result = (signed char)v;
  }
  else {
    v_11 = (unsigned long long)p_13[1];
    v_5 = (long long)(~ (p_9 / 18446744072827955529ULL + v_11));
    result = (signed char)(~ ((int)((unsigned char)((double)v_5 - 3066088587.59)) * (int)(- p_7)));
  }
  return result;
}


