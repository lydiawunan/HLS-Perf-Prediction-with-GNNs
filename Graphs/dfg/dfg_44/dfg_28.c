#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1044551088
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long long p, float p_4[3][5][4], long long p_6[2],
                  signed char p_9[4][4][4])
{
  float v_11;
  int v;
  unsigned char result;
  v_11 = (float)p_6[1];
  v = (int)v_11;
  result = (unsigned char)(~ (~ v / ((int)(- (- p_9[0][3][3])) + 301)));
  result = (unsigned char)((unsigned long long)(1047652589U % ((unsigned int)p_4[2][3][3] + 465U)) + 
                           (unsigned long long)(((unsigned long)result - 4294914614UL) - 4160928725UL) * (
                           (unsigned long long)result * (p - (unsigned long long)p_6[0])));
  result = (unsigned char)(! (p / 5244ULL + (unsigned long long)(127 * (int)result)));
  return result;
}


