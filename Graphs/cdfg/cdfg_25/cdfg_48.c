#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 293822780
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p, long long p_9, double p_11[3][4], float p_13[4],
                  float p_15)
{
  unsigned int v_27;
  short v_25;
  long v_23;
  int v_21;
  int v_19;
  char v_17;
  long v_6;
  unsigned long long v_4;
  unsigned char v;
  unsigned char result;
  v_27 = 779297105U;
  v_25 = (short)p_13[2];
  v_23 = (long)p_9;
  v_21 = (int)p_9;
  v_19 = 27286;
  v_17 = (char)p_15;
  v_4 = 18446744072905620924ULL;
  while ((unsigned long)v_19 % ((4294922954UL - (unsigned long)p_15) + 350UL) + (unsigned long)v_21 >= (unsigned long)(
         ((long)p_15 % (p + 730L) - - p) - (long)(- p_13[3] + 5685011456.f))) {
    v_23 ^= 61928L;
    v_21 = -747195931;
    v_19 = (int)((p_11[1][3] - (double)((float)v_21 - p_15)) + (double)(
                 (float)((unsigned int)v_25 / (v_27 + 351U)) + (float)v_25 * p_15));
    v_21 = (int)((unsigned long long)(~ p_9) % ((((unsigned long long)p_15 - v_4) - 554695672ULL) + 229ULL));
  }
  while_0_break: ;
  if ((int)((char)(((double)(! p_9) * (p_11[0][3] - (double)p_13[1])) * (double)(
                   4294927104.f - (p_15 + 3026.f)))) >= (int)v_17) {
    v = (unsigned char)183;
    result = (unsigned char)((int)(- (~ v)) ^ (int)v);
  }
  else {
    v_6 = (long)((double)p / 1343.80309056);
    v_4 = (unsigned long long)v_6;
    result = (unsigned char)(13412ULL + ~ (134ULL ^ v_4));
  }
  return result;
}


