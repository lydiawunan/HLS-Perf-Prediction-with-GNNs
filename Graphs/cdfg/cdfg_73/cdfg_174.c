#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 921872040
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p, char p_7, long long p_11[2][4][1],
           unsigned short p_15, unsigned long long p_17)
{
  long long v_29;
  unsigned char v_27;
  int v_25;
  char v_23;
  unsigned char v_21;
  unsigned long long v_19;
  int v_13;
  int v_9;
  double v_5;
  double v;
  double result;
  v_29 = 728408326LL;
  v_27 = (unsigned char)177;
  v_25 = -316479219;
  v_23 = (char)-91;
  v_21 = (unsigned char)248;
  v_13 = 1039129776;
  v_9 = -21688;
  v_5 = 1.1464105269e+38;
  if ((unsigned long long)((double)(((unsigned long long)v_23 % 33948ULL) * (unsigned long long)(
                                    v_25 - (int)v_27)) * (-1.0259984153e+38 * (double)p_7 + (double)(- v_29))) == 
      ~ (p_17 << ((unsigned long long)v_5 & 63ULL)) * ((unsigned long long)(- p) * (
                                                       33782ULL ^ p_17))) {
    v_19 = (unsigned long long)(~ v_9);
    v = (double)(((v_19 | (unsigned long long)p_15) | (unsigned long long)v_5) / (unsigned long long)(
                 ((int)p_7 % ((int)((char)8836925258.97) + 56)) / 686 + 715));
    result = (double)((unsigned long long)(v_13 & (int)p_15) % (~ p_17 + 891ULL) >> 35);
  }
  else {
    v = (double)(! p_11[1][1][0] * p_11[1][0][0]);
    v_9 = (int)((unsigned long long)2.06641742131e+38 / (18446744072769114580ULL / (unsigned long long)(
                                                         (int)(- v_21) + 450) + 510ULL));
    result = (double)(! ((v_9 - v_9) % 90));
  }
  while ((double)(-7751106560.f * (float)p) <= result) {
    v_5 = v - 640056024.;
    v_9 = (int)p_11[1][0][0];
    v = (double)((13147ULL * (unsigned long long)p_7) / (unsigned long long)(
                 (161 + v_9) + 403) - 63691ULL);
    result = - v_5;
  }
  while_0_break: ;
  return result;
}


