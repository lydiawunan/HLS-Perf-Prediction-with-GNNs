#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 695249580
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p[4][5][2], unsigned char p_5,
                  unsigned long long p_9[4][1], float p_11,
                  unsigned int p_15[5][2][2])
{
  unsigned short v_23;
  unsigned short v_21;
  float v_19;
  long v_17;
  short v_13;
  int v_7;
  char v;
  unsigned char result;
  v_23 = (unsigned short)23698;
  v_21 = (unsigned short)p_15[0][1][0];
  v_19 = (float)p[3][3][0];
  v_7 = (int)p[3][0][1];
  v_17 = (long)((~ (p_9[0][0] / ((unsigned long long)v_19 + 74ULL)) - (unsigned long long)(
                 (int)v_21 * (int)(~ v_23))) / 412ULL);
  v_13 = (short)((float)((unsigned long)v_17 | (unsigned long)((unsigned int)(- p_11) * p_15[0][0][0])) / (
                 - (1.862103484e+38f / ((float)(! p[2][0][0]) + 372.f)) + 911.f));
  v = (char)(((int)((short)((float)((unsigned long long)v_7 / (p_9[2][0] + 932ULL)) + 
                            (float)p[1][1][0] * p_11)) & (int)v_13) >> (
             ((unsigned int)(-21030 >> (- v_7 & 15)) - p_15[2][0][0]) & 31U));
  result = (unsigned char)(! (- ((int)v + (int)p[0][1][0]) | (int)p_5));
  return result;
}


