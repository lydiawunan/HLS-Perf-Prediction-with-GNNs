#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 203110104
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(signed char p, unsigned long long p_4, long long p_7[2][1],
              unsigned long p_9[2][2][1], long p_13)
{
  unsigned char v_19;
  double v_17;
  long v_15;
  float v_11;
  unsigned long long v;
  long long result;
  v_19 = (unsigned char)18;
  v_17 = (double)p_4;
  v_15 = (long)p_7[0][0];
  if (- ((long)p - v_15) < (long)((-18338 % ((int)((short)v_17) + 680)) % (
                                  (int)(~ v_19) + 599) & (-37 + (int)((signed char)-152.271697998f)) / 219)) {
    v = 300099155ULL;
    v_11 = (float)((unsigned long)(~ (! p_13)) * (p_9[0][1][0] / (p_9[0][0][0] + 747UL)));
  }
  else {
    v_11 = (float)(((p_9[0][0][0] & 247980568UL) >> ((int)p & 31)) - 558397686UL);
    v = (unsigned long long)((long)(7318.f / (v_11 + 708.f)) % -25886L) * (
        ~ p_4 % (unsigned long long)((int)(~ p) + 880));
  }
  if ((p_4 & v) <= (unsigned long long)((long long)-1.66253339634e+38f * (
                                        p_7[1][0] * (long long)p_9[0][0][0] << (
                                        (long long)(v_11 / 950.f) & 63LL)))) 
    result = (long long)(- p);
  else result = (long long)1.37837860761e+38;
  return result;
}


