#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 115241942
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(signed char p, unsigned short p_9, char p_13, double p_15)
{
  long v_11;
  int v_7;
  unsigned long long v_5;
  char v;
  long long result;
  v_11 = 642320774L;
  v_5 = (unsigned long long)p_13;
  v = (char)p_9;
  result = 1861LL;
  v_5 = (unsigned long long)(((double)(- (v_5 - (unsigned long long)v)) + p_15) - (double)(
                             ((int)p - (int)(- p_13)) / ((int)p + 432)));
  v_7 = (int)(~ (v_5 / 18446744073709538811ULL + (unsigned long long)(
                 (long long)v_11 % (result + 116LL))) & (unsigned long long)(
              (((int)p_9 & -107) & (int)(! p_9)) + ((int)-2.03480333399e+38f % -362) / (
                                                   (int)(~ p_13) + 842)));
  v_5 = (unsigned long long)(~ result);
  result = (long long)(((unsigned long long)((result - -89LL) % (long long)(
                                             44445L / (long)((int)v + 399) + 744L)) | 
                        (unsigned long long)(~ p) / ((v_5 - (unsigned long long)v_7) + 910ULL)) + (unsigned long long)(
                       (int)p_9 * (int)v));
  return result;
}


