#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 235846049
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, unsigned short p_4, long long p_7,
                  unsigned char p_9, unsigned short p_11[4][1])
{
  long long v_15;
  unsigned int v_13;
  short v;
  unsigned char result;
  v_15 = -46676LL;
  v = (short)p_4;
  result = (unsigned char)106;
  v_13 = (unsigned int)((long long)(((int)v ^ 562) % ((int)((unsigned short)p) * (int)p_11[1][0] + 415)) % (
                        ((long long)p & (long long)result / (v_15 + 857LL)) + 205LL) + (long long)p_11[1][0]);
  v = (short)((unsigned int)p_4 % (v_13 + 723U));
  result = (unsigned char)((long long)(~ (1491 * (int)(~ v))) / ((((p_7 - 4161719479LL) - (long long)p_9) - (long long)p_11[3][0]) + 495LL));
  result = (unsigned char)((int)p - ((33 % ((int)p_4 + 414)) * (int)(- result)) % 625);
  return result;
}


