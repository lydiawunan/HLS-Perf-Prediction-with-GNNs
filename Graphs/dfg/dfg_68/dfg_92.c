#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 290208612
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, unsigned long p_13)
{
  char v_17;
  short v_15;
  float v_10;
  unsigned long v_8;
  double v_6;
  unsigned long v_4;
  unsigned short v;
  unsigned int result;
  v_17 = (char)-15;
  v_15 = (short)21215;
  v_10 = 2899518464.f;
  v_6 = (double)p_13;
  v_4 = (unsigned long)p;
  v = (unsigned short)19597;
  result = 11947U;
  v_6 = (double)(- ((((long long)result ^ 541734686LL) % ((long long)p_13 / 6675856LL + 888LL)) % (long long)(
                    (int)((char)((double)p_13 - v_6)) % ((int)(! p) + 105) + 353)));
  v_8 = 99UL * ((unsigned long)v_17 - p_13 % 4294967173UL) - (unsigned long)v_10;
  result = (unsigned int)(((unsigned long long)p / (((unsigned long long)(
                                                     1021368730LL / (long long)(
                                                     (int)p + 409)) - 18446744072214413611ULL) + 17ULL)) % (
                          (unsigned long long)((1.84467440737e+19 * v_6 - (double)(
                                                (int)p - (int)p)) / (
                                               (double)((int)(v_6 - v_6) * (
                                                        (int)p * (int)v_15)) + 866.)) + 916ULL));
  result = (unsigned int)(((float)(((int)((unsigned short)-2.45431556715e+37f) + (int)v) << (
                                   - v_4 & 31UL)) - ((float)(result << (
                                                             (unsigned int)v_6 & 31U)) - (
                                                     (float)v_8 + v_10))) / (
                          (float)((int)p << (- (p_13 % (unsigned long)(
                                                (int)v_15 + 746)) & 7UL)) + 386.f));
  return result;
}


