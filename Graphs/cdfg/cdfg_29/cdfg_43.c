#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 999064198
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p, short p_5, long p_7, unsigned short p_9,
              unsigned long p_15)
{
  char v_21;
  float v_19;
  float v_17;
  long v_13;
  unsigned int v_11;
  long v;
  long long result;
  v_21 = (char)p_7;
  v_19 = (float)p_7;
  v_17 = (float)p_7;
  v_13 = (long)p_15;
  v_11 = 4294903501U;
  v = p_7;
  while (p * (float)((p_15 * (unsigned long)v) * (unsigned long)(- p_7)) != -30580.f) {
    v_17 = (int)v_21 / 37;
    v_21 = (char)((int)p_5 / ((int)p_9 + 269));
    v_19 = (float)(~ (! (~ p_15)));
    v = (long)(~ (((unsigned long)v_21 * p_15) % (unsigned long)((int)(~ p_5) + 604)));
  }
  while_0_break: ;
  if (6060.27737531 * (double)(((unsigned long long)p_9 - 18446744073709507986ULL) + (unsigned long long)(
                               v_11 + 4294962255U)) <= (double)((long long)(
                                                                ((unsigned long)v_13 / (
                                                                 p_15 + 952UL)) % (
                                                                (unsigned long)v_17 + 469UL)) % (
                                                                (long long)(- p_15) * (
                                                                26951LL - (long long)v_19) + 246LL))) 
    result = (long long)(-469590961);
  else {
    v = 52176L;
    result = (long long)(215L / ((long)(228.f - p) * (v - (long)p_5) + 885L));
  }
  return result;
}


