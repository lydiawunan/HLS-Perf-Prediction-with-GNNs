#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 83317017
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned short p[3][3], double p_4, short p_6, unsigned short p_8,
        long long p_15)
{
  short v_19;
  unsigned long long v_17;
  char v_13;
  char v_11;
  unsigned long v;
  int result;
  v_17 = 107313950ULL;
  v_13 = (char)p_15;
  v_11 = (char)-21;
  v_19 = (short)-18438;
  v = (unsigned long)(((unsigned long long)((long long)(41 + (int)v_13) % (
                                            (-21LL - p_15) + 405LL)) | 
                       (unsigned long long)((long long)v_13 + p_15) * (
                       v_17 - (unsigned long long)p_8)) + (unsigned long long)(! (
                      (int)((short)-3.02137056638e+38f) + (int)(~ v_19))));
  v_11 = (char)(4294929216UL | (unsigned long)(~ v_11));
  result = (int)((long long)(~ ((int)p[1][2] * (int)p[0][2])) / ((-292408621LL - (long long)(
                                                                  (int)((short)p_4) + (int)p_6)) + 704LL) & (long long)(
                 ((unsigned long)(~ p_8) / ((v - (unsigned long)v_11) + 803UL)) % (unsigned long)(
                 (int)v_13 + 750)));
  return result;
}


