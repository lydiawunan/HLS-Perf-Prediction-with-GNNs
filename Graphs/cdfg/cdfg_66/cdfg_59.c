#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 444252904
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p, unsigned int p_7[3][1], short p_9[3][3],
          double p_15, float p_17)
{
  short v_23;
  unsigned short v_21;
  double v_19;
  unsigned long long v_13;
  char v_11;
  unsigned short v_5;
  short v;
  float result;
  v_23 = (short)17398;
  v_21 = (unsigned short)p_7[0][0];
  v_19 = p_15;
  v_13 = (unsigned long long)p_7[1][0];
  v_11 = (char)29;
  v_5 = (unsigned short)p;
  v = (short)23875;
  result = (float)p_9[2][2];
  if (1166952224ULL / (unsigned long long)((unsigned long)(-1040306367L * (long)result) / (unsigned long)(
                                           p_7[2][0] / (unsigned int)(
                                           (int)v_23 + 404) + 906U) + 472UL) != (unsigned long long)(
      (int)((short)(21293.f / (result * 35757.f + 628.f))) + (int)p_9[1][2])) {
    v_5 = (unsigned short)((double)(- v_13 % (unsigned long long)((-755747516 + (int)v) + 760)) * (
                           - p_15 + (double)p_17 / (v_19 + 527.)));
    result = (float)(((int)p_9[2][1] << (((int)v_11 & 37) & 15)) - (int)(- (
                     result + (float)v_13)));
    v = (short)35;
  }
  else {
    v_5 = (unsigned short)((unsigned int)v_5 * p ^ (unsigned int)(- v_23));
    v = (short)v_21;
    result = (float)(~ (short)-2909);
  }
  if ((float)((int)(~ v) + (int)v_5) <= (float)((unsigned int)-341.891326904f - 
                                                4294967294U % (p_7[0][0] + 905U)) * result) {
    result = (float)2.11898441034e+37;
    result = (float)((46430LL + (long long)((unsigned int)result & p)) - (long long)p);
  }
  else result = (float)(- ((int)((unsigned char)-518110752.f) % 586));
  return result;
}


