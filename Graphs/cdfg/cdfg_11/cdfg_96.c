#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 183464262
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p[1][1][5], unsigned short p_5)
{
  int v;
  signed char result;
  v = (int)(- (~ -467146737LL));
  result = (signed char)((long long)(v / (v + 552) + (int)(1.84467440737e+19f + p[0][0][1])) + 
                         798824850LL * (long long)(p[0][0][4] + (float)p_5));
  return result;
}


