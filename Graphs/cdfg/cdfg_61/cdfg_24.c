#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 858340167
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, unsigned long p_5, unsigned long long p_11,
                  unsigned int p_15, short p_17)
{
  unsigned long v_19;
  float v_13;
  signed char v_9;
  double v_7;
  unsigned int v;
  unsigned char result;
  v_19 = (unsigned long)p;
  v = 4294905467U;
  v_7 = (double)((unsigned long)-5063233536.f & ~ (36UL * p_5));
  if (-466593840LL > (long long)((float)((v_19 * (unsigned long)p_17) / (
                                         ~ p_5 + 563UL)) - (p - (float)v) / (
                                                           (float)(p_11 / 44240ULL) + 544.f))) {
    v = (unsigned int)(- (0UL % (- p_5 + 334UL)));
    result = (unsigned char)((float)(! ((unsigned long)v % 60662UL)) + p);
  }
  else {
    v_13 = (float)(! ((580797174ULL & p_11) * 7806ULL));
    v_9 = (signed char)(p_11 * (unsigned long long)(p_15 - (unsigned int)(! p_17)));
    result = (unsigned char)(((unsigned long long)((int)((signed char)v_7) + (int)v_9) - ~ p_11) * (unsigned long long)(- (
                             69.f / (v_13 + 13.f))));
  }
  return result;
}


