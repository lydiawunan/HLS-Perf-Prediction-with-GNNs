#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 201422480
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p, char p_9[4][3][5], float p_11, int p_13[3][5])
{
  int v_15;
  unsigned long long v_7;
  unsigned long v_5;
  long long v;
  float result;
  v_15 = 614423190;
  v_5 = (unsigned long)p;
  v_7 = 112ULL;
  v = (long long)((int)(1.84467440737e+19f + p_11 / ((float)(126 - p_13[0][4]) + 659.f)) % (
                  v_15 + 806));
  v = (long long)(- ((unsigned long long)v * v_7) * (unsigned long long)(
                  3313923575U % (unsigned int)(((int)p_9[1][2][4] / (
                                                (int)p_9[1][1][1] + 250)) % -11452 + 521)));
  result = (float)(~ ((v * (long long)((int)p - (int)p)) / (long long)(
                      ((unsigned long)p | v_5 * (unsigned long)p) + 189UL)));
  return result;
}


