//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 948514338
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p, unsigned long long p_9)
{
  int v_7;
  float v_4;
  unsigned long long v;
  unsigned int result;
  v_7 = (int)p_9;
  result = (unsigned int)p_9;
  v_4 = (float)(unsigned char)67;
  v = 29538ULL * (((p - p_9) | (unsigned long long)(47124205U / (result + 441U))) - (
                  p % 18446744072749944400ULL + 79661601ULL));
  result = (unsigned int)(~ (((unsigned long long)result + p) >> (result & 63U)) | (unsigned long long)(! (- (
                          5 << (v_7 & 7)))));
  result = (unsigned int)(((unsigned long long)(result >> (v & 31ULL)) % 18446744073497545724ULL ^ (unsigned long long)v_4) + - (! (
                          p + v)));
  return result;
}


