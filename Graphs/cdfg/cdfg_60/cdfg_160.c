#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 121377053
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p, double p_7)
{
  short v_21;
  float v_19;
  unsigned int v_17;
  unsigned long v_15;
  unsigned int v_13;
  unsigned long long v_11;
  short v_9;
  char v_4;
  int v;
  float result;
  v_21 = (short)-30765;
  v_19 = -666.993530273f;
  v_17 = (unsigned int)p;
  v_15 = 14369UL;
  v_13 = 460752700U;
  v_11 = (unsigned long long)p;
  v_9 = (short)p_7;
  result = 7722212352.f;
  while (~ (v_15 % ((unsigned long)p_7 + 771UL)) + (unsigned long)(- result + (float)(
                                                                   p * 236UL)) >= (unsigned long)p_7) {
    v_15 = (long long)v_17 % -999810502LL;
    v_17 = (unsigned int)(((unsigned long long)(v_19 - -24.f) / 834ULL) % (unsigned long long)(
                          (int)v_21 + 384));
    v_4 = (char)(- p_7 / (double)((result + 3.19464643681e+38f) + 340.f) + 
                 -3362. * - p_7);
    result = (float)(((long long)(174 - (int)v_4) + (887974241LL - (long long)v_15)) / (
                     (long long)(- p_7) + 593LL));
  }
  while_0_break: ;
  if (- ((unsigned long long)((long long)v_9 - 662037730LL) % ((v_11 - (unsigned long long)p) + 530ULL)) != (unsigned long long)v_13) {
    v_4 = (char)p;
    v = (int)(-431953559LL % (long long)((int)(~ (~ v_4)) + 533));
    result = (float)((unsigned int)(~ (- v)) % 4294935781U);
  }
  else result = (float)(16229UL + (unsigned long)(- p_7));
  return result;
}


