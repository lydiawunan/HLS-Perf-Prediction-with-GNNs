#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1390322
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p, int p_4[1][2][3], int p_7, char p_9,
          unsigned long long p_11)
{
  long long v_29;
  unsigned long v_27;
  unsigned int v_25;
  unsigned long v_23;
  unsigned long v_21;
  char v_19;
  char v_17;
  float v_15;
  short v_13;
  long v;
  float result;
  v_29 = 31632LL;
  v_27 = (unsigned long)p_11;
  v_25 = (unsigned int)p_4[0][1][0];
  v_21 = (unsigned long)p_11;
  v_19 = (char)p_11;
  v_17 = (char)79;
  v_15 = 8456321536.f;
  if ((p_11 * 4027357868ULL + (unsigned long long)(v_27 / (unsigned long)(
                                                   p_4[0][0][2] + 762))) / 114ULL != 77ULL) {
    v_15 = (float)(! v_21);
    v_23 = 880UL;
    v_21 = (unsigned long)((unsigned long long)(1471987560UL - ((unsigned long)p_4[0][0][1] + v_23)) & (
                           2917797ULL | (unsigned long long)(~ v_25)));
  }
  else {
    v_27 = (unsigned long)((long long)(~ ((unsigned long)p_9 + p)) % (
                           - ((long long)v_19 - v_29) + 21LL));
    v_19 = (char)((48275774ULL - (unsigned long long)v_27) / (~ (18446744073204092170ULL % (
                                                                 p_11 + 910ULL)) + 260ULL));
    v_17 = (char)v_25;
  }
  if ((unsigned long)((int)((float)(~ p_4[0][1][1]) - - v_15) | ((int)v_17 + (int)p_9)) <= (
      (unsigned long)v_19 | ! (v_21 - 55979UL))) {
    v = (long)((unsigned long long)(959094831U % (unsigned int)((p_4[0][1][1] + -351) + 764)) * (
               (unsigned long long)p_7 % 4764941427ULL));
    result = (float)((~ p + (unsigned long)(- p_4[0][0][2])) % (unsigned long)(
                     ! ((long)p_4[0][1][0] | v) + 145L));
  }
  else {
    v_13 = (short)-851.560259213;
    result = (float)(- ((p_11 / (unsigned long long)(p_4[0][0][1] + 137)) % (unsigned long long)(
                        (int)v_13 + 893)));
    result = - (- ((float)p_9 + result));
  }
  return result;
}


