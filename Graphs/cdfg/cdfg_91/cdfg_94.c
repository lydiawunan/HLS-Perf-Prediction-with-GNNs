#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 746016887
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long long p, unsigned long long p_4[5][4], unsigned char p_6,
         short p_8, double p_11)
{
  double v_19;
  long v_17;
  float v_15;
  short v_13;
  unsigned long long v;
  char result;
  v_19 = -2290566315.84;
  v_17 = (long)p_8;
  v_15 = (float)p_4[0][3];
  v_13 = (short)p_6;
  result = (char)-32;
  v = (unsigned long long)((((double)p - p_11) - -235.999487902) - (double)(
                           (float)p / (90616832.f / (v_15 + 350.f) + 200.f)));
  while ((unsigned long long)(14832U | (unsigned int)(-124 + (int)p_8) / 4294936169U) > 
         (v * (unsigned long long)(- p_11)) * (unsigned long long)((int)p_6 % (
                                                                   ((int)p_6 - (int)v_13) + 255))) {
    v_13 = (long long)v_15 / 20149LL;
    result = (char)((unsigned int)((double)((long)p_6 % (v_17 + 658L)) / (
                                   (v_19 + p_11) + 67.)) | 39366U / (
                                                           (3942177472U >> (
                                                            p & 31LL)) + 986U));
    v_15 = (float)(unsigned char)38;
    v = (unsigned long long)(- ((long)p_8 + v_17) - (long)((int)-9.50662702432e+37f + 
                                                           (int)p_8 % 760614262));
  }
  while_0_break: ;
  return result;
}


