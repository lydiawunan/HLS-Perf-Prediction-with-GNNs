#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 925352527
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p, long long p_7, float p_9, long long p_11,
         float p_13[4])
{
  float v_19;
  signed char v_17;
  unsigned int v_15;
  unsigned int v_5;
  char v;
  long result;
  v_19 = (float)p;
  v_17 = (signed char)p;
  v_15 = 11672916U;
  v_5 = 136494636U;
  v = (char)p_11;
  result = (long)p;
  if ((long long)((int)v_17 ^ (int)((signed char)((double)(p_11 * (long long)v_17) / (
                                                  (double)v_19 / 1021.60850837 + 700.)))) == 
      104LL % ((long long)(! v_15) % ((long long)result / (p_11 + 745LL) + 645LL) + 345LL)) {
    result = (long)((55952 * (int)((unsigned short)(p_13[2] * p_9))) / 500);
    v_5 = (unsigned int)(p_13[2] * (float)((unsigned long)result / ((
                                                                    3308958764UL - (unsigned long)result) + 902UL)));
    v = (char)(p_13[3] - (float)v_15);
  }
  else {
    v = (char)(((p_7 / (long long)((int)v_17 + 899)) * (long long)((unsigned int)p_13[3] % (
                                                                   p + 352U))) / (
               (long long)(p % (unsigned int)((int)v + 1020)) / -636175113LL + 783LL));
    v_15 = (unsigned int)(! (- ((int)((char)p_9) / -57)));
    result = (long)(3252008192.f - - p_13[1] * (float)(78U % (v_15 + 30U)));
  }
  while ((unsigned long long)(- ((unsigned long)result % (unsigned long)(
                                 p + 988U))) / 18446744073657183780ULL != (unsigned long long)(
         ~ (- result) - (long)(~ (- v)))) {
    result = 43388L;
    result = (long)(((long long)result / (p_7 + 138LL) - 5LL) / (((long long)(
                                                                  29.f / (
                                                                  p_9 + 747.f)) + - p_11) + 930LL));
    v = (char)(p_7 - (long long)(110U * ((unsigned int)v * v_5)));
  }
  while_0_break: ;
  return result;
}


