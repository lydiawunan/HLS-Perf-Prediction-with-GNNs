#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 733741251
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p, signed char p_7, unsigned short p_19)
{
  int v_17;
  unsigned long long v_15;
  unsigned long long v_13;
  short v_11;
  unsigned int v_9;
  unsigned int v_5;
  unsigned long long v;
  unsigned long result;
  v_17 = 10773;
  v_15 = 18446744073709540005ULL;
  v_13 = 4348165ULL;
  v_11 = (short)p_19;
  v_9 = 3881919733U;
  v_5 = 862222332U;
  v = (unsigned long long)p_19;
  result = 16786UL;
  if ((float)((long long)(v_17 + (int)p_7) + -700607051LL) * - (p * 6347.f) < 
      (float)v_13 - ((float)((unsigned int)p_19 / (v_5 + 369U)) - ((float)p_7 + p))) {
    v_11 = (short)-3.12833999463e+38f;
    result = - (result / (unsigned long)(v_9 + 689U) - (unsigned long)(
                v_9 % (unsigned int)((int)v_11 + 531)));
    v = (unsigned long long)result;
  }
  else {
    v_17 = - ((int)(- p_19) * -9939);
    v_13 = - v_13 * (v_15 - (unsigned long long)v_17) + (unsigned long long)v_11;
    v_5 = (unsigned int)v_13;
  }
  result = (unsigned long)((int)((signed char)(((float)v * p) * (p + (float)v_5))) / (
                           (int)(! p_7) + 561));
  return result;
}


