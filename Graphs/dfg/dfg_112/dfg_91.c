#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 893875284
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, char p_7, long long p_11, int p_13,
                double p_17)
{
  short v_15;
  long v_9;
  short v_5;
  float v;
  signed char result;
  v_15 = (short)p_11;
  v_9 = (long)v_15;
  v_5 = (short)(- ((double)p_13 / (- ((double)v_15 / (p_17 + 326.)) + 439.)));
  v = (float)((unsigned long long)((46722 * (int)p_7) / ((int)-5549133312.f + 380)) * (
              (unsigned long long)((long)p_7 & v_9) / ((p + (unsigned long long)p_11) + 1014ULL)));
  result = (signed char)(- (- ((float)(33334U + (unsigned int)v) - -359.155426025f)));
  return result;
}


