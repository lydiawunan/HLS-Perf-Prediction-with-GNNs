#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 503942404
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p, short p_7, long p_13)
{
  unsigned char v_11;
  float v_9;
  unsigned long long v_4;
  long v;
  float result;
  v_9 = (float)p_7;
  v_4 = (unsigned long long)p;
  v = 94043719L;
  result = (float)p_13;
  if (- v_9 >= 3607103744.f) {
    v_9 = - v_9 * 25236.f;
    result = (float)(~ (-69525LL - (long long)p_7));
    v_11 = (unsigned char)((long)(- v_9 - -91.f) % 12553L);
  }
  else {
    v_4 = (unsigned long long)((long long)(- (~ p_7)) / -34305LL);
    v_11 = (unsigned char)(~ p_13);
    v_9 = (float)((unsigned long)(! (- p_13)) * 3910195602UL);
  }
  while (69ULL >= (unsigned long long)(~ (~ v)) % ((v_4 % (unsigned long long)(
                                                    (int)p + 762)) * (unsigned long long)p_7 + 732ULL)) {
    result = (int)v_11 * (int)((unsigned char)(v_9 * 2.85007567889e+38f));
    v = (long)(- (0.f * (result / 1031976192.f)));
    v_9 = (float)(unsigned char)98;
    v_4 = - (v_4 & (unsigned long long)v_9) & (unsigned long long)((v_9 / (
                                                                    (float)p_7 + 1009.f)) / (
                                                                   (float)(~ p_13) + 735.f));
  }
  while_0_break: ;
  return result;
}


