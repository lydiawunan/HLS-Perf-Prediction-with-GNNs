#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 501691063
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p[1][4], unsigned long long p_7[1], short p_9)
{
  double v_5;
  long v;
  char result;
  v = (long)p_7[0];
  v_5 = (double)(! ((18446744073709510520ULL - (p_7[0] - 4294921611ULL)) / (unsigned long long)(
                    (int)p_9 + 778)));
  result = (char)(4294921954UL ^ ! ((unsigned long)(v * -69L) % ((624494181UL ^ (unsigned long)v_5) + 115UL)));
  result = ~ result;
  result = (char)((-19844 * (0 % (120 / ((int)((char)p[0][2]) + 962) + 225))) % (
                  (int)result + 383));
  return result;
}


