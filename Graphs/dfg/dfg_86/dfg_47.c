#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 837102475
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p, unsigned long long p_7, unsigned long long p_9[2][1][1],
          unsigned long long p_17)
{
  unsigned long v_15;
  int v_13;
  double v_11;
  char v_5;
  unsigned long v;
  float result;
  v_15 = (unsigned long)p_7;
  v_11 = 2.91736669838e+37;
  v_5 = (char)p_9[0][0][0];
  v = (unsigned long)p_17;
  result = (float)p;
  v_13 = (int)((unsigned long long)(((unsigned long)result / (v_15 + 653UL)) / 4125602004UL ^ 188UL) * (
               (unsigned long long)((int)(- v_5) * (int)p) ^ ! (7148ULL % (
                                                                p_17 + 339ULL))));
  v_5 = (char)((unsigned long long)v - ~ ((unsigned long long)v_11 & p_7) / (unsigned long long)(
                                       (int)(183.938980103 - v_11) % (
                                       ! v_13 + 377) + 377));
  v_5 = v_5;
  result = (float)((unsigned long long)((long long)((unsigned int)((int)((char)6186281580.) / (
                                                                   (int)p + 613)) / 4294949379U) * (
                                        132010626LL - (long long)v * 569117586LL)) / (
                   ((unsigned long long)(44692U * (unsigned int)(~ v_5)) & 
                    (p_7 - p_9[0][0][0]) % 47645ULL) + 520ULL));
  return result;
}


