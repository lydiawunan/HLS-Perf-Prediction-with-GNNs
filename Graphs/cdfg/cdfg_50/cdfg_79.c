#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 171622269
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p[1][4][2], int p_7, unsigned char p_13,
                unsigned char p_19)
{
  float v_23;
  int v_21;
  unsigned char v_17;
  unsigned long v_15;
  float v_11;
  long long v_9;
  signed char v_4;
  unsigned long long v;
  signed char result;
  v_23 = -1.44900386422e+37f;
  v_21 = (int)p_13;
  v_17 = (unsigned char)184;
  v_15 = 7551UL;
  v_11 = 284.363250732f;
  v_4 = (signed char)p[0][1][0];
  v_9 = (long long)(((float)p_19 * v_11 - 4129610752.f) * (float)((unsigned long long)(
                                                                  (int)p_19 + v_21) * (
                                                                  1066767492ULL | (unsigned long long)v_23)));
  if ((long long)(- (p_7 % ((int)v_4 + 240))) * ((long long)p[0][1][0] / 55442LL + (long long)(
                                                 v_11 + 112607728.f)) <= (
      (long long)(((unsigned long)p_13 * v_15) % (unsigned long)((int)v_17 / 34983 + 869)) & -848351674LL)) {
    v_4 = (signed char)((double)(! ((int)v_4 % (p_7 + 716))) - ((double)v_9 / -2.65728955051e+38 + -102.));
    v = (unsigned long long)(-939 - ((int)v_4 / ((int)((signed char)p[0][0][1]) + 305) ^ (int)(- v_4)));
    result = (signed char)(! (~ (- v)));
  }
  else result = (signed char)(~ 551680406L);
  return result;
}


