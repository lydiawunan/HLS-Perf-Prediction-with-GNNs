#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 422913370
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p, unsigned char p_4, int p_6, long long p_15, short p_17)
{
  long v_21;
  unsigned char v_19;
  float v_13;
  int v_11;
  float v_9;
  unsigned short v;
  float result;
  v_21 = (long)p_6;
  v_19 = (unsigned char)104;
  v_13 = (float)p_17;
  v_11 = -236218632;
  v_9 = (float)((long)(1637 & (int)(! (~ p_17))) | ~ ((p * -56L) * ((long)v_19 / (
                                                                    v_21 + 197L))));
  v = (unsigned short)p;
  result = (float)(- ((double)((int)v_9 + v_11) / (-1419203787.46 * (double)v_13 + 828.) + (double)(~ (! p_15))));
  result = (((float)(p & (long)p_4) - (float)p_6 / (result + 95.f)) - (float)(
            ((int)v + (int)v) ^ (int)p_4)) / -60628.f;
  return result;
}


