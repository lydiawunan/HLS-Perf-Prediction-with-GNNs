#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 752880613
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p, char p_4, short p_7[2][2], char p_11,
              short p_13)
{
  int v_9;
  float v;
  long long result;
  v_9 = (int)p;
  v = (float)p_7[1][0];
  v = (float)(- ((int)((unsigned char)v) / 250 - (int)p_13));
  if ((int)p_4 / ((int)((char)((v + (float)p_7[1][0]) + (float)(-22868L - (long)v_9))) + 1019) <= (int)p_11) 
    result = 687788078LL;
  else result = 0LL;
  return result;
}


