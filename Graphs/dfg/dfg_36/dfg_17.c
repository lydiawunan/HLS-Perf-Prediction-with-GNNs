#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 87624414
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p)
{
  float v_17;
  unsigned long v_15;
  unsigned char v_13;
  unsigned long long v_11;
  unsigned char v_8;
  float v_6;
  long long v_4;
  unsigned char v;
  unsigned char result;
  v_17 = (float)p;
  v_15 = 50012UL;
  v_13 = (unsigned char)p;
  v_11 = 48465ULL;
  v_6 = -4503068672.f;
  v_8 = (unsigned char)((- v_11 | (unsigned long long)(- p / ((double)(
                                                              v_15 / (
                                                              (unsigned long)v_17 + 273UL)) + 54.))) + (unsigned long long)p);
  v_4 = (long long)((unsigned long long)((long)(! ((int)((signed char)p) % 97)) - -5851L) % (
                    (! v_11 + (unsigned long long)(- p)) * (unsigned long long)(- (
                    (int)v_13 - (int)((unsigned char)p))) + 836ULL));
  v = (unsigned char)(- ((((float)v_4 + v_6) - 0.f) - (float)v_8));
  result = v;
  return result;
}


