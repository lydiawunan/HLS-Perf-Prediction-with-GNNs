#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 963567162
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p, char p_7[5][1][5], unsigned short p_15[1])
{
  int v_17;
  unsigned long long v_13;
  unsigned char v_11;
  char v_9;
  unsigned short v_5;
  int v;
  long result;
  v_17 = -496048936;
  v_11 = (unsigned char)p_15[0];
  v_9 = (char)-14;
  v_13 = (unsigned long long)(~ p_7[4][0][1]);
  if ((unsigned long long)(! ((int)v_9 * (int)v_11)) <= v_13 / (unsigned long long)(
                                                        ((long)((int)p_15[0] << (
                                                                v_17 & 15)) ^ 0) + 555L)) {
    v_5 = (unsigned short)(- (~ 3565444053UL));
    v = -27122;
    result = (long)(- (v * (int)p) + (int)v_5);
  }
  else result = (long)((18446744073709511671ULL + (unsigned long long)p_7[2][0][0]) | 18446744073709551558ULL);
  return result;
}


