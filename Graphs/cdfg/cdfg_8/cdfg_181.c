#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 361180844
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p, unsigned long p_13, unsigned int p_17)
{
  double v_19;
  signed char v_15;
  int v_10;
  long long v_8;
  unsigned int v_6;
  float v_4;
  int v;
  char result;
  v_19 = (double)p_17;
  v_15 = (signed char)83;
  v_10 = -63326;
  v_8 = -14077LL;
  v_6 = p_17;
  v_4 = (float)p_17;
  v = (int)p_17;
  if ((unsigned long)((int)p >> (- (~ p_13) & 7UL)) > p_13 / (unsigned long)(
                                                      ~ (p_17 | (unsigned int)v_15) + 950U)) {
    v_15 = (signed char)(~ (! (36202UL * p_13)));
    v_4 = (float)((unsigned int)v_15 | v_6 % (unsigned int)(138 * (int)p + 10));
    result = (char)v_4;
  }
  else {
    result = (char)((18446744073688912709ULL * (unsigned long long)p_17 - (unsigned long long)(
                     v / ((int)p + 190))) + (unsigned long long)(- v_19 * -118191972.));
    v_8 = (long long)((unsigned long)(~ (~ p)) ^ p_13);
    v_6 = (unsigned int)p;
  }
  while (v > (int)(- ((126.f - v_4) / ((float)(- v) + 16.f)))) {
    v_8 = (unsigned long long)v_10 & (unsigned long long)v_8 * ((unsigned long long)v_6 * 59096ULL);
    v_6 = (unsigned int)p_13;
    v_10 = ! (- ((int)p + (int)result));
    v = (int)((unsigned long long)(((int)p / (v_10 + 965)) / 24896) - 
              (unsigned long long)(p_13 % (unsigned long)((int)p + 717)) % (
              ((unsigned long long)v_10 - 18446744073709528175ULL) + 752ULL));
  }
  while_0_break: ;
  return result;
}


