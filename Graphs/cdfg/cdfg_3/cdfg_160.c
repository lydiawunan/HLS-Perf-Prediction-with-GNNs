#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 595767455
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, unsigned long long p_4, float p_7,
                  unsigned long p_9, unsigned char p_13)
{
  unsigned char v_21;
  unsigned int v_19;
  float v_17;
  unsigned char v_15;
  double v_11;
  float v;
  unsigned char result;
  v_21 = (unsigned char)181;
  v_19 = 4294952756U;
  v_17 = (float)p;
  v_15 = (unsigned char)203;
  v = -2.08533371233e+38f;
  if ((float)(! (((unsigned int)v / (v_19 + 804U)) / (unsigned int)((int)((unsigned char)p) / (
                                                                    (int)v_21 + 743) + 897))) <= - (- v_17)) {
    v_11 = (double)((unsigned long long)((int)p_13 + ((int)v_15 - (int)((unsigned char)v_17))) % (
                    - ((unsigned long long)p_13 - p_4) + 843ULL));
    result = (unsigned char)(! (~ p_9 / (unsigned long)((20 - (int)((char)v_11)) + 1)));
    v = - v / ((float)(122 / (((int)p - 631230206) + 695)) + 792.f);
  }
  else {
    v = (float)(- -713213877LL);
    result = p_13;
  }
  while ((unsigned long long)result >= ((unsigned long long)(p / (p + 295.)) % (
                                        - p_4 + 1003ULL)) / 4294967295ULL) {
    v -= 667938624.f;
    result = (unsigned char)242;
  }
  while_0_break: ;
  return result;
}


