#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 945772917
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p, unsigned int p_4,
              unsigned long long p_6[5][3], short p_11[3][4][4],
              long long p_13)
{
  unsigned int v_21;
  float v_19;
  unsigned long long v_17;
  float v_15;
  unsigned long long v_9;
  unsigned int v;
  long long result;
  v_21 = (unsigned int)p;
  v_19 = (float)p_4;
  v_17 = 12284757ULL;
  v_15 = (float)p_6[2][0];
  v = 4294966697U;
  result = 16238233LL;
  v_19 = (float)((~ v_17 * (unsigned long long)((long long)v_19 * p_13) + (unsigned long long)(
                  12108UL - ! p)) * 203ULL);
  v_17 = (unsigned long long)v_19 * (((unsigned long long)(v_21 ^ (unsigned int)-905.922519869) * (
                                      (unsigned long long)p_13 * p_6[0][2])) % (unsigned long long)(
                                     - p_13 / (result + 603LL) + 248LL));
  v_9 = (unsigned long long)(2431911168.f - (float)((unsigned long long)(
                                                    p_13 - (long long)(
                                                    (double)v_15 / -4.79945448735e+37)) * (
                                                    ! v_17 % (- p_6[2][2] + 500ULL))));
  result = (long long)(((unsigned long long)(! (p * (unsigned long)p_4)) + 
                        ((unsigned long long)p_4 / (p_6[1][2] + 644ULL)) * (unsigned long long)v) + 
                       ~ (- v_9) / (unsigned long long)((int)p_11[1][2][3] + 467));
  return result;
}


