#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 491591166
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(double p)
{
  int v_20;
  double v_18;
  unsigned long v_16;
  unsigned short v_14;
  unsigned int v_12;
  unsigned char v_10;
  long long v_8;
  double v_6;
  float v_4;
  int v;
  unsigned long long result;
  v_20 = -633333630;
  v_18 = -1.68770665477e+38;
  v_16 = 22646715UL;
  v_14 = (unsigned short)p;
  v_12 = (unsigned int)p;
  v_10 = (unsigned char)p;
  v_6 = p;
  v = 663517014;
  v = (int)((v_16 % (unsigned long)(v_20 + 483) - (unsigned long)(22622 / (
                                                                  v + 455))) / (unsigned long)(
            (42272L / ((long)p + 939L)) * (long)(75 + (int)v_10) + 150L) << (
            ((((unsigned long)v_10 - 1047251650UL) ^ 0UL) - 1060UL % (unsigned long)(
                                                            (int)(~ v_14) + 49)) & 31UL));
  v_8 = (long long)v_18;
  v_4 = (float)(((int)(! v_10) << (v_12 & 7U)) ^ (int)((-8.30640377363e+37 + (
                                                        (double)v_14 - v_6)) * (double)v_16));
  result = (unsigned long long)((long long)(- (24458 % (- v + 723))) - (
                                (long long)((double)v_4 * v_6) * ~ v_8 + v_8));
  return result;
}


