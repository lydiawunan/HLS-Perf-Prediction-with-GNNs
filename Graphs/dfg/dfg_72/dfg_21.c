#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 699614675
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p, unsigned long p_7[2][3], unsigned long p_9,
        int p_11, int p_13[5][2])
{
  unsigned char v_15;
  int v_5;
  float v;
  int result;
  v = 4198003456.f;
  result = (int)p_7[0][0];
  v_15 = (unsigned char)(- (p_9 >> ((unsigned long)result % (p_9 + 962UL) & 31UL)));
  v_5 = (int)v_15;
  result = (int)((long long)(v * (float)((unsigned long)v_5 - - p_7[0][0])) + 
                 ((long long)(p_9 + 4294962410UL) * ((long long)p_11 % 43559LL)) * (long long)(
                 - p_13[2][0] - p_13[0][0]));
  result = (int)(~ ((unsigned long long)result % (! (~ p) + 925ULL)));
  return result;
}


