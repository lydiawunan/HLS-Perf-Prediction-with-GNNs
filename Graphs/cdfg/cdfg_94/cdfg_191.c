#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 928353490
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, long long p_4, int p_6[1][5][2],
                signed char p_8[4][3], long long p_11)
{
  signed char v_17;
  long v_15;
  float v_13;
  signed char v;
  signed char result;
  v_15 = 9647L;
  v_13 = (float)p;
  v = (signed char)p;
  while ((float)(~ (p_11 + (long long)p)) + - v_13 <= 50918.f) {
    v_17 = v_15 - 64877L;
    result = (signed char)-22;
    v = (signed char)(- ((int)result ^ (int)v) * ~ ((int)v % ((int)v + 336)));
    v_13 = (float)((double)((int)result + -7) * -517.267493019 - (double)(- (! v_17)));
  }
  while_0_break: ;
  if ((int)p_8[3][2] < (int)(~ v)) result = (signed char)(! (! (- p)));
  else result = (signed char)(~ (p_4 / (long long)(p_6[0][0][0] + 332) | -89LL));
  return result;
}


