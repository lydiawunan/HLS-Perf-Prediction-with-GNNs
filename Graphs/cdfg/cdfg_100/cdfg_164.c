#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 520536575
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p, short p_4[1][5][4], unsigned long long p_9,
                unsigned int p_11[1], unsigned long p_13[2][4])
{
  signed char v_19;
  float v_17;
  double v_15;
  unsigned char v_7;
  unsigned int v;
  signed char result;
  v_19 = (signed char)p_9;
  v_17 = (float)p;
  v_15 = (double)p_4[0][3][3];
  result = (signed char)p_13[0][3];
  if (476947811ULL + p_9 % ((unsigned long long)(v_15 / (double)(v_17 + 735.f)) + 227ULL) <= 18446744073709504956ULL) {
    v_15 = (8. + - v_15) * (double)((unsigned long)p / (p_13[1][2] + 315UL) - (unsigned long)v_17);
    v_17 = (float)v_19;
    v_7 = (unsigned char)(- (46ULL % (p_9 + 675ULL) - 1021536042ULL));
  }
  else {
    v_7 = (unsigned char)(- -23115);
    v_15 = (double)(unsigned char)3;
    v_17 = (float)(! 10U);
  }
  if (! (p_9 - (unsigned long long)v_7) + (unsigned long long)((double)(
                                                               4294927455U + (unsigned int)p_4[0][1][2]) / (
                                                               v_15 / (double)(
                                                               v_17 + 437.f) + 306.)) >= (unsigned long long)p_4[0][1][1]) 
    result = (signed char)((unsigned long long)(- (- p)) * 36087ULL);
  else {
    v_7 = (unsigned char)p_13[0][1];
    v = (unsigned int)(~ -34539);
    result = (signed char)((unsigned long long)((unsigned int)((int)result - (int)p_4[0][0][3]) + ~ v) & (
                           ((unsigned long long)v_7 + p_9) - (unsigned long long)(! p_11[0])));
  }
  return result;
}


