#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 292680740
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(int p[2], int p_5, short p_7, long long p_17)
{
  char v_15;
  signed char v_13;
  long long v_11;
  unsigned long long v_9;
  char v;
  float result;
  v_15 = (char)-2;
  v_13 = (signed char)59;
  v_9 = (unsigned long long)p_7;
  v = (char)p_17;
  result = -419.627105713f;
  v_11 = (long long)(! (~ (~ v)));
  while (3517377247ULL != ((unsigned long long)(29 - ! p[1]) | ((unsigned long long)(
                                                                (int)v - p_5) & 
                                                                (unsigned long long)p_7 % (
                                                                v_9 + 250ULL)))) {
    result = (int)v_15 / ((int)v_13 * 122 + 808);
    v_13 = (signed char)(! (! p_17 << (p_17 * 4294963331LL & 63LL)));
    v_15 = (char)((long long)p_7 * v_11);
    v_9 = 105ULL;
  }
  while_0_break: ;
  return result;
}


