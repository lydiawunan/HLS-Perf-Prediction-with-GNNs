#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 600108175
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, unsigned long long p_11, long long p_13,
                long long p_15)
{
  unsigned char v_17;
  unsigned char v_9;
  float v_6;
  short v_4;
  unsigned char v;
  signed char result;
  v_17 = (unsigned char)p;
  v_4 = p;
  result = (signed char)p;
  v_9 = (unsigned char)((unsigned long long)(- ((long long)(-2791459L | (long)result) % (
                                                (p_13 - p_15) + 1005LL))) - ~ (
                        (unsigned long long)(433354306 / ((int)v_17 + 649)) * ~ p_11));
  v = (unsigned char)p_13;
  v_6 = (float)((unsigned long long)v_9 & ! (~ p_11));
  result = (signed char)(184 * (((int)v | (int)v_4) >> (((int)((short)v_6) & (int)p) & 31)) | -37);
  return result;
}


