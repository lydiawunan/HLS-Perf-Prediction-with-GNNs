#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 906030674
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, float p_7[5][5], unsigned int p_11, float p_13)
{
  char v_9;
  unsigned short v_4;
  float v;
  long long result;
  result = -445382847LL;
  v_9 = (char)p_13;
  v = (float)((unsigned int)(- (-3.27387845298e+38f * (float)v_9) * (float)(
                             ~ p_11 * (unsigned int)(- v_9))) % 52675U);
  v_4 = (unsigned short)(- (p - (long)(! (-29931 + (int)((short)p_7[1][3])))));
  result = (long long)(! ((unsigned long long)(v * (float)(result % (long long)(
                                                           (int)v_4 + 269))) % 18446744073488919978ULL));
  return result;
}


