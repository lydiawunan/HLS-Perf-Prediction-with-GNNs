#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 376259090
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p[3][4][4], unsigned short p_11,
           unsigned char p_13[2])
{
  short v_8;
  float v_6;
  signed char v_4;
  long v;
  double result;
  v_8 = (short)-9124;
  v = (long)(! (~ ((int)p[0][0][2] / ((int)p_11 + 995))) << (3399582298UL % (unsigned long)(
                                                             (int)p_13[1] + 431) & 31UL));
  v_6 = (float)(unsigned char)2;
  v_4 = (signed char)(- (0ULL / ((41901515ULL + (unsigned long long)v) + 891ULL) + (unsigned long long)(
                         (long long)(! v_8) % -86168447LL)));
  result = (double)((v * (long)((float)(! v_4) - 1042910144.f * v_6)) % 22L);
  return result;
}


