#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 268559420
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, long long p_4, char p_6, int p_8, long p_10)
{
  long v_13;
  unsigned char v;
  long long result;
  v_13 = -824139840L;
  v = (unsigned char)74;
  if ((unsigned long)((long)v % (p_10 + 216L) >> ((p - (long)v) & 31L)) * (
      72UL - 4294918943UL * (unsigned long)v_13) > (unsigned long)((80L + - p) / (
                                                                   p_10 + 323L))) {
    result = (long long)(- (- -2547570.f));
    result = ! (result | 116LL) >> ((long long)((double)(-4 - (int)((char)2.29289896089e+38)) / 6263789284.54) & 63LL);
  }
  else result = (long long)p;
  return result;
}


