#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 815682341
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p, signed char p_5, float p_11, float p_15)
{
  short v_13;
  signed char v_9;
  unsigned int v_7;
  int v;
  long result;
  v_13 = (short)15482;
  v_7 = 3827259573U;
  v = (int)p_15;
  result = (long)(~ (((long long)v / 161633438LL) % (long long)((751590520UL - (unsigned long)v_13) + 799UL)) * (long long)(
                  (int)(- p_15) * (51654 * (34379 * v))));
  v_9 = (signed char)(59374 * ! ((-29671 - v) >> ((long)p_5 * -469186931L & 31L)));
  v = (int)(~ p_5) >> ((unsigned long)(- result) * (unsigned long)(v_7 % (unsigned int)(
                                                                   (int)v_9 + 934) + (unsigned int)(
                                                                   (int)((short)p_11) ^ (int)v_13)) & 7UL);
  result = 29921L | ((p ^ -77L) % (long)(! v + 915) - (long)(! (~ p_5)));
  return result;
}


