#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 32595776
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, double p_11, float p_13, long p_15)
{
  char v_19;
  long long v_17;
  double v_9;
  unsigned int v_7;
  unsigned long v_5;
  int v;
  long result;
  v_19 = (char)p_13;
  v_17 = 37462LL;
  v_9 = 617.887692493;
  v_5 = 161434431UL;
  v = -46924;
  result = (long)p_13;
  v_19 = (char)(((89574149LL - (long long)p) / 8183LL) / ((long long)(
                                                          ((double)v_19 - -4148039220.83) - - v_9) + 76LL));
  while ((long)(~ ((int)((short)((double)result * -5909449268.97)) % (
                   (int)p + 737))) != -451747126L) {
    v = v_5 & (unsigned long)(v - 56079);
    v_9 = (double)(~ ((v_17 - -60792LL) | (long long)(~ v_19)));
    v_7 = (unsigned int)(229L * ((p_15 & p_15) * result));
    result = (long)((double)(v_7 * 43676U - v_7) * ((v_9 - p_11) * (double)(
                                                    p_13 * -60496.f)));
  }
  while_0_break: ;
  return result;
}


