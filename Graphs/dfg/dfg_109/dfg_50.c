#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 576672324
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p)
{
  double v_13;
  unsigned char v_11;
  unsigned short v_9;
  long v_6;
  float v_4;
  unsigned long long v;
  int result;
  v_13 = (double)p;
  v_4 = 584.789367676f;
  v = 4660ULL;
  v_11 = (unsigned char)((v_13 * (double)p + (double)(10562LL * ((long long)p - -603662760LL))) + 1.84467440737e+19);
  v_9 = (unsigned short)p;
  v_6 = (long)((int)v_9 % ((int)v_11 + 913) - (int)v_11);
  result = (int)((-52903.9104902 + (double)(- ((float)v - v_4))) * (- (
                                                                    6005568279.74 / (
                                                                    (double)v_6 + 106.)) * (double)(~ (
                                                                    (int)p * 53267))));
  return result;
}


