#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 345387725
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p, unsigned int p_11, char p_13,
                   unsigned long long p_17, float p_23)
{
  int v_27;
  float v_25;
  long long v_21;
  double v_19;
  unsigned long long v_15;
  int v_9;
  unsigned char v_7;
  long long v_4;
  signed char v;
  unsigned short result;
  v_27 = 122706180;
  v_25 = (float)p_11;
  v_21 = (long long)p_11;
  v_19 = 546.596648734;
  v_15 = (unsigned long long)p_13;
  v_9 = (int)p_13;
  if ((41491L / (long)(! v_27 + 929)) / 3357865L <= (long)v_27) {
    v = (signed char)(! ((long)(- v_19) >> 26L));
    v_7 = (unsigned char)(! p_17);
    v_9 = (int)(((unsigned long long)p / 147573952589676009ULL) / (- v_15 + 288ULL));
  }
  else {
    v_19 = (double)((float)(! (- p_11)) - ((float)p + (v_25 - 59.f)));
    v_7 = (unsigned char)(- ((v_19 + (double)v_21) - (double)(- p_23)));
    v = (signed char)((! p_17 - (unsigned long long)((int)p_13 - 64)) - (unsigned long long)(~ (
                      -14484 + p)));
  }
  if (v_9 <= (int)(- ((float)p_11 - -771.110534668f)) / (((int)p_13 << (
                                                          p & 7)) + 504)) 
    result = (unsigned short)74;
  else {
    v_4 = (long long)v_7;
    v = ! v;
    result = (unsigned short)((101139290ULL / (unsigned long long)((int)v + 715) + (unsigned long long)(
                               v_4 - 13781LL)) + 34955ULL / ((unsigned long long)(
                                                             (double)p - 6168461225.18) + 91ULL));
  }
  return result;
}


