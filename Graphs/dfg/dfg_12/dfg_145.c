#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 556885236
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, short p_4[3][2], unsigned char p_9, unsigned short p_13,
          double p_15[3][1])
{
  long long v_11;
  unsigned char v_7;
  long v;
  short result;
  v_11 = (long long)p;
  v = (long)p_13;
  v_7 = (unsigned char)(((long long)(! (~ p_13)) + v_11) >> ((int)p_4[2][0] & 63));
  v_11 = (long long)((p_15[2][0] * (double)p + (double)(- ((long)p_9 * v))) + (
                     (double)((p - (float)v) * (float)p_4[0][1]) + - p_15[0][0]));
  v = (long)((long long)(v % 60398L - (long)((int)v_7 - (int)p_9)) % (
             (v_11 / -492156047LL - (long long)v) + 190LL) - (long long)(! p_13));
  result = (short)(~ (4294903175UL - (unsigned long)(p / ((float)p_4[2][0] + 628.f) - (float)v)));
  return result;
}


