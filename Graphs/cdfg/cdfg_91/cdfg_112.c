#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 700354709
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long long p, unsigned int p_4[5][2], unsigned char p_6,
          unsigned int p_9, short p_11)
{
  unsigned int v_21;
  float v_19;
  long long v_17;
  unsigned long long v_15;
  signed char v_13;
  long long v;
  float result;
  v_21 = 3245943484U;
  v_19 = -3703552512.f;
  v_17 = (long long)p;
  v_15 = 18446744073003245938ULL;
  v_13 = (signed char)p_6;
  v = 633897280LL;
  while ((unsigned long long)((long long)v_13 / (- (-541572076LL / (long long)(
                                                    p_4[3][0] + 434U)) + 800LL)) < 
         (18446744073709535795ULL + (428441215ULL + v_15)) - 175ULL) {
    v_19 = (long long)v_21 / (((long long)v_19 - v_17 / 4294911971LL) + 432LL);
    v_17 = (long long)((unsigned long long)v_13 * ((unsigned long long)(
                                                   p_9 / 4294967264U) * (
                                                   v_15 & 25029ULL)));
    v_21 = (unsigned int)((unsigned long long)(- v_17 * -48LL) / (((126ULL ^ v_15) | (unsigned long long)(
                                                                   (int)p_6 * 4447)) + 448ULL));
    v_13 = - (~ (~ v_13));
  }
  while_0_break: ;
  if ((unsigned int)((double)((unsigned long long)(~ p_6) % (((unsigned long long)v + p) + 117ULL)) / (
                     ((double)(p - (unsigned long long)p_9) + 2912582967.21) + 634.)) >= - (
      (unsigned int)p_11 ^ - p_9)) result = - (7933635584.f * (float)p);
  else result = (float)p_4[1][0];
  return result;
}


