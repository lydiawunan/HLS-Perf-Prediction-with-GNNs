#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 818502483
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p, int p_11, char p_13, unsigned int p_17[4],
        long long p_23)
{
  unsigned short v_25;
  char v_21;
  float v_19;
  unsigned char v_15;
  int v_9;
  float v_7;
  double v_5;
  signed char v;
  int result;
  v_25 = (unsigned short)5417;
  v_19 = 47.6952629089f;
  v_15 = (unsigned char)1;
  v_9 = -28417;
  v_21 = (char)((unsigned long long)((p_17[0] * (unsigned int)v_25) / (unsigned int)(
                                     (int)v_15 + 488)) % (~ (10ULL % (
                                                             p + 212ULL)) + 205ULL));
  if ((unsigned long long)(~ ((unsigned int)v_15 / (~ p_17[0] + 347U))) > 
      (18446744073709523192ULL * p & 71ULL) % (((unsigned long long)v_19 & p) / (unsigned long long)(
                                               (long long)v_21 * p_23 + 418LL) + 182ULL)) {
    v = (signed char)0;
    result = (int)(- ((float)p * -818.083190918f) - (float)(42 + (int)v));
  }
  else {
    v_7 = (float)((0ULL - ! p) + ((unsigned long long)(v_9 & v_9) | p % (unsigned long long)(
                                                                    p_11 + 220)));
    v_5 = (double)((int)v_7 % (~ (~ v_9) + 695));
    result = (int)(v_5 - 0.);
  }
  return result;
}


