#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 825704301
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p, float p_4, double p_9, unsigned long long p_11,
           unsigned short p_15)
{
  long v_27;
  int v_25;
  float v_23;
  unsigned int v_21;
  char v_19;
  unsigned int v_17;
  unsigned long v_13;
  char v_7;
  float v;
  double result;
  v_27 = -284820477L;
  v_25 = 35216;
  v_23 = (float)p_15;
  v_21 = 3466916945U;
  v_19 = (char)76;
  v_13 = (unsigned long)p_4;
  result = 673.876417262;
  v_17 = (unsigned int)((float)(((150468842UL + (unsigned long)p) / (unsigned long)(
                                 ((int)p_15 + (int)p_15) + 597)) % (unsigned long)(
                                (unsigned int)(- p_9) / (! v_21 + 711U) + 841U)) - (
                        (float)((unsigned long long)p | p_11) / (v_23 * (float)v_25 + 51.f) - (float)(
                        (long)(5782211335.47 + (double)p_15) + v_27)));
  v = (float)(((unsigned int)(~ p_15) - (v_17 + (unsigned int)p_9) % (unsigned int)(
                                        (int)(~ v_19) + 337)) & (unsigned int)(- result));
  v_7 = (char)(! ((unsigned long)p_9 / (v_13 + 253UL)));
  result = (double)(((- p / ((unsigned int)(p_4 * v) + 591U)) / (unsigned int)(
                     ((int)((char)(-1319169664.f - (float)v_7)) - 111) + 1021)) * (unsigned int)((int)((char)(
                    - p_9 - (double)p_11))));
  return result;
}


