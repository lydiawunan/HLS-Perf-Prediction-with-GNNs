#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 601630914
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, double p_5, long long p_7, unsigned short p_15,
          unsigned int p_19)
{
  char v_21;
  unsigned short v_17;
  char v_13;
  unsigned long long v_11;
  char v_9;
  unsigned long v;
  float result;
  v_21 = (char)-63;
  v_17 = (unsigned short)27678;
  v_13 = (char)p;
  v_11 = 18446744073709530680ULL;
  v_9 = (char)-46;
  v = (unsigned long)((unsigned long long)((1037260218LL + (long long)v_13) % (long long)(
                                           (unsigned int)p_15 % (p_19 + 412U) + 105U)) - (
                      (unsigned long long)((int)v_17 + (int)v_21) & 18446744073006204464ULL % (unsigned long long)(
                                                                    (int)v_13 + 844)));
  if ((unsigned long long)((v | (unsigned long)v_9) - 13UL) % ((v_11 + (unsigned long long)v_13) / (unsigned long long)(
                                                               ((int)p_15 | (int)((unsigned short)4.61961542311e+37)) + 472) + 803ULL) < (unsigned long long)(! (
      (long long)(~ v_17) / (p_7 / -27169LL + 479LL)))) result = (float)(unsigned char)221;
  else {
    v = (unsigned long)(-28854);
    result = (float)(((double)(54530UL * v) + ((double)p - p_5)) + (double)p_7);
  }
  return result;
}


