#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 190585432
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p[1], unsigned long long p_7[2][5][3],
                unsigned short p_9)
{
  double v_5;
  char v;
  signed char result;
  v = (char)(~ (! (- p_7[0][2][1] * (unsigned long long)(~ p_9))));
  v_5 = (double)(- p[0]);
  result = (signed char)(((long long)(((int)v + (int)((char)p[0])) >> (
                                      (int)p[0] & 31)) | (-27851766LL - (long long)(- v_5))) * -288621426LL);
  return result;
}


