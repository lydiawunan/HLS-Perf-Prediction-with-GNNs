#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 396641120
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long long p, long p_5, long long p_7[1][4][3],
         unsigned long long p_9, unsigned long long p_17)
{
  int v_19;
  int v_15;
  unsigned long v_13;
  char v_11;
  char v;
  long result;
  v_19 = (int)p_17;
  v_15 = -693470530;
  v_13 = 39718UL;
  v_11 = (char)-19;
  v = (char)-93;
  result = (long)p_9;
  while ((unsigned long long)p_5 < (unsigned long long)(p_7[0][2][2] * (long long)v) * (
                                   (unsigned long long)v ^ p_9) + (unsigned long long)(! (
                                   (long)v_11 ^ result))) {
    result = (long long)v_15 * 1069638027LL;
    v = (char)(((unsigned long long)v_13 / (p_9 + 341ULL)) * - p_17 - (unsigned long long)(
               3540254782UL % (unsigned long)(v_19 + 803) - (unsigned long)(~ p_5)));
    v_11 = (char)(((p_17 + p_17) / (unsigned long long)((int)(~ v) + 899)) % (unsigned long long)(
                  p_5 + 553L));
    v = (char)(~ v_13);
  }
  while_0_break: ;
  result = (long)(p / (long long)(((int)v - -45714) + 175));
  return result;
}


