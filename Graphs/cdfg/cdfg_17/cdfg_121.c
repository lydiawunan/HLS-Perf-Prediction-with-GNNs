#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 80371826
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p, unsigned long p_9, char p_11,
          unsigned long long p_15, unsigned int p_17)
{
  long v_19;
  char v_13;
  signed char v_7;
  short v_4;
  unsigned long long v;
  float result;
  v_19 = (long)(~ p);
  if (p_15 - (unsigned long long)(3809085811U - p_17) <= 18446744073709522380ULL * (
                                                         (unsigned long long)v_19 / (
                                                         p_15 + 943ULL)) + 29915152ULL) {
    v_4 = (short)197;
    v = (unsigned long long)(- ((int)(! v_4) % ((int)p + 732)));
    result = (float)(v / 2ULL);
  }
  else {
    v_13 = (char)70;
    v_7 = (signed char)((48548UL % (unsigned long)((int)(! v_13) + 846)) * p_9);
    result = (float)((unsigned long)(! (- v_7)) + (p_9 % 4294929353UL) / (unsigned long)(
                                                  (int)p_11 + 910));
  }
  return result;
}


