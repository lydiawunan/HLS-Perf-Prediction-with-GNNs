#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 251899972
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p[2][2][5], char p_4, long p_7, unsigned short p_9[4][1][1],
         unsigned char p_11)
{
  float v_19;
  short v_17;
  unsigned long long v_15;
  char v_13;
  unsigned char v;
  char result;
  v_19 = (float)p_4;
  v_17 = (short)-20936;
  v_15 = 41321ULL;
  v_13 = (char)31;
  v = (unsigned char)p_9[1][0][0];
  result = (char)(- ((double)((unsigned int)v_17 * 4294914089U) - (50.0875811714 + (double)v_17)) + (double)(- (
                  (long)v_19 * p_7)));
  v = (unsigned char)0;
  v = (unsigned char)((int)p[1][0][4] % ((int)p_9[3][0][0] + 814) | ! (
                      220 % ((int)v % ((int)v_13 + 720) + 37)));
  result = (char)((unsigned long long)((int)(! p[1][1][4]) + ((int)p_4 + (int)v)) / (
                  (unsigned long long)((long)p[1][1][0] % (p_7 + 214L)) % 168579104ULL + 543ULL) ^ (unsigned long long)(~ (
                  ((int)p_9[3][0][0] + (int)p_11) / ((int)result + 199))));
  return result;
}


