#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 651148359
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long p, char p_9, char p_13[1])
{
  unsigned char v_21;
  unsigned int v_19;
  short v_17;
  int v_15;
  char v_11;
  signed char v_7;
  int v_4;
  long long v;
  unsigned long long result;
  v_21 = (unsigned char)p_9;
  v_19 = (unsigned int)p;
  v_15 = (int)p_13[0];
  v_11 = (char)p;
  v = -152497164LL;
  v_17 = (short)((v_15 + (int)p_9) + (int)((float)v * 8278142464.f - (float)(
                                           48237U - (v_19 + (unsigned int)v_21))));
  v_7 = (signed char)((unsigned long)((long)v_17 + 59L % (p + 290L)) * 3445589160UL - (unsigned long)(! p_13[0]));
  v_4 = (int)((- p + (long)(((int)v_11 + (int)p_13[0]) % ((v_15 - (int)v_17) + 1003))) + p);
  result = (unsigned long long)(((-850764604LL + v) % (long long)((126 - v_4) + 50)) * (
                                (long long)p | v * (long long)v_7) | (long long)(
                                ~ ((int)((char)138.393369675) & -50) - (int)p_9));
  return result;
}


