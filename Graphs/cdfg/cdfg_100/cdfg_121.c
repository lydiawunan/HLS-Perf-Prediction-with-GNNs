#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 992394981
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p, int p_15, unsigned long p_17[4][4],
          unsigned char p_21)
{
  long long v_19;
  unsigned short v_13;
  unsigned long long v_11;
  long long v_9;
  unsigned long v_7;
  unsigned long long v_4;
  int v;
  float result;
  v_19 = 28049LL;
  v_13 = (unsigned short)64587;
  result = -134.222579956f;
  v_7 = 28858UL;
  if (0LL != (4294965707LL - (long long)p_17[2][0] * v_19) % (long long)(
             ((v_7 & (unsigned long)p) << ((int)((unsigned char)-7.59742238503e+36f) * (int)p_21 & 31)) + 175UL)) {
    v_4 = (unsigned long long)(9123U + p);
    v = (int)v_4;
    result = (float)(3644467067UL ^ (unsigned long)(v * -751065411)) / (
             (result / 517.221313477f - 0.f) + 103.f);
  }
  else {
    v_11 = (unsigned long long)((~ p + p) + (unsigned int)(((int)((short)result) * -32378) / (
                                                           p_15 + 440)));
    v_9 = (long long)v_13;
    result = (float)((unsigned long long)((long long)(! v_7) - 12809LL % (
                                                               v_9 + 624LL)) * (
                     (unsigned long long)(- p) * v_11));
  }
  return result;
}


