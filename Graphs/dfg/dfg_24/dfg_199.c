#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 970277523
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p[3][3], unsigned short p_4)
{
  short v_7;
  int v;
  double result;
  v_7 = (short)-27951;
  result = (double)(59919 - ((int)(~ v_7) + 1));
  v = 45340;
  v %= (int)result + 622;
  result = (double)((((-115 ^ (int)p[2][2]) ^ (int)(~ p[2][0])) - ~ (
                     (int)p_4 % (v + 675))) ^ v);
  return result;
}


