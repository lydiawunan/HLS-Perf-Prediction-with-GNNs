#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 177141174
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, unsigned long p_11[3][4][4])
{
  signed char v_15;
  float v_13;
  unsigned long v_8;
  unsigned long v_6;
  unsigned short v_4;
  long v;
  signed char result;
  v_15 = (signed char)68;
  v_13 = 4.91006708145f;
  v_8 = p_11[1][3][0];
  v_6 = 3550609758UL;
  v = 645104067L;
  v_4 = (unsigned short)(! (((unsigned long)3.18387201518e+38f % (p_11[0][2][0] + 476UL)) / (
                            (v_6 + (unsigned long)v_15) + 211UL) + (v_8 / (unsigned long)(
                                                                    p + 268U)) / (
                                                                   ! v_6 + 643UL)));
  result = (signed char)(~ ((p_11[1][1][1] - (unsigned long)v_4) << (
                            (unsigned long)-773.344643838 & 31UL)) | (
                         (unsigned long)(! p) - ((unsigned long)v_13 + 
                                                 p_11[1][3][0] % 4294963673UL)));
  v_4 = (unsigned short)(- ((double)((32UL + v_8) / (unsigned long)(p + 259U)) + 8274941421.63));
  result = (signed char)((unsigned long long)((unsigned long)(! v) % (
                                              (unsigned long)(~ result) / (
                                              ((unsigned long)v_4 - v_6) + 1004UL) + 213UL)) ^ 18446744072919158766ULL);
  return result;
}


