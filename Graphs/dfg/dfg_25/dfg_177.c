#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 50148947
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p, long p_7, float p_9, double p_13,
                       signed char p_15)
{
  unsigned long v_17;
  unsigned long v_11;
  unsigned long long v_5;
  short v;
  unsigned long long result;
  v_17 = 4059749314UL;
  v_5 = 670189479ULL;
  v_11 = (unsigned long)((unsigned int)(p_13 / ((double)((unsigned long long)(~ p_15) / (
                                                         ((unsigned long long)v_17 ^ v_5) + 392ULL)) + 745.)) / (
                         p + 77U));
  v = (short)((v_5 * 4294945504ULL) * (unsigned long long)(702L / ((! p_7 >> (
                                                                    (long)(
                                                                    p_9 / (
                                                                    (float)v_11 + 758.f)) & 31L)) + 952L)));
  result = (unsigned long long)v;
  result = (unsigned long long)(- ((-413.890411377f * (float)p) / -33869.f)) * (
           (unsigned long long)(~ (22840 << 1)) - (18446744073709526960ULL + result) % (unsigned long long)(
                                                  p + 148U));
  return result;
}


