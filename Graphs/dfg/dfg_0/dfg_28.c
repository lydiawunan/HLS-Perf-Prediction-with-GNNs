//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 261290120
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, int p_7, unsigned char p_9, int p_11,
                 unsigned long long p_13[1][4][5])
{
  float v_17;
  int v_15;
  char v_4;
  float v;
  unsigned int result;
  v_17 = (float)p_9;
  v_15 = (int)(- (- (- v_17)));
  v = (float)((unsigned long long)(~ p_11 >> (- (- v_15) & 31)));
  v_4 = (char)p_13[0][3][2];
  result = (unsigned int)(v * (float)(136534298LL + (long long)((int)v_4 - (int)p)) - (float)(
                          (int)(- (- v)) / (p_7 / (((int)p_9 - p_11) + 267) + 888)));
  return result;
}


