#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 503262416
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, int p_5, long long p_9, short p_17, int p_19)
{
  char v_27;
  char v_25;
  unsigned int v_23;
  int v_21;
  unsigned short v_15;
  long long v_13;
  double v_11;
  float v_7;
  double v;
  long result;
  v_27 = (char)-125;
  v_25 = (char)p_17;
  v_23 = (unsigned int)p_17;
  v_21 = p_19;
  v_15 = (unsigned short)3328;
  v_13 = 28558LL;
  v_11 = (double)p_9;
  v_7 = -874.510742188f;
  v = -2.1225159889e+38;
  result = -447911058L;
  while (-1062947758LL <= (long long)(! ((unsigned int)(-22173 % (v_21 + 368)) * v_23))) {
    v = (int)v_27 >> (((unsigned long long)v_25 + 53868ULL) & 7ULL);
    v_13 = p_9;
    v_23 = (unsigned int)(((unsigned long long)(-18335 % (p_19 + 190)) + 
                           p / (p + 497ULL)) * (unsigned long long)(! (
                          result / 1008816831L)));
    v_21 = (int)p_17;
  }
  while_0_break: ;
  while ((unsigned long long)v <= (p | 685064114ULL) * (unsigned long long)(
                                  (result - (long)p_5) / ((long)(v_7 / (
                                                                 (float)p_9 + 140.f)) + 82L))) {
    v_23 = v_13 % ((long long)(v_11 + 26733.) + 119LL);
    result = (long)((unsigned long)(! v_21 | (int)v_15 % (p_5 + 155)) * (
                    (unsigned long)v_23 / (unsigned long)(- result + 163L)));
    v_7 = (float)((int)(~ v_15) + ! ((int)p_17 - p_19));
    v = (double)((unsigned long long)(p_9 % 218LL) + ! (p - (unsigned long long)-5076067328.f));
  }
  while_0_break_0: ;
  return result;
}


