#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 274370563
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p, unsigned long p_11, unsigned char p_13,
           double p_17, double p_21)
{
  int v_23;
  double v_19;
  char v_15;
  long v_9;
  float v_6;
  signed char v_4;
  short v;
  double result;
  v_23 = (int)p_21;
  v_19 = p_21;
  v_15 = (char)-90;
  v_9 = (long)p_11;
  v = (short)17521;
  result = p_17;
  if (- (! (24105 * (int)v)) < (int)p) {
    v_9 = (long)((double)(((int)p_13 + (int)p) / ((int)(-62299. - result) + 645)) * - (
                 809975820. - p_21));
    v_6 = (float)((unsigned long)v_19 & ~ p_11 / ((unsigned long)(8831427584. * p_17) + 456UL));
    v_4 = (signed char)((double)(52167LL / (long long)((unsigned long)v_15 / (
                                                       p_11 + 985UL) + 727UL)) * p_17);
  }
  else {
    v_6 = (float)((unsigned long)p_13 - ((unsigned long)v_15 / 3735081626UL) / (
                                        (unsigned long)((double)v_23 / (
                                                        v_19 + 553.)) + 718UL));
    v_15 = (char)p_17;
    v_4 = (signed char)(((int)v_15 | (int)((char)(v_6 + 668482624.f))) * (int)(
                        (double)(- v_9) / (p_21 * (double)v_9 + 327.)));
  }
  if ((unsigned long long)((long)(((int)((signed char)v_6) + 25) % 56) + 
                           (long)(~ p) % (v_9 + 95L)) != (unsigned long long)p_11 % (
                                                         ((839745379ULL + (unsigned long long)v_6) + (unsigned long long)(
                                                          (float)p_13 / -5380580352.f)) + 410ULL)) {
    result = (double)(signed char)-124;
    v = (short)(((762.566894531 / (result + 612.)) * (double)((float)v_4 / 1273.45043945f)) / (
                (double)v + 495.));
    result = (double)v;
  }
  else result = (double)(signed char)100;
  return result;
}


