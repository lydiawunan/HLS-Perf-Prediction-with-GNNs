#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 963780158
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, unsigned long long p_5[4][3][4], short p_7,
          unsigned int p_9[3], double p_11)
{
  unsigned char v_19;
  char v_17;
  long v_15;
  unsigned char v_13;
  char v;
  float result;
  v_19 = (unsigned char)p_11;
  v_15 = -483898197L;
  result = (float)p_11;
  if ((long long)(2.64760033614e+37 / ((double)((unsigned int)((int)v_19 * 16454) + (
                                                42933U ^ p_9[1])) + 653.)) < 187808968LL) {
    v_17 = (char)(- v_15);
    v_15 = (long)p_9[1];
    v = (char)(- (- (- result)));
  }
  else {
    v_17 = (char)p_11;
    v_17 = v_17;
    v = (char)-95;
  }
  if (779086428ULL - (unsigned long long)((long long)(- p_9[0]) | (1LL + p)) < (unsigned long long)(
      (double)(((int)v_17 * 133) % 7521) / ((-2.81398338475e+38 + -53. / (
                                                                  p_11 + 922.)) + 556.))) {
    v = (char)(((unsigned long long)(15569LL * p) & (p_5[1][1][0] | (unsigned long long)p_7)) % (unsigned long long)(
               (~ p_9[2] - (unsigned int)(p_11 - (double)p_9[1])) + 868U));
    result = (float)(0 % (! ((int)v % 112) + 65));
  }
  else {
    result = (float)((long long)((int)(- v) - 137) * p);
    v_13 = (unsigned char)p;
    result = (float)((long)(- (! v_13)) | (long)result * (v_15 - (long)p_11));
  }
  return result;
}


