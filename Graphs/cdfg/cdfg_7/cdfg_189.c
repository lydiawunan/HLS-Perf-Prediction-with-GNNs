#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 932950579
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p, int p_7, unsigned long p_13, int p_15,
                       unsigned long long p_21)
{
  short v_19;
  signed char v_17;
  long v_11;
  unsigned int v_9;
  unsigned long v_5;
  signed char v;
  unsigned long long result;
  v_17 = (signed char)25;
  v_11 = (long)p_7;
  v_9 = 45573U;
  v_5 = (unsigned long)p;
  v = (signed char)104;
  result = p_21;
  v_19 = (short)-16810;
  while ((unsigned long long)((unsigned long)v + - v_5) * ((unsigned long long)(
                                                           -8375L / (long)(
                                                           p_7 + 886)) & 1024ULL) >= (unsigned long long)(- (
         (unsigned long)(~ v_9) / 12389119UL))) {
    v_11 = (long)((unsigned long)((float)(v_11 - (long)p_15) + (-895.230834961f + (float)p_21)) / (
                  3846441998UL % (p_13 + 810UL) + 709UL));
    result = (unsigned long long)((- p_15 + (int)v * (int)v_17) / ((int)(~ v_19) + 224));
    v = (signed char)(p_13 + 230944903UL);
  }
  while_0_break: ;
  return result;
}


