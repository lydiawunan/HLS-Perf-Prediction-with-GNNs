#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 20713482
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, unsigned long long p_4, signed char p_7, float p_11,
          unsigned short p_13)
{
  unsigned short v_15;
  unsigned char v_9;
  int v;
  short result;
  v_15 = (unsigned short)36461;
  v_9 = (unsigned char)p_13;
  v = (int)p_11;
  result = (short)-8535;
  v_15 = (unsigned short)((long)((float)v_15 - p_11) ^ ~ ((p - (long)v) | (long)v_9));
  v = (int)((unsigned long long)((float)((int)p_7 - (int)v_9) / ((49459.f + p_11) + 869.f)) * ! (
            (unsigned long long)p_13 + p_4) - (unsigned long long)(((int)result / (
                                                                    v + 746)) / (
                                                                   (int)v_9 + 834) ^ (
                                                                   -2522697 + 
                                                                   (int)v_15 % -2316)));
  result = (short)v;
  result = (short)(-2.42833298915e+38f / ((float)(p << (~ p_4 & 31ULL)) + 622.f) + (float)(! (
                   906174863U % (unsigned int)((int)(- result) + 69))));
  return result;
}


