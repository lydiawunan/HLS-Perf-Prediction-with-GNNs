#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 510577643
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p[4][5])
{
  double v_9;
  char v_7;
  signed char v_5;
  long long v;
  unsigned int result;
  v_9 = (double)p[1][3];
  v_7 = (char)108;
  result = 4294946987U;
  v_9 = (double)(~ ((result - result) - ! result) * (unsigned int)(- (- (
                 v_9 + (double)p[1][4]))));
  v_5 = (signed char)(3835. - (v_9 - (double)p[1][4]));
  v = (long long)((double)v_7 / 1119.12062285);
  result = (unsigned int)(((long long)(550911943L * (long)p[1][3] & 295L) + v) - (long long)v_5);
  return result;
}


