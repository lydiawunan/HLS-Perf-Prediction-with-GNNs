#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 702192466
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p[3][5], long p_5, double p_7, double p_13[2][2][1],
         int p_21[2][3])
{
  double v_19;
  char v_17;
  signed char v_15;
  unsigned short v_11;
  double v_9;
  int v;
  long result;
  v_19 = (double)p_21[1][0];
  v_17 = (char)-46;
  v_15 = (signed char)p_7;
  v_9 = p_13[1][1][0];
  v_11 = (unsigned short)p_7;
  v = (int)(((double)((int)(- v_9) % ((-12817 + (int)v_11) + 342)) / (
             ((double)((unsigned long)p_5 & 58739UL) - p_13[0][0][0] * (double)v_15) + 442.)) / (
            ((double)((unsigned long long)((double)v_17 * v_19) * (18446744072882537749ULL + (unsigned long long)p_21[1][2])) - (
             v_9 - (double)(-26L / (p_5 + 553L)))) + 542.));
  result = (long)p_7;
  result = (long)((unsigned long long)((long)(! (231 + (int)((unsigned char)p[2][3]))) - 
                                       (long)(~ v) % (result + 892L)) | ~ (
                  54408ULL - (unsigned long long)p_5));
  return result;
}


