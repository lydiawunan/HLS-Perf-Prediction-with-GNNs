#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 293864899
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p, float p_5, unsigned char p_7)
{
  char v_9;
  unsigned long v;
  unsigned long result;
  v_9 = (char)-58;
  v = 45471UL;
  v = (unsigned long)((28069LL << ((long long)(p_5 / ((float)v + 247.f)) & 63LL)) ^ 27099332LL);
  result = (unsigned long)(((float)(-693589822LL / (long long)(v + 193UL)) / (
                            (float)p * p_5 + 890.f)) / ((float)((int)p_7 * (int)v_9) * (
                                                        p_5 + 4294945536.f) + 908.f));
  return result;
}


