#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 127323995
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(signed char p, unsigned int p_5, short p_7[1][3], long long p_15,
        short p_17)
{
  float v_21;
  unsigned long long v_19;
  unsigned long v_13;
  long long v_11;
  float v_9;
  char v;
  int result;
  v_21 = 143095488.f;
  v_19 = (unsigned long long)p_7[0][0];
  v_13 = 11028UL;
  v = (char)p_15;
  v_9 = (float)(- (47113LL - (long long)(- v_21)) | (long long)(~ ((unsigned int)(
                                                                   v_21 * (float)p_5) % (
                                                                   (249364958U + (unsigned int)v) + 474U))));
  v_11 = (long long)(- ((float)(4058400324ULL * ((unsigned long long)-2.83696806878e+38 / (
                                                 v_19 + 668ULL))) / (
                        (((float)p - -2.69901188652e+38f) + 11.f) + 153.f)));
  v = (char)(~ (((v_11 / (long long)(v_13 + 51UL)) % ((p_15 ^ (long long)p) + 987LL)) % (
                (~ p_15 - (long long)((int)p_17 << ((int)p_7[0][1] & 15))) + 401LL)));
  result = (int)((241U + ((unsigned int)(- p) - (unsigned int)v % (p_5 + 644U))) + (unsigned int)(- (
                 ((int)p_7[0][1] - (int)((short)v_9)) / -19635)));
  return result;
}


