#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 368503965
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, short p_9, signed char p_11, float p_13,
                float p_15)
{
  float v_17;
  char v_7;
  double v_5;
  int v;
  signed char result;
  v_17 = p_13;
  result = (signed char)p;
  v_7 = (char)(((long long)(((float)p_11 / (p_13 + 946.f)) * - p_15) % (
                p + 34LL)) * (long long)v_17);
  v = (int)((unsigned long long)((double)(p % (long long)((int)p_9 + 757)) / 459996464.932) - (
            (unsigned long long)((int)(- result) | -12614) - - ((unsigned long long)p * 50599ULL)));
  v_5 = (double)v_7;
  result = (signed char)((long long)(! v) % (((long long)v % (p * (long long)v_5 + 718LL)) % 3665760400LL + 484LL));
  return result;
}


