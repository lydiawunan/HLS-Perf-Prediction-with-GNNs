#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 154630232
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(double p)
{
  long long v_11;
  unsigned long v_9;
  unsigned long v_7;
  unsigned char v_5;
  signed char v;
  unsigned short result;
  v_11 = (long long)p;
  v_9 = 3857385519UL;
  v_5 = (unsigned char)20;
  v = (signed char)72;
  result = (unsigned short)((double)(v_11 % (long long)(((unsigned long)(
                                                         (int)v ^ (int)((signed char)-999.899797825)) | 29402316UL) + 893UL)) + 
                            (double)(558ULL - (unsigned long long)(v_9 / 251UL)) / (
                            p + 552.));
  v_7 = (unsigned long)((double)(- (51852UL << (- v_9 & 31UL))) - (- (
                                                                   (double)v_11 + p) + 82304976.));
  v = (signed char)((unsigned long long)result / (((unsigned long long)result - (
                                                   (unsigned long long)v_5 % 973930375ULL | (unsigned long long)(
                                                   3457046374UL + v_7))) + 681ULL));
  result = (unsigned short)(((double)(- (-8252023808.f + (float)v)) + (
                             -23473. - p)) + 0.);
  return result;
}


