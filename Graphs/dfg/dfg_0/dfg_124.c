//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 254765312
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p, int p_9[5][4][5], float p_11)
{
  char v_7;
  char v_5;
  char v;
  unsigned long long result;
  result = 18446744073709497338ULL;
  v_5 = (char)66;
  v_7 = (char)(- (- (- ((float)v_5 - p_11))));
  v = (char)(((unsigned long long)(! p) % ((~ result >> ((int)(- v_5) & 63)) + 509ULL)) % (unsigned long long)(
             ((int)v_7 + p_9[4][1][0]) + 458));
  result = (unsigned long long)v;
  return result;
}


