#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 131858905
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, unsigned long long p_5[2][4][3], unsigned char p_7)
{
  int v_17;
  int v_15;
  signed char v_13;
  long long v_11;
  unsigned short v_9;
  int v;
  char result;
  v_17 = (int)p;
  v_13 = (signed char)p;
  v_11 = 557310975LL;
  result = (char)-11;
  v_9 = (unsigned short)(- (478349584 / ((int)(~ result) + 473)));
  v_15 = ~ (- v_17);
  v = (int)(~ (! (v_11 % 428290232LL)) % (long long)(! v_15 + 17));
  result = (char)((unsigned long long)(- p / ((float)((unsigned int)v % 296862874U) + 280.f)) / (
                  (unsigned long long)(633.85786236 * (double)p) * p_5[1][0][1] + 30ULL) & (unsigned long long)(
                  (long long)((int)p_7 + (int)v_9) * (v_11 / 93LL) + (long long)(
                  10 + (int)v_13)));
  return result;
}


