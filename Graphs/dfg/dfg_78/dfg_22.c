#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 760456702
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, unsigned int p_13[4][2][5])
{
  long v_19;
  unsigned int v_17;
  double v_15;
  char v_11;
  unsigned long v_8;
  signed char v_6;
  unsigned long long v_4;
  unsigned long v;
  char result;
  v_19 = (long)p;
  v_17 = (unsigned int)p;
  v_11 = (char)p;
  v_8 = 230949705UL;
  v_4 = 18446744073709549458ULL;
  v = 4062511583UL;
  result = (char)96;
  v_15 = (double)((unsigned long)(- ((unsigned int)p ^ ((unsigned int)p - p_13[1][1][4]))) % (
                  ~ (! (4294951869UL * v_8)) + 49UL));
  v_8 = (unsigned long)((float)((unsigned long)(! v_11) % (((unsigned long)v_17 ^ 11715UL) + 322UL)) / -2565858048.f) % (
        ((unsigned long)(((int)p / ((int)p + 993)) * (int)p) + (v_8 + v) % (unsigned long)(
                                                               -959634813L % (
                                                               v_19 + 934L) + 773L)) + 943UL);
  v_6 = (signed char)((unsigned long long)(- v_8 % (unsigned long)((int)p + 986)) / (
                      ! v_4 / (unsigned long long)(((unsigned int)v_11 + p_13[1][0][2]) + 707U) + 804ULL) & (unsigned long long)(- (
                      v_15 / ((double)((long long)p_13[1][1][4] + 486947588LL) + 693.))));
  result = (char)((unsigned long long)(- ((long long)result ^ -48391LL) << (
                                       v & 63UL)) * ((! v_4 * (4294922616ULL * v_4)) / (unsigned long long)(
                                                     ((long)(! v_6) & 748036744L) + 211L)));
  return result;
}


