#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 712257298
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p)
{
  unsigned int v_18;
  unsigned long long v_16;
  float v_14;
  long v_12;
  unsigned char v_10;
  long v_8;
  double v_6;
  char v_4;
  double v;
  short result;
  v_18 = 4294902224U;
  v_16 = p;
  v_14 = (float)p;
  v_12 = -379450182L;
  v_8 = -64846L;
  v_6 = (double)p;
  v = (double)p;
  result = (short)(((p / 4294923690ULL - p) - (v_16 & 18446744073709498977ULL) / (
                                              p * 18446744073709511239ULL + 180ULL)) + 
                   (unsigned long long)((float)p / 531.f) % (~ ((unsigned long long)v_6 % 18446744073709511633ULL) + 367ULL));
  v_4 = (char)(((unsigned long long)v_12 - ((unsigned long long)v_14 * 483108567ULL & ~ v_16)) / (
               (unsigned long long)((unsigned int)(v - (double)v_14) >> (
                                    5598U / (v_18 + 872U) & 31U)) * p + 880ULL));
  v_10 = (unsigned char)result;
  result = (short)(! ((long)(v / 1.84467440737e+19) / ((-349294846L + (long)v_4) + 670L)) * (long)(
                   v_6 * (double)(33675UL % (unsigned long)((v_8 + (long)v_10) + 124L))));
  return result;
}


