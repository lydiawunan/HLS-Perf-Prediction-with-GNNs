#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 42034567
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p[4], unsigned long p_5, char p_17, float p_19)
{
  float v_15;
  short v_13;
  unsigned long long v_11;
  short v_9;
  long long v_7;
  float v;
  short result;
  v_13 = (short)-32196;
  v_11 = (unsigned long long)p_17;
  v_9 = (short)7263;
  result = (short)32104;
  v = (float)(- ((unsigned int)p[1] + (unsigned int)(- p[0]) / (((unsigned int)p_19 - 37988U) + 924U)));
  v_7 = (long long)((int)(- v_13) | (int)(~ p[2]));
  v_15 = (float)((long long)(((unsigned int)((int)p_17 - (int)result) % 4294940335U) * (unsigned int)v_13) % (
                 (long long)-2.03111379522e+38 + 968LL));
  result = (short)((v + (float)((long long)((int)p[3] + -52) / (((long long)p_5 - v_7) + 788LL))) * (float)(
                   ! ((unsigned long long)v_9 % (v_11 + 274ULL)) / (unsigned long long)(
                   (int)(~ v_13) % ((int)((short)v_15) + 174) + 70)));
  return result;
}


