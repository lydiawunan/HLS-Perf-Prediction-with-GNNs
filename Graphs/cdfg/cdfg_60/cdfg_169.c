#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 908892201
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p[5], float p_4[4][4], char p_6, unsigned long p_8,
         long long p_10)
{
  long long v_17;
  unsigned char v_15;
  unsigned int v_13;
  unsigned char v;
  char result;
  v_17 = -36526LL;
  v_15 = (unsigned char)p_10;
  v_13 = (unsigned int)p[3];
  result = (char)p_8;
  v = (unsigned char)((long long)result + ! ((long long)v_15 * v_17));
  if (- (~ p_10) != (long long)((unsigned int)(- (p_4[1][0] + (float)v)) * v_13)) {
    result = (char)p_4[2][0];
    result = (char)(~ ((int)(- result) / (-29511 * (int)p[0] + 312)));
  }
  else result = (char)(- ((int)p_4[3][0] & -1199));
  return result;
}


