#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 258404206
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, double p_5, float p_9, char p_13)
{
  unsigned char v_15;
  long v_11;
  unsigned int v_7;
  double v;
  signed char result;
  v_15 = (unsigned char)223;
  v_11 = 702991354L;
  v = (double)(((-349615710L - -7984L % (v_11 + 809L)) - -61345L) | v_11);
  v_7 = (unsigned int)(((p_9 / 693.f) / ((float)(! v_11) + 122.f) + (float)p_13) * (float)v_15);
  v = ((908. / (p_5 + 850.) + (double)(- v_7)) + v) * 1.84467440695e+19;
  result = (signed char)(- (v + ((double)(p - 1534LL) + (-92. - v))));
  return result;
}


