#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 331780560
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p[1][1], char p_7[4], unsigned long p_17[2][2][4])
{
  unsigned char v_15;
  long v_13;
  char v_11;
  int v_9;
  unsigned short v_5;
  unsigned int v;
  float result;
  v_15 = (unsigned char)47;
  v_13 = (long)p_7[1];
  v_11 = (char)-30;
  v_9 = (int)p_7[2];
  v_5 = (unsigned short)p_7[3];
  v = 53540U;
  result = (float)p_17[1][1][0];
  if (- ((9356LL << (p[0][0] & 63LL)) - (long long)(p_17[0][0][1] % 4294941938UL)) != 
      (long long)((int)v_15 * (int)p_7[1] << (~ p[0][0] & 31LL)) * ! p[0][0]) {
    v_11 = (char)(- ((unsigned int)(-112 - (int)v_5) + 4272866752U));
    v = (unsigned int)p_17[0][0][2];
    v_5 = (unsigned short)(- ((p[0][0] + (long long)v_15) + (long long)(
                              (int)p_7[0] - v_9)));
  }
  else {
    v_15 = (unsigned char)(! ((p_17[1][0][0] - 225419241UL) % 243UL));
    result = (float)((int)v_15 | ((int)(- result) + (int)p_7[2] * 20));
    v_15 = (unsigned char)(111 % ((int)v_11 / ((int)(- p_7[3]) + 943) + 898));
  }
  while (3414325118LL / ((long long)v / (p[0][0] + 339LL) + 136LL) + (long long)v_5 > (long long)p_7[0]) {
    v_5 = (unsigned short)((long long)(! v_9 % 35614) - (((long long)v_13 - p[0][0]) | (long long)(
                                                         (int)v_15 % (
                                                         (int)v_11 + 37))));
    v_11 = (char)p[0][0];
    v = 4294967248U;
  }
  while_0_break: ;
  return result;
}


