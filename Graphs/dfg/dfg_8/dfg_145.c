//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 594189884
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p, float p_7[4][3])
{
  unsigned char v_4;
  char v;
  long long result;
  v = (char)p;
  v_4 = (unsigned char)122;
  v = (char)(p * ((- p + (double)((float)v / (p_7[1][1] + 506.f))) - 2163063040.));
  result = (long long)(~ ((int)(~ (! v)) + (int)((char)((double)(~ v_4) * (
                                                        p + p)))));
  result = result;
  return result;
}


