#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1017671883
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p, short p_4[3], double p_13)
{
  unsigned long v_17;
  unsigned long long v_15;
  unsigned short v_11;
  unsigned long long v_9;
  float v_7;
  int v;
  long long result;
  v_17 = (unsigned long)p;
  v_11 = (unsigned short)3809;
  v_9 = (unsigned long long)p;
  v_7 = 7.38388321876e+37f;
  v = -817855774;
  result = (long long)p;
  if (result <= (long long)v_17) {
    v_9 = (unsigned long long)p - v_9;
    v = (int)(- p_13);
    v_15 = 20002ULL;
  }
  else {
    result = ! ((long long)(53376 + (int)p_4[2]) % (result + 690LL));
    v_15 = (unsigned long long)(result * (long long)(~ (~ p_4[1])));
    v_7 = (float)0;
  }
  if ((unsigned long long)((int)p_4[1] * ((int)p - -45915 * (int)-6.08718110914e+37f)) < 
      - ((unsigned long long)v + v_9) / 7ULL) {
    result = (long long)((int)p - (int)((char)((float)((int)p - (int)p_4[2]) / (
                                               (float)v / (v_7 + 379.f) + 125.f))));
    result = ! (- result) * -560140LL;
    result = result;
  }
  else {
    result = (long long)(- ((int)v_11 * (int)v_11) - (int)((p_13 - (double)v_15) / 133.));
    v_9 = (unsigned long long)((long long)(! p) % ((- result - -940583761LL) + 8LL));
    result = (long long)v_9;
  }
  return result;
}


