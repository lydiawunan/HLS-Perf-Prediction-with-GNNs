#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 717558790
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p, unsigned char p_11, unsigned char p_13[4],
          float p_15)
{
  unsigned long v_17;
  unsigned long long v_9;
  unsigned int v_7;
  unsigned long v_4;
  short v;
  float result;
  v_17 = (unsigned long)p;
  v_9 = (unsigned long long)p_13[1];
  v_7 = (unsigned int)p_11;
  v_4 = (unsigned long)(~ ((int)p_13[1] + 129));
  v = (short)(- (! (v_9 * (unsigned long long)v_17 - (unsigned long long)(- v_7))));
  v_4 = ~ (v_17 % (unsigned long)(((int)p_11 >> ((int)v & 7)) + 817)) + (
        (unsigned long)p_11 - - v_4 % 3275085594UL);
  result = (float)((unsigned long long)((int)v << (! (0UL / (v_4 + 160UL)) & 15UL)) | (
                   ((unsigned long long)((unsigned int)p % (v_7 + 18U)) - v_9) << (
                   ((int)p_11 + (int)((unsigned char)((float)p_13[0] - p_15))) & 63)));
  return result;
}


