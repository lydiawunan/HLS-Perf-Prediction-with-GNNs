#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 560402317
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, short p_5, signed char p_7, char p_13[2][5],
                   long p_17)
{
  int v_19;
  float v_15;
  short v_11;
  double v_9;
  unsigned short v;
  unsigned short result;
  v_19 = (int)p_17;
  v_15 = -562.167358398f;
  v_9 = (double)p_7;
  if ((18446744072238915376ULL - (unsigned long long)(p_17 + (long)p_13[1][2])) / 15665ULL <= (unsigned long long)(
      (unsigned long)p_17 + (unsigned long)((unsigned int)((int)p / (
                                                           (int)p_7 + 542)) * (
                                            (unsigned int)v_19 / 21978U)))) 
    v = (unsigned short)63346;
  else {
    v_11 = (short)((unsigned long)((3540938396U - (unsigned int)p_7) / (
                                   (unsigned int)(462042643. / (v_9 + 38.)) + 1010U)) & 
                   (unsigned long)(-5820 * (int)((short)4158882048.f)) * (
                   (unsigned long)p_5 % 3406117314UL));
    v_9 = (double)(((4294925373U & (unsigned int)v_9) - 3848674164U % (unsigned int)(
                                                        (int)v_11 + 392)) >> (
                   (unsigned int)(((float)p_13[1][2] / (v_15 + 358.f)) / -207317504.f) & 31U));
    v = (unsigned short)(-35L + ((long)(- v_9) + 522756450L));
  }
  result = (unsigned short)(~ (((int)v / ((int)p + 853)) / (((int)p_5 - (int)p_7) + 87)));
  return result;
}


