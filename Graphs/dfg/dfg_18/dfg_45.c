#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 629440177
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, char p_9, unsigned int p_15,
                  unsigned long long p_19, double p_21)
{
  short v_23;
  float v_17;
  short v_13;
  unsigned char v_11;
  double v_7;
  short v_4;
  double v;
  unsigned long result;
  v_23 = (short)p_15;
  v_13 = (short)p_15;
  v_11 = (unsigned char)78;
  v_7 = (double)p_15;
  v = (double)p_15;
  v_7 = (double)((p_19 / ((unsigned long long)p_21 + 890ULL) + (unsigned long long)(
                  (int)v_23 % 38489)) + (unsigned long long)v_23) * (
        (double)(- p_19 * (unsigned long long)(~ p_15)) - v_7);
  v_17 = (float)(~ ((unsigned long)(! (~ p_15)) / (unsigned long)(! p + 996L)));
  v_4 = (short)(((long long)(((int)((char)v_7) - (int)p_9) - (int)(~ v_11)) + 
                 (long long)((int)v_11 % ((int)v_13 + 863)) / 7288LL) / (long long)(
                (! (p_15 % ((unsigned int)v_17 + 172U)) & 62387U) + 170U));
  result = (unsigned long)((-82LL % ((long long)v + 146LL) + (long long)(- (
                            734.080383301f + (float)v_4))) % (long long)(
                           p + 752L));
  return result;
}


