#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 224294173
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, long long p_7, unsigned long p_11, char p_15,
         unsigned int p_17)
{
  char v_23;
  unsigned long long v_21;
  float v_19;
  unsigned char v_13;
  short v_9;
  signed char v_5;
  char v;
  long result;
  v_23 = (char)p_7;
  v_21 = (unsigned long long)p_15;
  v_19 = -1.73791652106e+38f;
  v_13 = (unsigned char)14;
  v_9 = (short)p_15;
  v_5 = (signed char)p;
  v = (char)12;
  result = 19396L;
  while ((unsigned long)(((unsigned int)v_19 + p_17) / 661U) + 35620UL == 4294967295UL) {
    v_9 = (short)(~ -33428L);
    v_9 = (short)(~ (v_21 + (unsigned long long)v_23) - (unsigned long long)(
                  (long long)(v_19 * (float)p_15) + p_7 / (long long)(
                                                    (int)v_9 + 449)));
    v_19 = (float)v;
  }
  while_0_break: ;
  while ((long long)((int)p - (int)v / ((int)v_5 + 405)) * ((p_7 & (long long)v_9) + 
                                                            p_7 * (long long)-3.16149714422e+38) != (
         57258LL | (long long)(- p_11))) {
    v_13 = (unsigned long)v_13 * 3868UL;
    v = (char)(- (! p_7) + (long long)(p_11 / (unsigned long)(p_17 + 668U)));
    result = (long)((unsigned long long)p_7 * 815027248ULL);
    v_5 = (signed char)(17230ULL | ((unsigned long long)(~ p_15) - (unsigned long long)-2.28202197382e+38f % 22694ULL));
  }
  while_0_break_0: ;
  return result;
}


