#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 903962898
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p, unsigned char p_5, long long p_7, float p_9,
                       unsigned int p_11)
{
  short v_19;
  unsigned long v_17;
  float v_15;
  unsigned int v_13;
  short v;
  unsigned long long result;
  v_17 = 60079UL;
  v_15 = 425.753143311f;
  v_13 = p_11;
  result = (unsigned long long)p_7;
  while (! ((p_11 - (unsigned int)p_5) / (unsigned int)(((int)p_5 - 112) + 520)) > (unsigned int)(
         - v_15 + ((float)(p_11 % 55900U) + p))) {
    v_19 = (long long)v_17 & 385549722LL;
    v_17 = (unsigned long)v_19;
    v_13 = (unsigned int)(- v_15 / ((float)(((unsigned long long)p % (
                                             result + 332ULL)) % (unsigned long long)(
                                            p_11 + 779U)) + 274.f));
    v_15 = -105.f / (p_9 + 148.f);
  }
  while_0_break: ;
  if (- (- (- p_9)) >= (float)((p_11 >> 19) - ! v_13) / (p_9 + 622.f)) {
    v = (short)(p - -8257995264.f);
    result = (unsigned long long)v;
  }
  else result = (unsigned long long)((int)p_5 << (~ (! p_7) & 7LL));
  return result;
}


