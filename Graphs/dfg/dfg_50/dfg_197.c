#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 31834063
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(int p, int p_5, unsigned long long p_9, unsigned int p_13,
          short p_15)
{
  unsigned char v_11;
  unsigned short v_7;
  double v;
  float result;
  v_11 = (unsigned char)178;
  v = -6.53587538879e+37;
  result = (float)p_15;
  v_7 = (unsigned short)(! (- (- (376336093LL % ((long long)result + 664LL)))));
  v = (double)((unsigned long long)((int)v_11 + (int)((unsigned char)(- (
                                    703.74005127f * (float)p_13)))) / (
               (((unsigned long long)(v - 53919.) - p_9) - (unsigned long long)p_15) + 870ULL));
  result = (float)(- (- ((double)p * v)) / ((double)(~ ((unsigned long long)(~ p_5) / (
                                                        ((unsigned long long)v_7 - p_9) + 946ULL))) + 606.));
  return result;
}


